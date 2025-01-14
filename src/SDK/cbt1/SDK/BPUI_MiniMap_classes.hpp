#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_MiniMap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_MiniMap.BPUI_MiniMap_C
// 0x0010 (0x0F00 - 0x0EF0)
class UBPUI_MiniMap_C final : public UHTUI_MiniMap
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0EF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                           RetainerBox_81;                                    // 0x0EF8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPUI_MiniMap(int32 EntryPoint);
	void BP_SetInterferValue(float InInterferValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_MiniMap_C">();
	}
	static class UBPUI_MiniMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_MiniMap_C>();
	}
};

}

