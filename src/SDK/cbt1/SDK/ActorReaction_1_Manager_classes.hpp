#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActorReaction_1_Manager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ActorReaction_1_Manager.ActorReaction_1_Manager_C
// 0x0058 (0x0628 - 0x05D0)
class AActorReaction_1_Manager_C final : public ACosmosNatureProjectileManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara1;                                          // 0x05D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCosmosNatureProjectilePlacedComp*      CosmosNatureProjectilePlacedComp4;                 // 0x05E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCosmosNatureProjectilePlacedComp*      CosmosNatureProjectilePlacedComp3;                 // 0x05E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCosmosNatureProjectilePlacedComp*      CosmosNatureProjectilePlacedComp2;                 // 0x05F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCosmosNatureProjectilePlacedComp*      CosmosNatureProjectilePlacedComp1;                 // 0x05F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCosmosNatureProjectilePlacedComp*      CosmosNatureProjectilePlacedComp;                  // 0x0600(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0610(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Target;                                            // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnDestroyCountDown(float CurveValue);
	void ExecuteUbergraph_ActorReaction_1_Manager(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActorReaction_1_Manager_C">();
	}
	static class AActorReaction_1_Manager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AActorReaction_1_Manager_C>();
	}
};

}

