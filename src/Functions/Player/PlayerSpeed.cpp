#include "PlayerSpeed.h"

namespace Cheat {
    PlayerSpeed::PlayerSpeed() : Function() {
        f_Enabled = config::getValue("functions:Player:PlayerSpeed", "enabled", false);
    }

    void PlayerSpeed::GUI() {
       // ImGui::SeparatorText(tr("PlayerSpeed"));
        if (ConfigCheckbox(tr("PlayerSpeed"), f_Enabled,tr("PlayerSpeed_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }



    }


    void PlayerSpeed::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void PlayerSpeed::Status() {
        if (f_Enabled)
            ImGui::Text(tr("Critical"));
    }

    std::string PlayerSpeed::getModule() {
        return tr("MODULE_PLAYER");
    }

    PlayerSpeed& PlayerSpeed::getInstance() {
        static PlayerSpeed instance;
        return instance;
    }
}
