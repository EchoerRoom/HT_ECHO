#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DialogueNPC_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NPC_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DialogueNPC_Base.BP_DialogueNPC_Base_C
// 0x0040 (0x20F0 - 0x20B0)
class ABP_DialogueNPC_Base_C : public ABP_NPC_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x20B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       GreetTriggerSphere;                                // 0x20B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Dlg_Sphere;                                        // 0x20C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharacterHeadUpComp_BP_C*              CharacterHeadUpComp_BP;                            // 0x20C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTDialogueComponent*                   HTDialogue;                                        // 0x20D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_UVDistortion_36CD02F64CE9619F4DD494A8ECD23A74; // 0x20D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_36CD02F64CE9619F4DD494A8ECD23A74; // 0x20DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5798[0x3];                                     // 0x20DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x20E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PostMaterialDynamic;                               // 0x20E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DialogueNPC_Base(int32 EntryPoint);
	void PlayPostGlithEffect(bool PlayForward);
	void ReceiveBeginPlay();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DialogueNPC_Base_C">();
	}
	static class ABP_DialogueNPC_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DialogueNPC_Base_C>();
	}
};

}
