#include "About.h"

namespace Cheat {
    About::About() {
        version = "0.0.9";
    }

    void About::GUI() {
        ImGui::SeparatorText(tr("ABOUT"));
        ImGui::Text("%s: %s", "Echo Version: ", version.c_str());
        ImGui::Text("%s: %s", tr("Auther: "), "Gktwo");
        ImGui::Text("%s: %s", tr("Contributors: "), "Gktwo");
        ImGui::TextColored(ImVec4(0.5f, 0.5f, 0.5f, 1.0f), "%s", tr("WWEcho is still in the development stage,\n If you obtained it through purchase, then you have been deceived. Once the project is leaked, it will be stopped"));
        





    }

    std::string About::getModule() {
        return tr("MODULE_ABOUT");
    }

    About& About::getInstance() {
        static About instance;
        return instance;
    }
}
