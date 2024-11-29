#include <Windows.h>
#include <string>
using std::string;


struct cfg_Menu_t
{
	bool bInit = false;
	bool bShutdown = false;
	__forceinline cfg_Menu_t* operator->() { return this; }
};

struct cfg_About_t
{
	string Tip = "This software is free, if you purchased it with money, \n then you have been deceived";
	string  Version = "1.0.0";
	string  Author = "Gktwo";
	string EchoTeam = "Gktwo";
	string  Github = "https://github.com/EchoerRoom";
	string Discord = "https://discord.gg/WWECHO";

	__forceinline cfg_About_t* operator->() { return this; }
};

struct cfg_Player_t
{
	bool GodMode = false;
	bool UltSkills = false;
	bool UltStamina = false;
	bool PlayerSpeed = false;
	int PlayerSpeedValue = 1;
	bool HitMultiplier = false;
	int HitMultiplierValue = 1;
	bool AntiDither = false;
	//bool NoClip = false;  
	bool Critical = false;
	bool ResonantChain = false;
	bool GodBuff = false;
	bool Walk0nWater = false;
	bool BigJump = false;

	__forceinline cfg_Player_t* operator->() { return this; }
};

struct cfg_World_t
{
	bool WorldSpeed = false;
	int WorldSpeedValue = 1;
	bool AutoAbsorb = false;
	bool AutoPickChest = false;
	bool AutoLoot = false;
	bool AutoDestory = false;
	bool InteractiveRange = false;
	bool KillAura = false;
	bool KillAuraRadius = false;
	bool KillAnimal = false;

	bool MonsterVacuum = false;
	float VacuumRadius = false;
	bool ItemVacuum = false;

	bool PlotCanSkip = false;
	bool AutoSkip = false;
	bool AutoPuzzle = false;

	__forceinline cfg_World_t* operator->() { return this; }

};
struct cfg_ESP_t
{
	bool Enable = false;
	bool Box = false;
	bool Name = false;
	bool Distance = false;
	//category
	bool ShowMonster = false;
	bool ShowAnimal = false;
	bool ShowTreasure = false;
	bool ShowCollect = false;
	bool ShowPuzzle = false;
	bool ShowCasket = false;//类似原身的神瞳

	bool ShowDebug = false;

	__forceinline cfg_ESP_t* operator->() { return this; }
};
struct cfg_Visual_t
{
	bool FPSUnlocker = false;
	bool ShowFps = false;
	bool HideHUD = false;
	bool HideDMGText = false;
    bool Uid = false;
	string Name = "WWEcho";
	bool MapScale = false;

	__forceinline cfg_Visual_t* operator->() { return this; }
};
struct cfg_Misc_t
{
	bool MarkTp = false;
	bool CustomTp = false;
	bool QuestTp = false;

	bool AutoRefine = false;

	__forceinline cfg_Misc_t* operator->() { return this; }
};
enum language :int {
	English =0,
	Chinese = 1,
};
struct cfg_Setting_t
{
	language Lang = language::English;
	__forceinline cfg_Setting_t* operator->() { return this; }
};
struct cfg_t
{
	cfg_Menu_t menu;
	cfg_About_t about;
	cfg_Player_t tplayer;
	cfg_World_t world;
	cfg_ESP_t esp;
	cfg_Visual_t visual;
	cfg_Misc_t misc;
	cfg_Setting_t setting;


	__forceinline cfg_t* operator->() { return this; }
};
inline cfg_t cfg;
