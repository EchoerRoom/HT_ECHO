#pragma once

#include <chrono>
#include <Windows.h>

#include "KeyBind.h"

#include "../../Vendors/imgui/imgui.h"
#include "../config/ConfigManager.h"
#include "../Widget.h"

class Hotkey {
    short key = -1;
    const char* path = "";
    const char* name = "";
    bool waitInput = false;
    std::chrono::steady_clock::time_point lastInputTime;
public:
    explicit Hotkey() = default;

    explicit Hotkey(const char* path) {
        this->key = config::getValue<short>(path, "hotkey", -1).getValue();
        this->path = path;
        this->name = "hotkey";
    }

    explicit Hotkey(const char* path, short key) {
        this->key = config::getValue<short>(path, "hotkey", key).getValue();
        this->path = path;
        this->name = "hotkey";
    }

    explicit Hotkey(const char* path, const char* name) {
        this->key = config::getValue<short>(path, name, -1).getValue();
        this->path = path;
        this->name = name;
    }

    explicit Hotkey(const char* path, const char* name, short key) {
        this->key = config::getValue<short>(path, name, key).getValue();
        this->path = path;
        this->name = name;
    }

    bool IsPressed();
    bool IsDown();
    bool Listen(ConfigField<bool>& field);
    void Draw(const char* label = "Hotkey", const char* description = nullptr, bool clearable = true);
    void Rebind();
};
