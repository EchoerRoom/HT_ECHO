#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapTransfer_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_structs.hpp"
#include "HTGame_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapTransfer_Base.BP_MapTransfer_Base_C
// 0x00C0 (0x0BE8 - 0x0B28)
class ABP_MapTransfer_Base_C : public AHTMapTransferActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          BlockOnlyCamera;                                   // 0x0B30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Anomaly_044_skin;                                  // 0x0B38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTAutoUseSleepValueComponent*          HTAutoUseSleepValue;                               // 0x0B40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0B48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_TelephoneBooth_003;                             // 0x0B50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_TelephoneBooth_002;                             // 0x0B58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_TelephoneBooth_001;                             // 0x0B60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Trigger;                                           // 0x0B68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0B70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Telephone_booth_02_Door;                        // 0x0B78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Telephone_booth_02;                             // 0x0B80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_CloseDoor_CloseDoor_AAC2F9504241235CF0A65187BEC3A30C; // 0x0B88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_CloseDoor__Direction_AAC2F9504241235CF0A65187BEC3A30C; // 0x0B8C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BE3[0x3];                                     // 0x0B8D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_CloseDoor;                                // 0x0B90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInteractEntry>                 InteractEntries;                                   // 0x0B98(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FName                                   IsNeedSubmitQuest;                                 // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Msg_Text;                                          // 0x0BB0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UStringTable*                           ST_QuestName;                                      // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   ValueLeft;                                         // 0x0BC8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ValueRight;                                        // 0x0BD8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Actived();
	void BPActived(class AHTPlayerController* ByPC);
	void BPGetInteractEntries(class AHTPlayerController* ByPC, TArray<struct FInteractEntry>* OutInteractEntries);
	void BPInteractFinished(class AHTPlayerController* ByPC, int32 InteractIndex);
	void BPOnMainRoleLoadFinished(class AHTPlayerState* PlayerState);
	void BPTransfered(class AHTPlayerController* ByPC);
	void ClientTryOverLap();
	void ExecuteUbergraph_BP_MapTransfer_Base(int32 EntryPoint);
	void OnEmitterSpawned_0EC3105B46EAB39C0FD2F6A89DBD3E96(class UNiagaraComponent* SpawnedComp);
	void OnEmitterSpawned_9DA045174AD1B21E5C2187B503E59150(class UNiagaraComponent* SpawnedComp);
	void OnEmitterSpawned_AF6EF9144D76F16E601126834532BD51(class UNiagaraComponent* SpawnedComp);
	void Timeline_CloseDoor__FinishedFunc();
	void Timeline_CloseDoor__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapTransfer_Base_C">();
	}
	static class ABP_MapTransfer_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapTransfer_Base_C>();
	}
};

}

