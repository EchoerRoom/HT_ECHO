#include <Windows.h>
#include <iostream>

#include <thread>
#include "includes.h"
#include "Menu/d3d12hook.h"
//#include "Menu/Menu.h"
#include "Cheat.h"
#include "Vendors/logger/Logger.h"
#include "Menu/Sections.h"
#include "Vendors/json/json.hpp"
//#include "Functions/Setting/Setting.h"
//#include "Menu/Theme/Fonts/FontsLoader.h"
#include "SDK/UMethod.h"
//#include "Hooks/Puerts_Init.hpp"
	




DWORD MainThread(HMODULE Module)
{
	/* Code to open a console window */
	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);
	SetConsoleTitle(TEXT("Wuwa_Echo dev"));

	// Your code here
	LOG_INFO("Initializing...\n");
	//Init_Puerts();



	Sleep(5000);

	if (!Cheat::Init())
	{
		FreeLibraryAndExitThread(Module, 0);
		return 0;
	}

	// HOOK KIERO
	LOG_INFO("Init imgui...\n");
	InitD3D12Hook();



	LOG_INFO("WUWA_SCHO loading completed, wish you a pleasant time !!! \n");
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
		return TRUE;
	}
	return FALSE;
}