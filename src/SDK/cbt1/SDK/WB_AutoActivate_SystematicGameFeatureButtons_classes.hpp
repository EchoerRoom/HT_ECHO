#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AutoActivate_SystematicGameFeatureButtons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_AutoActivate_SystematicGameFeatureButtons.WB_AutoActivate_SystematicGameFeatureButtons_C
// 0x0048 (0x05C0 - 0x0578)
class UWB_AutoActivate_SystematicGameFeatureButtons_C final : public UHTUI_AutoActivate_SystematicGameFeatureButtons
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPUI_RedPoint_C*                       BPUI_RedPoint;                                     // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPUI_RedPoint_C*                       BPUI_RedPoint_AM;                                  // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HTButton_MainFormFunction_C*         ButtonCharacterInfo2;                              // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HTButton_MainFormFunction_C*         W_HTButton_AdventureManual;                        // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HTButton_MainFormFunction_C*         W_HTButton_Bag;                                    // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HTButton_MainFormFunction_C*         W_HTButton_Formation;                              // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HTButton_MainFormFunction_C*         W_HTButton_Lottery;                                // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HTButton_MainFormFunction_C*         W_HTButton_Mall;                                   // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WB_AutoActivate_SystematicGameFeatureButtons(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_AutoActivate_SystematicGameFeatureButtons_C">();
	}
	static class UWB_AutoActivate_SystematicGameFeatureButtons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_AutoActivate_SystematicGameFeatureButtons_C>();
	}
};

}
