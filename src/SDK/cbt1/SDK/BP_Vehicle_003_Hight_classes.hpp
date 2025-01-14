#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Vehicle_003_Hight

#include "Basic.hpp"

#include "BP_Vehicle_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Vehicle_003_Hight.BP_Vehicle_003_Hight_C
// 0x0020 (0x0990 - 0x0970)
class ABP_Vehicle_003_Hight_C : public ABP_Vehicle_Base_C
{
public:
	class UStaticMeshComponent*                   Wheel_RR;                                          // 0x0970(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel_FL;                                          // 0x0978(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel_FR;                                          // 0x0980(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wheel_RL;                                          // 0x0988(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Vehicle_003_Hight_C">();
	}
	static class ABP_Vehicle_003_Hight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Vehicle_003_Hight_C>();
	}
};

}

