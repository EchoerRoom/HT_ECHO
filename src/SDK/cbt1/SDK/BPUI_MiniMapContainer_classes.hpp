#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_MiniMapContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_MiniMapContainer.BPUI_MiniMapContainer_C
// 0x0018 (0x0B38 - 0x0B20)
class UBPUI_MiniMapContainer_C final : public UHTUI_MiniMapContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_HTButton_C*                          Button_Click;                                      // 0x0B28(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_NewGuideEffect_C*                   UI_NewGuideEffect_map;                             // 0x0B30(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_MiniMapContainer(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_MiniMapContainer_C">();
	}
	static class UBPUI_MiniMapContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_MiniMapContainer_C>();
	}
};

}
