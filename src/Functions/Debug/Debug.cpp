#include "Debug.h"

namespace Cheat {
	Debug::Debug() : Function() {

	}

	void Debug::GUI() {
		ImGui::SeparatorText(tr("Debug"));


		if (ImGui::Button(tr("Test"))) {
			ShowGMConsoleUI();
 		}

	}

	void Debug::Outer() {

	}

	void Debug::Status() {

	}
	std::string Debug::getModule() {
		return "Debug";
	}

	Debug& Debug::getInstance() {
		static Debug instance;
		return instance;
	}
}
