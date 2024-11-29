#include "ResonantChain.h"

namespace Cheat {
    ResonantChain::ResonantChain() : Function() {
        f_Enabled = config::getValue("functions:Player:ResonantChain", "enabled", false);
    }

    void ResonantChain::GUI() {
      //  ImGui::SeparatorText(tr("ResonantChain"));
        if (ConfigCheckbox(tr("ResonantChain"), f_Enabled, tr("ResonantChain_Disc"))) {
            ImGui::Indent();
            f_Hotkey.Draw();
            ImGui::Unindent();
        }



    }
    void ResonantChain::Outer() {
        f_Hotkey.Listen(f_Enabled);
    }

    void ResonantChain::Status() {
        if (f_Enabled)
            ImGui::Text(tr("ResonantChain"));
    }
    std::string ResonantChain::getModule() {
        return tr("MODULE_PLAYER");
    }

    ResonantChain& ResonantChain::getInstance() {
        static ResonantChain instance;
        return instance;
    }
}
