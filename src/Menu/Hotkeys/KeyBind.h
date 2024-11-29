#pragma once

#include <string>

#include "../../Vendors/imgui/imgui.h"

namespace KeyBind {
	bool SetToPressedKey(const std::string& path, const std::string& name, short* key);

	short getPressedHotkey();
	short InputToLegacy(short inputKey);
	std::string getKeyName(short key);
	bool IsKeyDown(ImGuiKey key);
	bool IsKeyPressed(ImGuiKey key);
	ImGuiKey LegacyToInput(short key);
};
