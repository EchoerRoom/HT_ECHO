#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleSeat_Head

#include "Basic.hpp"

#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VehicleSeat_Head.BP_VehicleSeat_Head_C
// 0x0028 (0x0E70 - 0x0E48)
class ABP_VehicleSeat_Head_C final : public AHTVehicleSeatActor
{
public:
	class UHTVehicleSeatInteractableSphereComponent* HTVehicleSeatInteractableSphere_RF;                // 0x0E48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTVehicleSeatInteractableSphereComponent* HTVehicleSeatInteractableSphere_LB;                // 0x0E50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTVehicleSeatInteractableSphereComponent* HTVehicleSeatInteractableSphere_RB;                // 0x0E58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTVehicleSeatInteractableSphereComponent* HTVehicleSeatInteractableSphere_LF;                // 0x0E60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Vehicle_011_01_seat;                            // 0x0E68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VehicleSeat_Head_C">();
	}
	static class ABP_VehicleSeat_Head_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VehicleSeat_Head_C>();
	}
};

}

