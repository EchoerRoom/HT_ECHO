#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_MassCrowdAnimSharingTransitionInstance

#include "Basic.hpp"

#include "ABP_MassCrowdAnimSharingTransitionInstance_classes.hpp"
#include "ABP_MassCrowdAnimSharingTransitionInstance_parameters.hpp"


namespace SDK
{

// Function ABP_MassCrowdAnimSharingTransitionInstance.ABP_MassCrowdAnimSharingTransitionInstance_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_MassCrowdAnimSharingTransitionInstance_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MassCrowdAnimSharingTransitionInstance_C", "AnimGraph");

	Params::ABP_MassCrowdAnimSharingTransitionInstance_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_MassCrowdAnimSharingTransitionInstance.ABP_MassCrowdAnimSharingTransitionInstance_C.ExecuteUbergraph_ABP_MassCrowdAnimSharingTransitionInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MassCrowdAnimSharingTransitionInstance_C::ExecuteUbergraph_ABP_MassCrowdAnimSharingTransitionInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MassCrowdAnimSharingTransitionInstance_C", "ExecuteUbergraph_ABP_MassCrowdAnimSharingTransitionInstance");

	Params::ABP_MassCrowdAnimSharingTransitionInstance_C_ExecuteUbergraph_ABP_MassCrowdAnimSharingTransitionInstance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
