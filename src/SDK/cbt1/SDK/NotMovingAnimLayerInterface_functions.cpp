#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NotMovingAnimLayerInterface

#include "Basic.hpp"

#include "NotMovingAnimLayerInterface_classes.hpp"
#include "NotMovingAnimLayerInterface_parameters.hpp"


namespace SDK
{

// Function NotMovingAnimLayerInterface.NotMovingAnimLayerInterface_C.NotMoving
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_NotMoving                                        (Parm, OutParm, NoDestructor)

void INotMovingAnimLayerInterface_C::NotMoving(struct FPoseLink* Param_NotMoving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotMovingAnimLayerInterface_C", "NotMoving");

	Params::NotMovingAnimLayerInterface_C_NotMoving Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_NotMoving != nullptr)
		*Param_NotMoving = std::move(Parms.Param_NotMoving);
}

}

