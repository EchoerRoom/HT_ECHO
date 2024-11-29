#pragma once
#pragma once

#include "../FunctionIncludes.h"

namespace Cheat {
    class About : public Function {
    public:
        std::string version;

        void GUI() override;

        std::string getModule() override;

        About();

        static About& getInstance();
    };
}