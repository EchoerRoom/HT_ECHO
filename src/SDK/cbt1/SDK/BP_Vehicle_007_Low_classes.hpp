#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Vehicle_007_Low

#include "Basic.hpp"

#include "BP_LowVehicle_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Vehicle_007_Low.BP_Vehicle_007_Low_C
// 0x0020 (0x0550 - 0x0530)
class ABP_Vehicle_007_Low_C : public ABP_LowVehicle_Base_C
{
public:
	class UStaticMeshComponent*                   Wheel_FL;                                          // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel_RR;                                          // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel_RL;                                          // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel_FR;                                          // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Vehicle_007_Low_C">();
	}
	static class ABP_Vehicle_007_Low_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Vehicle_007_Low_C>();
	}
};

}
