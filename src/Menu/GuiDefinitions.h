#pragma once

#include "../Functions/Function.h"

// DON'T UNCOMMENT THIS!



static std::vector<Function*> functions;

#define INIT_FUNC(function) functions.push_back(&Cheat::##function##::getInstance());
