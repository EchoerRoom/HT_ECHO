#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LD_R_AutoDoor_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AutoDoor_Base_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LD_R_AutoDoor_Base.BP_LD_R_AutoDoor_Base_C
// 0x0050 (0x0C30 - 0x0BE0)
class ABP_LD_R_AutoDoor_Base_C : public ABP_AutoDoor_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LD_R_AutoDoor_Base_C;            // 0x0BE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   DoorL;                                             // 0x0BE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DoorR;                                             // 0x0BF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_X_5C73F7884683F406607F519F36579A79;     // 0x0BF8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_5C73F7884683F406607F519F36579A79; // 0x0BFC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61E1[0x3];                                     // 0x0BFD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0C00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        OffestY;                                           // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Finished;                                          // 0x0C10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                          OpenAkEvent;                                       // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          CloseAkEvent;                                      // 0x0C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CloseDoor();
	void ExecuteUbergraph_BP_LD_R_AutoDoor_Base(int32 EntryPoint);
	void Finished__DelegateSignature();
	void OpenDoor(int32 Param_DoorState);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LD_R_AutoDoor_Base_C">();
	}
	static class ABP_LD_R_AutoDoor_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LD_R_AutoDoor_Base_C>();
	}
};

}
