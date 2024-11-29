#include "GodMode.h"

namespace Cheat {
    GodMode::GodMode() : Function() {
        f_Enabled = config::getValue("functions:Player:GodMode", "enabled", false);
    }

    void GodMode::GUI() {
        //ImGui::SeparatorText(tr("GodMode"));
        if (ConfigCheckbox(tr("GodMode"), f_Enabled,tr("GodMode_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }


    }

    void GodMode::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void GodMode::Status() {
        if (f_Enabled)
            ImGui::Text(tr("GodMode"));
    }


    std::string GodMode::getModule() {
        return tr("MODULE_PLAYER");
    }

    GodMode& GodMode::getInstance() {
        static GodMode instance;
        return instance;
    }
}
