#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Player_010_nanally

#include "Basic.hpp"

#include "BP_PlayerCharacterBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass player_010_nanally.player_010_nanally_C
// 0x0010 (0x2A90 - 0x2A80)
class APlayer_010_nanally_C final : public ABP_PlayerCharacterBase_C
{
public:
	class UHTSkeletalMeshComponentBudgeted*       HTSkeletalMeshComponentBudgeted;                   // 0x2A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWeaponArmComponent*                    WeaponArm;                                         // 0x2A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"player_010_nanally_C">();
	}
	static class APlayer_010_nanally_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayer_010_nanally_C>();
	}
};

}

