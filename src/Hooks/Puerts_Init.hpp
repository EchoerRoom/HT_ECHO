#include <Windows.h>
#include <sstream>
#include "../Vendors/logger/Logger.h"
#include "../Cheat.h"
#include "HookManager.h"
#include <fstream>
#include <iostream>

#include <unordered_map>
#include "../SDK/UMethod.h"
#include <tchar.h>



//第一个国际服,第二个国服
#define DO_APP_FUNC(a, b,r, n, p)  r (*n) p




#undef DO_APP_FUNC

//Cheat::Sdk_Type Area = Cheat::CheckSdkArea();
//#define SELECT_VERSION(VERSION, OS_OFFSET, CN_OFFSET) (VERSION ==  Cheat::Sdk_Type::Global ? OS_OFFSET : CN_OFFSET)
uintptr_t baseAddress;
void Init_Puerts() {
	Sleep(1000);
	LOG_INFO("Init Hooks...\n");



	baseAddress = (uint64_t)GetModuleHandleA(0);
#define DO_APP_FUNC(a, b, r, n, p) n = (r (*) p)(baseAddress + SELECT_VERSION(Area, a, b))


#undef DO_APP_FUNC


}


