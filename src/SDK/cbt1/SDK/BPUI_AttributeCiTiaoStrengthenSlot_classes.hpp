#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_AttributeCiTiaoStrengthenSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPUI_AttributeCiTiaoStrengthenSlot.BPUI_AttributeCiTiaoStrengthenSlot_C
// 0x0040 (0x0B40 - 0x0B00)
class UBPUI_AttributeCiTiaoStrengthenSlot_C final : public UHTUI_AttributeSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x0B08(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_94;                                          // 0x0B10(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_119;                                         // 0x0B18(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_201;                                         // 0x0B20(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg_dan;                                      // 0x0B28(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg_shuang;                                   // 0x0B30(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BPUI_AttributeCiTiaoStrengthenSlot(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPUI_AttributeCiTiaoStrengthenSlot_C">();
	}
	static class UBPUI_AttributeCiTiaoStrengthenSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPUI_AttributeCiTiaoStrengthenSlot_C>();
	}
};

}

