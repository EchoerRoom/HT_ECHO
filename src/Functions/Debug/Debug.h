#pragma once

#include "../FunctionIncludes.h"

namespace Cheat {
    class Debug : public Function {
    public:

        ConfigField<bool> f_PuertsDebugger;

        ConfigField<std::string> f_script;
        Hotkey f_Hotkey;
        void GUI() override;
        void Status() override;
        void Outer() override;
        std::string getModule() override;

        static Debug& getInstance();

        Debug();
    };
}