#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Player_008_Skia

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerCharacterBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass player_008_Skia.player_008_Skia_C
// 0x0040 (0x2AC0 - 0x2A80)
class APlayer_008_Skia_C final : public ABP_PlayerCharacterBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Player_008_Skia_C;                  // 0x2A80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHTSkeletalMeshComponentBudgeted*       MeshProbe;                                         // 0x2A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTSneakEffectComponent*                HTSneakEffect;                                     // 0x2A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTSkeletalMeshComponentBudgeted*       MeshShadow;                                        // 0x2A98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AHTAbilityCharacter*>            ShadowAtkTargets;                                  // 0x2AA0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AHTAbilityCharacter*>            PendingAddShadowAtkTargets;                        // 0x2AB0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void AddShadowAtkTarget(class AHTAbilityCharacter* Target);
	void ExecuteUbergraph_player_008_Skia(int32 EntryPoint);
	void Is_Only_Target_with_Shadow(class AActor* Target, bool* Result);
	void IsValidShadowTarget(class AActor* Target, bool* Result);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void UpdateShadowAtkTargetList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"player_008_Skia_C">();
	}
	static class APlayer_008_Skia_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayer_008_Skia_C>();
	}
};

}
