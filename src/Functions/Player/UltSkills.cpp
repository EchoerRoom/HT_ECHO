#include "UltSkills.h"

namespace Cheat {
    UltSkills::UltSkills() : Function() {
        f_Enabled = config::getValue("functions:Player:UltSkills", "enabled", false);
    }

    void UltSkills::GUI() {
       // ImGui::SeparatorText(tr("UltSkills"));
        if (ConfigCheckbox(tr("UltSkills"), f_Enabled,tr("UltSkills_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }

    }

    void UltSkills::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void UltSkills::Status() {
        if (f_Enabled)
            ImGui::Text(tr("UltSkills"));
    }

    std::string UltSkills::getModule() {
        return tr("MODULE_PLAYER");
    }

    UltSkills& UltSkills::getInstance() {
        static UltSkills instance;
        return instance;
    }
}
