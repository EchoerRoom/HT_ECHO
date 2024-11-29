#include "HitMultiplier.h"

namespace Cheat {
    HitMultiplier::HitMultiplier() : Function() {
        f_Enabled = config::getValue("functions:Player:HitMultiplier", "enabled", false);
        f_HitValue = config::getValue("functions:Player:HitMultiplier", "hitValue", 1);
    }

    void HitMultiplier::GUI() {
        //ImGui::SeparatorText(tr("HitMultiplier"));
        if (ConfigCheckbox(tr("HitMultiplier"), f_Enabled,tr("HitMultiplier_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }
        ConfigInputInt(tr("Multiplier Value"), f_HitValue, 1, 50, "Multiplier Value");
    }

    void HitMultiplier::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void HitMultiplier::Status() {
        if (f_Enabled)
            ImGui::Text(tr("HitMultiplier"));
    }

    std::string HitMultiplier::getModule() {
        return tr("MODULE_PLAYER");
    }

    HitMultiplier& HitMultiplier::getInstance() {
        static HitMultiplier instance;
        return instance;
    }
}
