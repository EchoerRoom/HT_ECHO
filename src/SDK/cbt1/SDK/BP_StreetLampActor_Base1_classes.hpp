#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StreetLampActor_Base1

#include "Basic.hpp"

#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StreetLampActor_Base1.BP_StreetLampActor_Base1_C
// 0x0010 (0x02C8 - 0x02B8)
class ABP_StreetLampActor_Base1_C final : public AHTMassStreetLampActor
{
public:
	class UCapsuleComponent*                      Capsule;                                           // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot1;                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StreetLampActor_Base1_C">();
	}
	static class ABP_StreetLampActor_Base1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StreetLampActor_Base1_C>();
	}
};

}
