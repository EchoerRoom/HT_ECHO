#include "Hotkey.h"

bool Hotkey::IsPressed() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - lastInputTime).
        count() > 100 && ImGui::IsKeyPressed(static_cast<ImGuiKey>(this->key), false);
}

bool Hotkey::IsDown() {
    return ImGui::IsKeyDown(static_cast<ImGuiKey>(this->key));
}

bool Hotkey::Listen(ConfigField<bool>& field) {
    const bool value = !field.getValue();

    if (this->IsPressed()) {
        field.setValue(value);
        config::setValue(field, value);
    }
    return value;
}

void Hotkey::Draw(const char* label, const char* description, bool clearable) {
    ImGui::PushID(std::format("{}:{}", this->path, this->name).c_str());
    ImGui::TextUnformatted(label);

    if (description != nullptr) {
        ImGui::SameLine();
        HelpMarker(description);
    }

    ImGui::SameLine();

    if (!this->waitInput && ImGui::Button(KeyBind::getKeyName(this->key).c_str(), ImVec2(100.0f, 0.0f)))
        this->waitInput = true;
    else if (this->waitInput)
        ImGui::Button("...", ImVec2(100.0f, 0.0f));

    if (this->waitInput)
        this->Rebind();

    if (clearable) {
        ImGui::SameLine();

        if (ImGui::Button("Clear", ImVec2(75.0f, 0.0f))) {
            this->key = -1;
            config::setValue(this->path, this->name, this->key);
        }
    }

    ImGui::PopID();
}

void Hotkey::Rebind() {
    this->lastInputTime = std::chrono::steady_clock::now();

    if (this->waitInput && KeyBind::SetToPressedKey(this->path, this->name, &this->key))
        this->waitInput = false;
}
