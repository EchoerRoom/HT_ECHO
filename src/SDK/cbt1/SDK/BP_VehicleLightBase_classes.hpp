#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleLightBase

#include "Basic.hpp"

#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VehicleLightBase.BP_VehicleLightBase_C
// 0x0010 (0x02E0 - 0x02D0)
class ABP_VehicleLightBase_C final : public AHTVehicleLightActor
{
public:
	class USpotLightComponent*                    SpotLight;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VehicleLightBase_C">();
	}
	static class ABP_VehicleLightBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VehicleLightBase_C>();
	}
};

}
