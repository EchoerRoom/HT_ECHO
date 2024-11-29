#include "BigJump.h"

namespace Cheat {
    BigJump::BigJump() : Function() {
        f_Enabled = config::getValue("functions:Player:BigJump", "enabled", false);
    }

    void BigJump::GUI() {
        //ImGui::SeparatorText(tr("BigJump"));
        if (ConfigCheckbox(tr("BigJump"), f_Enabled,tr("BigJump_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }

    }
    void BigJump::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void BigJump::Status() {
        if (f_Enabled)
            ImGui::Text(tr("BigJump"));
    }
    std::string BigJump::getModule() {
        return tr("MODULE_PLAYER");
    }

    BigJump& BigJump::getInstance() {
        static BigJump instance;
        return instance;
    }
}
