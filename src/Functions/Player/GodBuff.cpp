#include "GodBuff.h"

namespace Cheat {
    GodBuff::GodBuff() : Function() {
        f_Enabled = config::getValue("functions:Player:GodBuff", "enabled", false);
    }

    void GodBuff::GUI() {
       // ImGui::SeparatorText(tr("GodBuff"));
        if (ConfigCheckbox(tr("GodBuff"), f_Enabled,tr("GodBuff_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }


    }
    void GodBuff::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void GodBuff::Status() {
        if (f_Enabled)
            ImGui::Text(tr("GodBuff"));
    }
    std::string GodBuff::getModule() {
        return tr("MODULE_PLAYER");
    }

    GodBuff& GodBuff::getInstance() {
        static GodBuff instance;
        return instance;
    }
}
