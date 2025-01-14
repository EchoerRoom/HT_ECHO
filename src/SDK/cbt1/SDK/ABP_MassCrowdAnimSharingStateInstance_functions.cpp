#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_MassCrowdAnimSharingStateInstance

#include "Basic.hpp"

#include "ABP_MassCrowdAnimSharingStateInstance_classes.hpp"
#include "ABP_MassCrowdAnimSharingStateInstance_parameters.hpp"


namespace SDK
{

// Function ABP_MassCrowdAnimSharingStateInstance.ABP_MassCrowdAnimSharingStateInstance_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_MassCrowdAnimSharingStateInstance_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MassCrowdAnimSharingStateInstance_C", "AnimGraph");

	Params::ABP_MassCrowdAnimSharingStateInstance_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_MassCrowdAnimSharingStateInstance.ABP_MassCrowdAnimSharingStateInstance_C.ExecuteUbergraph_ABP_MassCrowdAnimSharingStateInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MassCrowdAnimSharingStateInstance_C::ExecuteUbergraph_ABP_MassCrowdAnimSharingStateInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_MassCrowdAnimSharingStateInstance_C", "ExecuteUbergraph_ABP_MassCrowdAnimSharingStateInstance");

	Params::ABP_MassCrowdAnimSharingStateInstance_C_ExecuteUbergraph_ABP_MassCrowdAnimSharingStateInstance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

