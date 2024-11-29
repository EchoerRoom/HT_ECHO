
#pragma once
#include <d3d11.h>
#include <dxgi.h>
#include "Vendors/kiero/kiero.h"
#include "Vendors/imgui/imgui.h"
#include "Vendors/imgui/imgui_impl_win32.h"
#include "Vendors/imgui/imgui_impl_dx11.h"


typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;