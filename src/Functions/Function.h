#pragma once

#include <string>

//#include "../gui/Translations.h"

class Function {
public:
    virtual ~Function() = default;

    virtual std::string getModule() {
        return "NONE";
    }

    virtual void GUI() {}
    virtual void Outer() {}
    virtual void Status() {}
};
