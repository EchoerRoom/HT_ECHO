#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerStateBase

#include "Basic.hpp"

#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerStateBase.BP_PlayerStateBase_C
// 0x0010 (0x3410 - 0x3400)
class ABP_PlayerStateBase_C final : public AHTPlayerState
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x3400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerStateBase_C">();
	}
	static class ABP_PlayerStateBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerStateBase_C>();
	}
};

}

