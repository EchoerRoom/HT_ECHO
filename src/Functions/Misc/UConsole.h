#pragma once

#include "../FunctionIncludes.h"

namespace Cheat {
    class UConsole : public Function {
    public:

        ConfigField<bool> f_Enabled;

        ConfigField<std::string> f_Command;
        Hotkey f_Hotkey;
        void GUI() override;
        void Status() override;
        void Outer() override;
        std::string getModule() override;

        static UConsole& getInstance();

        UConsole();
    };
}