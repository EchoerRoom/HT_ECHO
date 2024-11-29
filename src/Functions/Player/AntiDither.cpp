#include "AntiDither.h"

namespace Cheat {
    AntiDither::AntiDither() : Function() {
        f_Enabled = config::getValue("functions:Player:AntiDither", "enabled", false);
    }

    void AntiDither::GUI() {
       // ImGui::SeparatorText(tr("AntiDither"));
        if (ConfigCheckbox(tr("AntiDither"), f_Enabled,tr("AntiDither_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }

    }

    void AntiDither::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void AntiDither::Status() {
        if (f_Enabled)
            ImGui::Text(tr("AntiDither"));
    }
    std::string AntiDither::getModule() {
        return tr("MODULE_PLAYER");
    }

    AntiDither& AntiDither::getInstance() {
        static AntiDither instance;
        return instance;
    }
}
