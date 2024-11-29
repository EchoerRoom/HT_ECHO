#include "UConsole.h"

namespace Cheat {
	UConsole::UConsole() : Function() {
		f_Enabled = config::getValue("functions:Misc:UConsole", "enabled", false);
		f_Command = config::getValue<std::string>("functions:Misc:UConsole", "command", "");
	}

	void UConsole::GUI() {
		ImGui::SeparatorText(tr("UConsole"));
		bool show = f_Enabled;
		ConfigCheckbox(tr("Enabled"), f_Enabled, tr("Enable the built-in console of Unreal Engine,press F10 to show"));
        if (show != f_Enabled)
		ShowConsole(f_Enabled.getValue());
		
		ConfigInputText(tr("Command"), f_Command, "Enter console commands, note that even if the button above is not turned on, it can still be used");
        if (ImGui::Button(tr("Execute"))) {
			ExecuteConsoleCommand(f_Command.getValue());
		}

	}

	void UConsole::Outer() {

	}

	void UConsole::Status() {
		if (f_Enabled)
			ImGui::Text(tr("UConsole"));
	}
	std::string UConsole::getModule() {
		return tr("MODULE_MISC");
	}

	UConsole& UConsole::getInstance() {
		static UConsole instance;
		return instance;
	}
}
