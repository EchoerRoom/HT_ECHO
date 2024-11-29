
#include "../Functions/About/About.h"
#include "../Functions/Setting/Setting.h"
//player
#include "../Functions/Player/GodMode.h"
//#include "../Functions/Player/UltSkills.h"
//#include "../Functions/Player/UltStamina.h"
//#include "../Functions/Player/HitMultiplier.h"
//#include "../Functions/Player/PlayerSpeed.h"
//#include "../Functions/Player/AntiDither.h"
//#include "../Functions/Player/BigJump.h"
//#include "../Functions/Player/Critical.h"
//#include "../Functions/Player/ResonantChain.h"
//#include "../Functions/Player/WalkOnWater.h"

//misc
#include "../Functions/Misc/UConsole.h"

//debug
#ifdef _DEBUG
#include "../Functions/Debug/Debug.h"
#endif

std::vector<std::string> ModuleOrder = {
	tr("MODULE_ABOUT"),
	tr("MODULE_PLAYER"),
	tr("MODULE_WORLD"),
	tr("MODULE_VISUALS"),
	tr("MODULE_ESP"),
	tr("MODULE_MISC"),
	tr("MODULE_SETTINGS"),
#ifdef _DEBUG
	"Debug",
#endif

};

void Init() {
	//ABOUT
	INIT_FUNC(About)
		//player
		//INIT_FUNC(GodMode)
	 //   INIT_FUNC(UltSkills)
	 //   INIT_FUNC(UltStamina)
		//INIT_FUNC(HitMultiplier)
		//INIT_FUNC(PlayerSpeed)
		//INIT_FUNC(AntiDither)
		//INIT_FUNC(BigJump)
		//INIT_FUNC(Critical)
		//INIT_FUNC(ResonantChain)
		//INIT_FUNC(WalkOnWater)
		//world
		//INIT_FUNC(AutoAbsorb)
		//INIT_FUNC(AutoDestory)
		//INIT_FUNC(AutoLoot)
		//INIT_FUNC(AutoPickChest)
		//INIT_FUNC(AutoPuzzle)



		//misc
		INIT_FUNC(UConsole)
		//setting
		INIT_FUNC(Settings)

		//debug
#ifdef _DEBUG
		INIT_FUNC(Debug)
#endif

}

void Outer() {
	for (const auto& func : functions)
		func->Outer();
}

void Status() {
	auto& settings = Cheat::Settings::getInstance();

	if (!settings.f_Status)
		return;

	ImGuiWindowFlags flags = ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoDecoration |
		ImGuiWindowFlags_AlwaysAutoResize |
		ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoFocusOnAppearing;

	if (!settings.f_StatusMove)
		flags |= ImGuiWindowFlags_NoMove;

	ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[fontindex_menu]);
	ImGui::Begin("Status", nullptr, flags);

	const auto& about = Cheat::About::getInstance();

	ImGui::PushStyleColor(ImGuiCol_Text, { 0.38f, 0.80f, 0.63f, 1.00f });
	ImGui::Text("Wuwa-Echoer %s", about.version.c_str());
	ImGui::PopStyleColor();
	ImGui::Separator();

	for (const auto& func : functions)
		func->Status();

	ImGui::End();
	ImGui::PopFont();
}

void DrawSection(const std::string& moduleName) {
	for (const auto& func : functions) {
		if (func->getModule() != moduleName)
			continue;

		func->GUI();
	}
}
