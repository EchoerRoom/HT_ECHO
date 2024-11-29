#pragma once
#include <windows.h>
#include <string>
#include <filesystem> 



namespace Cheat
{
	enum Sdk_Type {
		UnKnown = 0, // 没有找到任何匹配的文件夹
		Global = 1,    // 找到 KrPcSdk_Global 文件夹
		China = 2      // 找到 KrPcSdk_Mainland 文件夹
	};
	std::string GetExeDirectory();
	Sdk_Type CheckSdkArea();
	bool Init();

	void Uninit();

	//void DrawESP();
}
