#include "WalkOnWater.h"

namespace Cheat {
    WalkOnWater::WalkOnWater() : Function() {
        f_Enabled = config::getValue("functions:Player:WalkOnWater", "enabled", false);
    }

    void WalkOnWater::GUI() {
       // ImGui::SeparatorText(tr("WalkOnWater"));
        if (ConfigCheckbox(tr("WalkOnWater"), f_Enabled,tr("WalkOnWater_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }

    }

    void WalkOnWater::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void WalkOnWater::Status() {
        if (f_Enabled)
            ImGui::Text(tr("UltStamina"));
    }


    std::string WalkOnWater::getModule() {
        return tr("MODULE_PLAYER");
    }

    WalkOnWater& WalkOnWater::getInstance() {
        static WalkOnWater instance;
        return instance;
    }
}
