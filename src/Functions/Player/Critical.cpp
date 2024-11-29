#include "Critical.h"

namespace Cheat {
    Critical::Critical() : Function() {
        f_Enabled = config::getValue("functions:Player:Critical", "enabled", false);
    }

    void Critical::GUI() {
        //ImGui::SeparatorText(tr("Critical"));
        if (ConfigCheckbox(tr("Critical"), f_Enabled,tr("Critical_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }



    }

    void Critical::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void Critical::Status() {
        if (f_Enabled)
            ImGui::Text(tr("Critical"));
    }


    std::string Critical::getModule() {
        return tr("MODULE_PLAYER");
    }

    Critical& Critical::getInstance() {
        static Critical instance;
        return instance;
    }
}
