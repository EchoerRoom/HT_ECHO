#include "Translater.h"


#include "../Functions/Setting/Setting.h"

#include <optional>

std::string result;

std::string LoadResourceString(int resourceId, LPCSTR resourceType) {
    HMODULE handle = GetModuleHandle("HTC.dll");
    HRSRC resource = FindResource(handle, MAKEINTRESOURCE(resourceId), resourceType);

    if (!resource) {
        LOG_ERROR("Resource not found.");
        return "";
    }

    HGLOBAL loadedResource = LoadResource(handle, resource);

    if (!loadedResource) {
        LOG_ERROR("Failed to load resource.");
        return "";
    }

    DWORD size = SizeofResource(handle, resource);
    LPCSTR data = static_cast<LPCSTR>(LockResource(loadedResource));

    if (size == 0 || !data) {
        LOG_ERROR("Resource data is invalid.");
        return "";
    }

    return std::string(data, size);
}

enum class Lang {
    EN,
    CN
};

std::optional<std::string> safeGet(nlohmann::json& json, const std::string& key, const Lang& lang) {
    const std::string& langStr = magic_enum::enum_name(lang).data();

    if (json.contains(langStr) && json[langStr].is_object() && json[langStr].contains(key))
        return json[langStr][key].get<std::string>();
    return key;
}

std::u8string u8result;

const char* tr(const char* code) {
    static nlohmann::json trJson;

    if (result.empty()) {
        result = LoadResourceString(R_LANGUAGES, RT_RCDATA);

        if (result.empty())
            return code;

        try {
            trJson = nlohmann::json::parse(result);
        }
        catch (nlohmann::json::parse_error& e) {
            LOG_ERROR("JSON parsing error: %s", e.what());
            return code;
        }
    }

    int languageValue = Cheat::Settings::getInstance().f_Language.getValue();
    std::string str = safeGet(trJson, code, static_cast<Lang>(languageValue))
        .value_or(safeGet(trJson, code, Lang::CN)
            .value_or("NOT FOUND"));
    u8result = std::u8string(str.begin(), str.end());
    return reinterpret_cast<const char*>(u8result.c_str());
}
