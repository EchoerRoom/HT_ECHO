﻿#pragma once

#include <Windows.h>
#include <optional>
#include <libloaderapi.h>

#include "../../../Vendors/imgui/imgui.h"

bool LoadFontFromResources(ImFontConfig font_cfg, const wchar_t* fontName, float fontSize);
