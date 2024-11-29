#pragma once

#include <fstream>
#include <string>

#include "ConfigField.h"
#include "../../Vendors/json/json.hpp"
#include "../util.h"

using json = nlohmann::json;

namespace config {
    void save(json config);

    template <typename T>
    ConfigField<T> getValue(const std::string& path, const std::string& key, const T& defaultValue) {
        std::ifstream configFile("wuwaecho.json");
        json configRoot;

        // 如果文件不存在，则初始化一个默认的 JSON 文件
        if (!configFile.is_open()) {
            configRoot = {};  // 初始化空的 JSON 对象
            configRoot[path][key] = defaultValue;  // 设置默认值
            config::save(configRoot);  // 保存到文件
            return ConfigField<T>(path, key, defaultValue);
        }

        // 尝试读取 JSON 数据
        try {
            configFile >> configRoot;
        }
        catch (const std::exception& e) {
            // 如果 JSON 格式无效，使用默认值重新初始化
            configRoot = {};
            configRoot[path][key] = defaultValue;
            config::save(configRoot);
            return ConfigField<T>(path, key, defaultValue);
        }
        configFile.close();

        // JSON 路径解析逻辑
        if (path.find(":") != std::string::npos) {
            auto sections = util::split(path, ":");
            json* configTemp = &configRoot;

            for (const auto& section : sections) {
                if (!configTemp->contains(section))
                    (*configTemp)[section] = {};  // 如果路径不存在，创建空对象
                configTemp = &(*configTemp)[section];
            }

            if (!configTemp->contains(key)) {
                (*configTemp)[key] = defaultValue;  // 如果键不存在，写入默认值
                config::save(configRoot);
            }
            return ConfigField<T>(path, key, (*configTemp)[key]);
        }

        // 如果路径不存在，初始化路径和键
        if (!configRoot.contains(path) || !configRoot[path].contains(key)) {
            configRoot[path][key] = defaultValue;  // 设置默认值
            config::save(configRoot);  // 保存文件
        }

        return ConfigField<T>(path, key, configRoot[path][key]);
    }


    template<typename T>
    void setValue(const std::string& path, const std::string& key, const T& newValue) {
        std::ifstream configFile("wuwaecho.json");
        json configRoot;
        
        configFile >> configRoot;
        configFile.close();

        json* configTemp = &configRoot;

        if (path.find(":") != std::string::npos) {
            auto sections = util::split(path, ":");

            for (auto& section : sections) {
                if (!configTemp->contains(section))
                    (*configTemp)[section] = {};

                configTemp = &(*configTemp)[section];
            }

            (*configTemp)[key] = newValue;
            save(configRoot);
            return;
        }

        configRoot[path][key] = newValue;
        save(configRoot);
    }

    template<typename T>
    void setValue(ConfigField<T>& field, const T& newValue) {
        setValue(field.getPath(), field.getKey(), newValue);
    }
}
