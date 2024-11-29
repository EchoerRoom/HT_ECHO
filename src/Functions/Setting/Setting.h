#pragma once

#include "../FunctionIncludes.h"
#include "../../Menu/Theme/Themes.h"


namespace Cheat {
    class Settings : public Function {
    public:
        Hotkey f_Hotkey;
        Hotkey f_HotkeyConsole;
        Hotkey f_HotkeyFastExit;



        ConfigField<bool> f_ShowFps;
        ConfigField<int> f_Language;

        ConfigField<bool> f_ShowConsole;
        ConfigField<std::string> f_StartupArguments;
        ConfigField<bool> f_Status;
        ConfigField<bool> f_StatusMove;
        ConfigField<bool> f_ShowMenu;
        ConfigField<bool> f_EnabledFastExit;
        

  

        void OnExitKeyPressed();

        void GUI() override;
        void Outer() override;

        std::string getModule() override;

        static Settings& getInstance();

        Settings();
    };
}
