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

	// 检查 ThirdParty 文件夹中是否存在目标文件夹
	Sdk_Type CheckSdkArea() {
		try {
			std::string exeDir = GetExeDirectory();
			std::string thirdPartyPath = exeDir + "\\ThirdParty";

			// 检查 ThirdParty 文件夹是否存在
			if (!exists(thirdPartyPath) || !is_directory(thirdPartyPath)) {
				return UnKnown;
			}

			// 检查是否存在目标文件夹
			if (exists(thirdPartyPath + "\\KrPcSdk_Global") && is_directory(thirdPartyPath + "\\KrPcSdk_Global")) {
				return Global;
			}
			if (exists(thirdPartyPath + "\\KrPcSdk_Mainland") && is_directory(thirdPartyPath + "\\KrPcSdk_Mainland")) {
				return China;
			}

			return UnKnown;
		}
		catch (const std::exception& e) {
			// 出现异常时返回 FolderNotFound
			return UnKnown;
		}
	}


}