#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weapon_Player_Fadia

#include "Basic.hpp"

#include "BP_WeaponBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Weapon_Player_Fadia.Weapon_Player_Fadia_C
// 0x0008 (0x06F0 - 0x06E8)
class AWeapon_Player_Fadia_C final : public ABP_WeaponBase_C
{
public:
	class UHTSkeletalMeshComponentBudgeted*       HTSkeletalMeshComponentBudgeted;                   // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class FName K2_GetCustomUnEquipMontageSectionName();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Weapon_Player_Fadia_C">();
	}
	static class AWeapon_Player_Fadia_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeapon_Player_Fadia_C>();
	}
};

}

