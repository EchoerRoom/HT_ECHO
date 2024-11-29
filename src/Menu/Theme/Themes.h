#pragma once

#include "../../Vendors/imgui/imgui.h"
#include "../Config/ConfigManager.h"

static int fontindex_menu = 1;
static int theme_index = 1;
static int style_index = 1;
//
void dark_theme();
void light_theme();
void pink_theme();
//
void cozy_style();
void my_style();
void cozy_square_style();
//
void setTheme(int themeIndex);
void setStyle(int styleIndex);
