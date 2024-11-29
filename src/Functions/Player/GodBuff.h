#pragma once

#include "../FunctionIncludes.h"

namespace Cheat {
    class GodBuff : public Function {
    public:
        
        ConfigField<bool> f_Enabled;
        Hotkey f_Hotkey;
        void GUI() override;
        void Status() override;
        void Outer() override;
        std::string getModule() override;

        static GodBuff& getInstance();

        GodBuff();
    };
}