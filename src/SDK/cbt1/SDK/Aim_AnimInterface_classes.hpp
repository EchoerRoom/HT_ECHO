#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Aim_AnimInterface

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Aim_AnimInterface.Aim_AnimInterface_C
// 0x0000 (0x0028 - 0x0028)
class IAim_AnimInterface_C final : public IAnimLayerInterface
{
public:
	void AimLayer(struct FPoseLink* Param_AimLayer);
	void AimOffset(const struct FPoseLink& InPose, struct FPoseLink* Param_AimOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Aim_AnimInterface_C">();
	}
	static class IAim_AnimInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAim_AnimInterface_C>();
	}
};

}
