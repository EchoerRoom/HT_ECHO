#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HTAnimSharingTransitionInstanceBaseBP

#include "Basic.hpp"

#include "HTAnimSharingTransitionInstanceBaseBP_classes.hpp"
#include "HTAnimSharingTransitionInstanceBaseBP_parameters.hpp"


namespace SDK
{

// Function HTAnimSharingTransitionInstanceBaseBP.HTAnimSharingTransitionInstanceBaseBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UHTAnimSharingTransitionInstanceBaseBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HTAnimSharingTransitionInstanceBaseBP_C", "AnimGraph");

	Params::HTAnimSharingTransitionInstanceBaseBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function HTAnimSharingTransitionInstanceBaseBP.HTAnimSharingTransitionInstanceBaseBP_C.ExecuteUbergraph_HTAnimSharingTransitionInstanceBaseBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHTAnimSharingTransitionInstanceBaseBP_C::ExecuteUbergraph_HTAnimSharingTransitionInstanceBaseBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HTAnimSharingTransitionInstanceBaseBP_C", "ExecuteUbergraph_HTAnimSharingTransitionInstanceBaseBP");

	Params::HTAnimSharingTransitionInstanceBaseBP_C_ExecuteUbergraph_HTAnimSharingTransitionInstanceBaseBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
