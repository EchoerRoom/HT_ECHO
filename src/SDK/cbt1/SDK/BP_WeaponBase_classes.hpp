#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeaponBase

#include "Basic.hpp"

#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WeaponBase.BP_WeaponBase_C
// 0x0008 (0x06E8 - 0x06E0)
class ABP_WeaponBase_C : public AWeaponBase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x06E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaponBase_C">();
	}
	static class ABP_WeaponBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WeaponBase_C>();
	}
};

}
