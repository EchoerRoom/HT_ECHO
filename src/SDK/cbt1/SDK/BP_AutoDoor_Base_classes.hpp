#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AutoDoor_Base

#include "Basic.hpp"

#include "QuestRange_Sly_structs.hpp"
#include "Engine_structs.hpp"
#include "HTGame_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AutoDoor_Base.BP_AutoDoor_Base_C
// 0x00D0 (0x0BE0 - 0x0B10)
class ABP_AutoDoor_Base_C : public AHTVisualActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PortalSoundComp_C*                  BP_PortalSoundComp;                                // 0x0B18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       TriggerTips;                                       // 0x0B20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0B28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TriggerBox_Out;                                    // 0x0B30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TriggerBox_In;                                     // 0x0B38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLock;                                            // 0x0B40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61A1[0x3];                                     // 0x0B41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DoorState;                                         // 0x0B44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Direction;                                         // 0x0B48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLockIn;                                          // 0x0B49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLockOut;                                         // 0x0B4A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NPCTiggerOpen;                                     // 0x0B4B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _QuestLock;                                        // 0x0B4C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61A2[0x3];                                     // 0x0B4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInteractEntry>                 TipsInteract;                                      // 0x0B50(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FText>                           TipsMsgs;                                          // 0x0B60(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           UnLockOutQuestArray;                               // 0x0B70(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           UnLockInQuestArray;                                // 0x0B80(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   CurLockOutQuest;                                   // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CurLockInQuest;                                    // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQuestRange_Sly>                LockOutQuestRangeArray;                            // 0x0BA0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FQuestRange_Sly>                LockInQuestRangeArray;                             // 0x0BB0(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           LockInQuestArray;                                  // 0x0BC0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           LockOutQuestArray;                                 // 0x0BD0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AcceptQuestLock(const class FName& QuestId, class AHTPlayerState* ThePlayer);
	void BeginOverlapTriggerBox();
	void BndEvt__BP_AutoDoor_Base_TriggerBox_In_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_AutoDoor_Base_TriggerBox_In_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_AutoDoor_Base_TriggerBox_Out_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_AutoDoor_Base_TriggerBox_Out_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BPGetInteractEntries(class AHTPlayerController* ByPC, TArray<struct FInteractEntry>* OutInteractEntries);
	void BPInteractFinished(class AHTPlayerController* ByPC, int32 InteractIndex);
	void BPOnMainRoleLoadFinished(class AHTPlayerState* PlayerState);
	void Cheak_Lock_Quests(class AHTPlayerState* PlayerState, TArray<struct FQuestRange_Sly>& QuestRangeArray, bool* IsOutLockQuestFind);
	void CloseDoor();
	void EndOverlapTriggerBox();
	void ExecuteUbergraph_BP_AutoDoor_Base(int32 EntryPoint);
	void OpenDoor(int32 Param_DoorState);
	void SubmitQuestUnlock(const class FName& QuestId, class AHTPlayerState* ThePlayer);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AutoDoor_Base_C">();
	}
	static class ABP_AutoDoor_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AutoDoor_Base_C>();
	}
};

}

