#pragma once

#include "../FunctionIncludes.h"

namespace Cheat {
    class HitMultiplier : public Function {
    public:
        
        ConfigField<bool> f_Enabled;
        ConfigField<int> f_HitValue;
        Hotkey f_Hotkey;
        void GUI() override;
        void Status() override;
        void Outer() override;
        std::string getModule() override;

        static HitMultiplier& getInstance();

        HitMultiplier();
    };
}