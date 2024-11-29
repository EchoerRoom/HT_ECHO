#include "UltStamina.h"

namespace Cheat {
    UltStamina::UltStamina() : Function() {
        f_Enabled = config::getValue("functions:Player:UltStamina", "enabled", false);
    }

    void UltStamina::GUI() {
        //ImGui::SeparatorText(tr("UltStamina"));
        if (ConfigCheckbox(tr("UltStamina"), f_Enabled,tr("UltStamina_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }

    }

    void UltStamina::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void UltStamina::Status() {
        if (f_Enabled)
            ImGui::Text(tr("UltStamina"));
    }

    std::string UltStamina::getModule() {
        return tr("MODULE_PLAYER");
    }

    UltStamina& UltStamina::getInstance() {
        static UltStamina instance;
        return instance;
    }
}
