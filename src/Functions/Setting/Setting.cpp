#include "Setting.h"

namespace Cheat {
	void DrawFPS();

	Settings::Settings() : Function() {



		f_ShowConsole = config::getValue("functions:Settings:Console", "showConsole", true);
		f_ShowFps = config::getValue("functions:Settings", "showFps", true);
		f_Language = config::getValue("functions:Settings", "language", 1);
		f_StartupArguments = config::getValue<std::string>("functions:Settings", "startupArguments", "");
		f_Status = config::getValue("functions:Settings", "status", true);
		f_StatusMove = config::getValue("functions:Settings", "statusMove", true);
		f_ShowMenu = config::getValue("functions:Settings", "showMenu", true);
		f_EnabledFastExit = config::getValue("functions:Settings:FastExit", "enabled", false);
		f_Hotkey = Hotkey("functions:Settings:Menu", VK_F11);
		f_HotkeyConsole = Hotkey("functions:Settings:Console", VK_INSERT);
		f_HotkeyFastExit = Hotkey("functions:Settings:FastExit", VK_F12);


	}

	Settings& Settings::getInstance() {
		static Settings instance;
		return instance;
	}

	void Settings::GUI() {
		ImGui::SeparatorText(tr("SETTINGS_LANGUAGE"));
		ConfigComboLanguage(f_Language);

		ImGui::SeparatorText(tr("SETTINGS_GENERAL"));

		f_Hotkey.Draw(tr("MENU_HOTKEY_TITLE"), nullptr, false);

		if (ConfigCheckbox(tr("CONSOLE_HOTKEY_TITLE"), f_ShowConsole, tr("CONSOLE_HOTKEY_DESC"))) {
			ImGui::Indent();
			f_HotkeyConsole.Draw();
			ImGui::Unindent();
		}





		if (ConfigCheckbox(tr("SHOW_STATUS_WINDOW_TITLE"), f_Status, tr("SHOW_STATUS_WINDOW_DESC"))) {
			ImGui::Indent();
			ConfigCheckbox(tr("MOVE_STATUS_TITLE"), f_StatusMove);
			ImGui::Unindent();
		}

		ConfigCheckbox(tr("SHOW_FPS_TITLE"), f_ShowFps, tr("SHOW_FPS_DESCRIPTION"));





		ConfigInputText(tr("STARTUP_ARGS_TITLE"), f_StartupArguments, tr("STARTUP_ARGS_DESC"));


		ConfigCheckbox(tr("FAST_EXIT_TITLE"), f_EnabledFastExit, tr("FAST_EXIT_DESC"));
		f_HotkeyFastExit.Draw(tr("FAST_EXIT_HOTKEY_TITLE"));


	}

	void Settings::Outer() {

		f_Hotkey.Listen(f_ShowMenu);
		f_HotkeyConsole.Listen(f_ShowConsole);

		if (f_Hotkey.IsPressed())
		{
			//LOG_DEBUG("try call show cursor");
			UShowCursor(f_ShowMenu.getValue());
			//LOG_DEBUG("end call show cursor");
		}


		if (f_HotkeyFastExit.IsPressed())
			OnExitKeyPressed();

		if (f_ShowConsole)
			ShowWindow(GetConsoleWindow(), SW_SHOW);
		else
			ShowWindow(GetConsoleWindow(), SW_HIDE);

		if (f_ShowFps)
			DrawFPS();

	}

	std::string Settings::getModule() {
		return tr("MODULE_SETTINGS");
	}

	void DrawFPS() {
		ImGuiWindowFlags flags = ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoFocusOnAppearing |
			ImGuiWindowFlags_NoBringToFrontOnFocus |
			ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_AlwaysAutoResize;

		ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[fontindex_menu]);
		ImGui::Begin("##FPS", nullptr, flags);
		ImGui::Text("%s: %.1f", tr("FPS_TITLE"), ImGui::GetIO().Framerate);
		ImGui::PopFont();
		ImGui::End();
	}

	void Settings::OnExitKeyPressed() {
		if (!f_EnabledFastExit || f_ShowMenu.getValue())
			return;

		config::setValue("functions:Settings:fastExit", "enabled", f_EnabledFastExit.getValue());
		ExitProcess(0);
	}
}
