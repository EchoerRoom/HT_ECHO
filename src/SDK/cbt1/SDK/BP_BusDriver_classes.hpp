#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BusDriver

#include "Basic.hpp"

#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BusDriver.BP_BusDriver_C
// 0x0010 (0x0B90 - 0x0B80)
class ABP_BusDriver_C final : public AHTVisualActor_Sub
{
public:
	class UHTSkeletalMeshComponentBudgeted*       HTSkeletalMeshComponentBudgeted1;                  // 0x0B80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTSkeletalMeshComponentBudgeted*       HTSkeletalMeshComponentBudgeted;                   // 0x0B88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BusDriver_C">();
	}
	static class ABP_BusDriver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BusDriver_C>();
	}
};

}
