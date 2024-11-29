#include "Cheat.h"
#include "includes.h"

#include "Vendors/kiero/minhook/include/MinHook.h"
#include <ctime>
#include "Vendors/logger/Logger.h"



using namespace std::filesystem;
namespace Cheat
{
	bool Init()
	{


		if (MH_Initialize() != MH_OK)
		{
			MessageBoxA(0, "Couldn't intialize MinHook!", "echo", MB_ICONERROR);
			return false;
		}
		HMODULE ModuleBase = GetModuleHandleA(0);
		LOG_INFO("Module Base: 0x%llx\n", (uintptr_t)ModuleBase);
		return true;
	}
	void Uninit()
	{
		MH_Uninitialize();
	}


	// 获取当前 EXE 的目录
	std::string GetExeDirectory() {
		char buffer[MAX_PATH];
		GetModuleFileNameA(NULL, buffer, MAX_PATH);
		std::string exePath(buffer);
		return exePath.substr(0, exePath.find_last_of("\\/"));
	}

	


}