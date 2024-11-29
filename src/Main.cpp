#include <Windows.h>
#include <iostream>

#include <thread>
#include "includes.h"

#include "Menu/Menu.h"
#include "Cheat.h"
#include "Vendors/logger/Logger.h"
#include "Menu/Sections.h"
#include "Vendors/json/json.hpp"
#include "Functions/Setting/Setting.h"
#include "Menu/Theme/Fonts/FontsLoader.h"
#include "SDK/UMethod.h"
//#include "Hooks/Puerts_Init.hpp"
	




#pragma region Kiero

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
Present oPresent;
HWND window = 0;
WNDPROC oWndProc;
ID3D11Device* pDevice = 0;
ID3D11DeviceContext* pContext = 0;
ID3D11RenderTargetView* mainRenderTargetView;

void InitImGui()
{
    ImGui::CreateContext();

    ImGuiIO& io = ImGui::GetIO(); 
    ImGuiStyle& style = ImGui::GetStyle();
    io.IniFilename = nullptr;
    io.LogFilename = nullptr;
    io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange;
    style.FrameRounding = 3.0f;
    style.GrabRounding = 3.0f;
	io.Fonts->AddFontDefault();
	ImFontConfig myFontconfig;
	//ImFontAtlas* fontAtlas = new ImFontAtlas();
	//ImFont* myFont = fontAtlas->AddFontFromFileTTF("C:\\Windows\\Fonts\\msyh.ttc", 18.0f,&myFontconfig,io.Fonts->GetGlyphRangesChineseFull());
	setTheme(1);
	setStyle(1);
	LoadFontFromResources(myFontconfig, MAKEINTRESOURCEW(R_FONT_CN), 16.f);

    ImGui_ImplWin32_Init(window);
    ImGui_ImplDX11_Init(pDevice, pContext);
	Init();
	
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

#pragma endregion

bool bInit = false;
HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!bInit)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;

			ID3D11Texture2D* pBackBuffer = nullptr;
			if (SUCCEEDED(pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer)) && pBackBuffer)
			{
				pDevice->CreateRenderTargetView(pBackBuffer, nullptr, &mainRenderTargetView);
				pBackBuffer->Release();
			}
			else
			{
				return oPresent(pSwapChain, SyncInterval, Flags); // 无法获取后缓冲区时直接返回
			}

			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();

			bInit = true;
		}
		else
		{
			return oPresent(pSwapChain, SyncInterval, Flags);
		}
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	Outer();
	Status();
	auto& settings = Cheat::Settings::getInstance();
	if (settings.f_ShowMenu)
	{
		Menu::Render();
	}

	ImGui::Render();
	pContext->OMSetRenderTargets(1, &mainRenderTargetView, nullptr);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}



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

	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			init_hook = true;
		}
	} while (!init_hook);

	//while (true)
	//{
	//	// close menu
	//	if (IsKeyPressed(VK_F4) || cfg->menu->bShutdown)
	//		break;

	//	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	//}

	//CLEAN UP

	//kiero::shutdown();
	//Cheat::Uninit();
	//FreeLibraryAndExitThread(Module, 0);
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