#include "Themes.h"

void dark_theme() {
    ImGui::StyleColorsDark();
    ImGuiStyle& style = ImGui::GetStyle();
    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_TextDisabled] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.16f, 0.16f, 0.20f, 0.95f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.21f, 0.21f, 0.27f, 0.50f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.31f, 0.31f, 0.36f, 1.00f);
    colors[ImGuiCol_Border] = ImVec4(0.41f, 0.41f, 0.47f, 1.00f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.33f, 0.33f, 0.38f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.48f, 0.48f, 0.55f, 1.00f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.14f, 0.14f, 0.18f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.13f, 0.13f, 0.16f, 0.95f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.16f, 0.16f, 0.20f, 0.95f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.33f, 0.33f, 0.38f, 0.65f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.17f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.16f, 0.16f, 0.20f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.33f, 0.33f, 0.38f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.48f, 0.48f, 0.55f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_CheckMark] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.48f, 0.48f, 0.55f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.33f, 0.33f, 0.38f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.48f, 0.48f, 0.55f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.14f, 0.14f, 0.18f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.32f, 0.61f, 0.53f, 1.00f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.48f, 0.48f, 0.55f, 1.00f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.14f, 0.14f, 0.18f, 1.00f);
    colors[ImGuiCol_Separator] = ImVec4(0.30f, 0.30f, 0.36f, 1.00f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.33f, 0.33f, 0.38f, 0.00f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.48f, 0.48f, 0.55f, 1.00f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_Tab] = ImVec4(0.30f, 0.30f, 0.36f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.32f, 0.61f, 0.52f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.48f, 0.48f, 0.55f, 1.00f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.32f, 0.61f, 0.52f, 1.00f);
    colors[ImGuiCol_DragDropTarget] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_NavHighlight] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
}
void pink_theme() {
    ImGui::StyleColorsDark();
    ImGuiStyle& style = ImGui::GetStyle();
    ImVec4* colors = ImGui::GetStyle().Colors;
    // 基本颜色调整
    colors[ImGuiCol_Text] = ImVec4(0.95f, 0.95f, 0.95f, 1.00f);                // 文字颜色（柔和的白色）
    colors[ImGuiCol_TextDisabled] = ImVec4(0.7f, 0.7f, 0.7f, 1.00f);           // 禁用文字颜色
    colors[ImGuiCol_WindowBg] = ImVec4(0.92f, 0.84f, 0.90f, 1.00f);            // 窗口背景色（柔和粉色）
    colors[ImGuiCol_ChildBg] = ImVec4(0.95f, 0.90f, 0.95f, 1.00f);             // 子窗口背景色（浅粉色）
    colors[ImGuiCol_Border] = ImVec4(0.85f, 0.6f, 0.8f, 1.00f);                // 边框颜色（浅紫粉色）
    colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0f, 0.0f, 0.00f);           // 边框阴影

    // 按钮样式
    colors[ImGuiCol_Button] = ImVec4(0.85f, 0.45f, 0.75f, 1.00f);              // 按钮背景色（亮粉色）
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.9f, 0.5f, 0.8f, 1.00f);         // 按钮悬浮背景色（淡粉色）
    colors[ImGuiCol_ButtonActive] = ImVec4(0.8f, 0.4f, 0.7f, 1.00f);          // 按钮点击背景色（较深粉色）

    // 标题栏样式
    colors[ImGuiCol_TitleBg] = ImVec4(0.8f, 0.45f, 0.7f, 1.00f);              // 标题栏背景色（柔和粉色）
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.9f, 0.55f, 0.8f, 1.00f);        // 激活标题栏背景色（浅粉色）
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.85f, 0.5f, 0.75f, 0.9f);     // 收起标题栏背景色（淡粉色）

    // 选中框样式
    colors[ImGuiCol_CheckMark] = ImVec4(1.0f, 0.4f, 0.7f, 1.00f);             // 选中框颜色（亮粉色）

    // 滑块样式
    colors[ImGuiCol_SliderGrab] = ImVec4(0.9f, 0.5f, 0.8f, 1.00f);            // 滑块拖动条（粉色）
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.8f, 0.4f, 0.7f, 1.00f);      // 滑块活动时的拖动条（深粉色）

    //// 输入框样式
    //colors[ImGuiCol_InputText] = ImVec4(0.95f, 0.9f, 0.95f, 1.00f);           // 输入框背景色（浅粉色）
    //colors[ImGuiCol_InputTextHovered] = ImVec4(1.0f, 0.5f, 0.8f, 1.00f);      // 输入框悬浮时背景色（粉色）
    //colors[ImGuiCol_InputTextActive] = ImVec4(0.8f, 0.4f, 0.7f, 1.00f);       // 输入框活动时背景色（深粉色）

    // 滚动条样式
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.2f, 0.2f, 0.25f, 1.00f);          // 滚动条背景色（暗色）
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.85f, 0.45f, 0.75f, 1.00f);       // 滚动条滑块颜色（亮粉色）
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.9f, 0.5f, 0.8f, 1.00f);   // 滚动条滑块悬浮颜色（粉色）
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.8f, 0.4f, 0.7f, 1.00f);    // 滚动条滑块活动颜色（深粉色）

    // 表格和列表样式
    colors[ImGuiCol_TableHeaderBg] = ImVec4(0.8f, 0.45f, 0.7f, 1.00f);         // 表头背景色（粉色）
    colors[ImGuiCol_TableRowBg] = ImVec4(0.95f, 0.9f, 0.95f, 1.00f);           // 表格行背景色（浅粉色）
    colors[ImGuiCol_TableRowBgAlt] = ImVec4(0.85f, 0.75f, 0.85f, 1.00f);       // 表格交替行背景色（浅紫色）
}
void light_theme() {
    ImGui::StyleColorsLight();
    ImGuiStyle& style = ImGui::GetStyle();
    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text] = ImVec4(0.22f, 0.22f, 0.22f, 1.00f);
    colors[ImGuiCol_TextDisabled] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.81f, 0.82f, 0.87f, 0.95f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.87f, 0.88f, 0.92f, 0.50f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.91f, 0.92f, 0.96f, 1.00f);
    colors[ImGuiCol_Border] = ImVec4(0.98f, 0.98f, 1.00f, 1.00f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.92f, 0.92f, 0.96f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.96f, 0.97f, 1.00f, 1.00f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.81f, 0.82f, 0.87f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.72f, 0.73f, 0.78f, 0.95f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.81f, 0.82f, 0.87f, 0.95f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.81f, 0.82f, 0.87f, 0.65f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.81f, 0.82f, 0.87f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.81f, 0.82f, 0.87f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.92f, 0.93f, 0.96f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.96f, 0.97f, 1.00f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_CheckMark] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.96f, 0.97f, 1.00f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.92f, 0.93f, 0.96f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.96f, 0.97f, 1.00f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.81f, 0.82f, 0.87f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.55f, 0.88f, 0.75f, 1.00f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.96f, 0.97f, 1.00f, 1.00f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.81f, 0.82f, 0.87f, 1.00f);
    colors[ImGuiCol_Separator] = ImVec4(0.92f, 0.93f, 0.96f, 1.00f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.92f, 0.93f, 0.96f, 0.00f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.96f, 0.97f, 1.00f, 1.00f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_Tab] = ImVec4(0.92f, 0.93f, 0.96f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.55f, 0.88f, 0.75f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.96f, 0.97f, 1.00f, 1.00f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.55f, 0.88f, 0.75f, 1.00f);
    colors[ImGuiCol_DragDropTarget] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
    colors[ImGuiCol_NavHighlight] = ImVec4(0.38f, 0.80f, 0.63f, 1.00f);
}

void amoled_theme() {
    ImGui::StyleColorsLight();
    ImGuiStyle& style = ImGui::GetStyle();
    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_TextDisabled] = ImVec4(1.00f, 0.00f, 0.75f, 1.00f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.09f, 0.08f, 0.09f, 0.95f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.15f, 0.14f, 0.15f, 1.00f);
    colors[ImGuiCol_Border] = ImVec4(0.29f, 0.22f, 0.27f, 1.00f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.19f, 0.18f, 0.19f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.29f, 0.24f, 0.27f, 1.00f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.07f, 0.04f, 0.06f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.95f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.09f, 0.08f, 0.09f, 0.95f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.65f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.09f, 0.08f, 0.09f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.09f, 0.08f, 0.09f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.19f, 0.18f, 0.19f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.29f, 0.24f, 0.27f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(1.00f, 0.00f, 0.75f, 1.00f);
    colors[ImGuiCol_CheckMark] = ImVec4(1.00f, 0.00f, 0.75f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(1.00f, 0.00f, 0.75f, 1.00f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.29f, 0.24f, 0.27f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.19f, 0.18f, 0.19f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.29f, 0.24f, 0.27f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.07f, 0.04f, 0.06f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(1.00f, 0.00f, 0.75f, 1.00f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.29f, 0.24f, 0.27f, 1.00f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.07f, 0.04f, 0.06f, 1.00f);
    colors[ImGuiCol_Separator] = ImVec4(0.29f, 0.22f, 0.27f, 1.00f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(1.00f, 0.00f, 0.75f, 1.00f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(1.00f, 0.00f, 0.75f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.19f, 0.18f, 0.19f, 0.00f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.29f, 0.24f, 0.27f, 1.00f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(1.00f, 0.00f, 0.75f, 1.00f);
    colors[ImGuiCol_Tab] = ImVec4(0.19f, 0.18f, 0.19f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.75f, 0.41f, 0.69f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.29f, 0.24f, 0.27f, 1.00f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.75f, 0.41f, 0.69f, 1.00f);
    colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 0.68f, 0.94f, 1.00f);
    colors[ImGuiCol_NavHighlight] = ImVec4(1.00f, 0.68f, 0.94f, 1.00f);
}

void cozy_style() {
    ImGuiStyle& style = ImGui::GetStyle();
    style.Alpha = 1.0f;
    style.DisabledAlpha = 0.75f;
    style.WindowPadding = ImVec2(10, 10);
    style.WindowRounding = 8.0f;
    style.WindowBorderSize = 1.0f;
    style.WindowMinSize = ImVec2(32, 32);
    style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
    style.WindowMenuButtonPosition = ImGuiDir_None;
    style.ChildRounding = 5.0f;
    style.ChildBorderSize = 1.0f;
    style.PopupRounding = 5.0f;
    style.PopupBorderSize = 1.0f;
    style.FramePadding = ImVec2(6, 6);
    style.FrameRounding = 4.0f;
    style.FrameBorderSize = 1.0f;
    style.ItemSpacing = ImVec2(10, 6);
    style.ItemInnerSpacing = ImVec2(8, 8);
    style.CellPadding = ImVec2(4, 2);
    style.TouchExtraPadding = ImVec2(0, 0);
    style.IndentSpacing = 35.0f;
    style.ColumnsMinSpacing = 6.0f;
    style.ScrollbarSize = 22.0f;
    style.ScrollbarRounding = 2.0f;
    style.GrabMinSize = 12.0f;
    style.GrabRounding = 4.0f;
    style.LogSliderDeadzone = 4.0f;
    style.TabRounding = 4.0f;
    style.TabBorderSize = 1.0f;
    style.TabMinWidthForCloseButton = 0.0f;
    style.ColorButtonPosition = ImGuiDir_Right;
    style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
    style.SelectableRounding = 3.0f;
    style.SelectableTextAlign = ImVec2(0.01f, 0.0f);
    style.SeparatorTextBorderSize = 2.0f;
    style.SeparatorTextAlign = ImVec2(0.0f, 0.5f);
    style.SeparatorTextPadding = ImVec2(20.0f, 3.f);
    style.DisplayWindowPadding = ImVec2(19, 19);
    style.DisplaySafeAreaPadding = ImVec2(3, 3);
    style.MouseCursorScale = 1.0f;
    style.AntiAliasedLines = true;
    style.AntiAliasedLinesUseTex = true;
    style.AntiAliasedFill = true;
    style.CurveTessellationTol = 1.25f;
    style.CircleTessellationMaxError = 0.30f;
}

void my_style() {
    ImGuiStyle& style = ImGui::GetStyle();
    style.Alpha = 1.0f;
    style.DisabledAlpha = 0.75f;
    style.WindowPadding = ImVec2(10, 10);
    style.WindowRounding = 8.0f;
    style.WindowBorderSize = 1.0f;
    style.WindowMinSize = ImVec2(32, 32);
    style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
    style.WindowMenuButtonPosition = ImGuiDir_None;
    style.ChildRounding = 5.0f;
    style.ChildBorderSize = 1.0f;
    style.PopupRounding = 5.0f;
    style.PopupBorderSize = 1.0f;
    style.FramePadding = ImVec2(6, 6);
    style.FrameRounding = 4.0f;
    style.FrameBorderSize = 1.0f;
    style.ItemSpacing = ImVec2(10, 6);
    style.ItemInnerSpacing = ImVec2(8, 8);
    style.CellPadding = ImVec2(4, 2);
    style.TouchExtraPadding = ImVec2(0, 0);
    style.IndentSpacing = 35.0f;
    style.ColumnsMinSpacing = 6.0f;
    style.ScrollbarSize = 22.0f;
    style.ScrollbarRounding = 2.0f;
    style.GrabMinSize = 12.0f;
    style.GrabRounding = 4.0f;
    style.LogSliderDeadzone = 4.0f;
    style.TabRounding = 4.0f;
    style.TabBorderSize = 1.0f;
    style.TabMinWidthForCloseButton = 0.0f;
    style.ColorButtonPosition = ImGuiDir_Right;
    style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
    style.SelectableRounding = 3.0f;
    style.SelectableTextAlign = ImVec2(0.01f, 0.0f);
    style.SeparatorTextBorderSize = 2.0f;
    style.SeparatorTextAlign = ImVec2(0.0f, 0.5f);
    style.SeparatorTextPadding = ImVec2(20.0f, 3.f);
    style.DisplayWindowPadding = ImVec2(19, 19);
    style.DisplaySafeAreaPadding = ImVec2(3, 3);
    style.MouseCursorScale = 1.0f;
    style.AntiAliasedLines = true;
    style.AntiAliasedLinesUseTex = true;
    style.AntiAliasedFill = true;
    style.CurveTessellationTol = 1.25f;
    style.CircleTessellationMaxError = 0.30f;
}


void cozy_square_style() {
    ImGuiStyle& style = ImGui::GetStyle();
    style.Alpha = 1.0f;
    style.DisabledAlpha = 0.75f;
    style.WindowPadding = ImVec2(10, 10);
    style.WindowRounding = 0.0f;
    style.WindowBorderSize = 1.0f;
    style.WindowMinSize = ImVec2(32, 32);
    style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
    style.WindowMenuButtonPosition = ImGuiDir_None;
    style.ChildRounding = 0.0f;
    style.ChildBorderSize = 1.0f;
    style.PopupRounding = 0.0f;
    style.PopupBorderSize = 1.0f;
    style.FramePadding = ImVec2(6, 6);
    style.FrameRounding = 0.0f;
    style.FrameBorderSize = 1.0f;
    style.ItemSpacing = ImVec2(10, 6);
    style.ItemInnerSpacing = ImVec2(8, 8);
    style.CellPadding = ImVec2(4, 2);
    style.TouchExtraPadding = ImVec2(0, 0);
    style.IndentSpacing = 35.0f;
    style.ColumnsMinSpacing = 6.0f;
    style.ScrollbarSize = 20.0f;
    style.ScrollbarRounding = 0.0f;
    style.GrabMinSize = 12.0f;
    style.GrabRounding = 0.0f;
    style.LogSliderDeadzone = 4.0f;
    style.TabRounding = 0.0f;
    style.TabBorderSize = 1.0f;
    style.TabMinWidthForCloseButton = 0.0f;
    style.ColorButtonPosition = ImGuiDir_Right;
    style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
    style.SelectableRounding = 0.0f;
    style.SelectableTextAlign = ImVec2(0.01f, 0.0f);
    style.SeparatorTextBorderSize = 2.0f;
    style.SeparatorTextAlign = ImVec2(0.0f, 0.5f);
    style.SeparatorTextPadding = ImVec2(20.0f, 3.f);
    style.DisplayWindowPadding = ImVec2(19, 19);
    style.DisplaySafeAreaPadding = ImVec2(3, 3);
    style.MouseCursorScale = 1.0f;
    style.AntiAliasedLines = true;
    style.AntiAliasedLinesUseTex = true;
    style.AntiAliasedFill = true;
    style.CurveTessellationTol = 1.25f;
    style.CircleTessellationMaxError = 0.30f;
}

void setTheme(int themeIndex) {
    switch (themeIndex) {
    case 1:
        dark_theme();
        theme_index = 1;
        break;
    case 2:
        light_theme();
        theme_index = 2;
        break;
    case 3:
        amoled_theme();
        theme_index = 3;
        break;
    default:
        break;
    }

    config::setValue("general:theme", "color", themeIndex);
}

void setStyle(int styleIndex) {
    switch (styleIndex) {
        case 1:
            style_index = 1;
            cozy_style();
            break;
        case 2:
            style_index = 2;
            cozy_square_style();
            break;
        default:
            break;
    }

    config::setValue("general:theme", "style", styleIndex);
}
