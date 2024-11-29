#pragma once

#include "../FunctionIncludes.h"

namespace Cheat {
    class PuertsHooks : public Function {
    public:

        std::string getModule() override;

        static PuertsHooks& getInstance();

        PuertsHooks();
    };

    
   
}