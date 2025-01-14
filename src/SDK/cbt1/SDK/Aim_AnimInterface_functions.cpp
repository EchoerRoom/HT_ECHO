#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Aim_AnimInterface

#include "Basic.hpp"

#include "Aim_AnimInterface_classes.hpp"
#include "Aim_AnimInterface_parameters.hpp"


namespace SDK
{

// Function Aim_AnimInterface.Aim_AnimInterface_C.AimLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AimLayer                                         (Parm, OutParm, NoDestructor)

void IAim_AnimInterface_C::AimLayer(struct FPoseLink* Param_AimLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aim_AnimInterface_C", "AimLayer");

	Params::Aim_AnimInterface_C_AimLayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AimLayer != nullptr)
		*Param_AimLayer = std::move(Parms.Param_AimLayer);
}


// Function Aim_AnimInterface.Aim_AnimInterface_C.AimOffset
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AimOffset                                        (Parm, OutParm, NoDestructor)

void IAim_AnimInterface_C::AimOffset(const struct FPoseLink& InPose, struct FPoseLink* Param_AimOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aim_AnimInterface_C", "AimOffset");

	Params::Aim_AnimInterface_C_AimOffset Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AimOffset != nullptr)
		*Param_AimOffset = std::move(Parms.Param_AimOffset);
}

}

