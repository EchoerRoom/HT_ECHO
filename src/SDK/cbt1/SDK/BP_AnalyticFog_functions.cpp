#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnalyticFog

#include "Basic.hpp"

#include "BP_AnalyticFog_classes.hpp"
#include "BP_AnalyticFog_parameters.hpp"


namespace SDK
{

// Function BP_AnalyticFog.BP_AnalyticFog_C.BndEvt__BP_AnalyticFog_BP_SceneDissolveComponent_K2Node_ComponentBoundEvent_0_DissolveComponentEffectTriggered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bReset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AnalyticFog_C::BndEvt__BP_AnalyticFog_BP_SceneDissolveComponent_K2Node_ComponentBoundEvent_0_DissolveComponentEffectTriggered__DelegateSignature(bool bReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalyticFog_C", "BndEvt__BP_AnalyticFog_BP_SceneDissolveComponent_K2Node_ComponentBoundEvent_0_DissolveComponentEffectTriggered__DelegateSignature");

	Params::BP_AnalyticFog_C_BndEvt__BP_AnalyticFog_BP_SceneDissolveComponent_K2Node_ComponentBoundEvent_0_DissolveComponentEffectTriggered__DelegateSignature Parms{};

	Parms.bReset = bReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AnalyticFog.BP_AnalyticFog_C.EffectTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_AnalyticFog_C::EffectTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalyticFog_C", "EffectTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AnalyticFog.BP_AnalyticFog_C.EffectTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_AnalyticFog_C::EffectTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalyticFog_C", "EffectTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AnalyticFog.BP_AnalyticFog_C.ExecuteUbergraph_BP_AnalyticFog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AnalyticFog_C::ExecuteUbergraph_BP_AnalyticFog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalyticFog_C", "ExecuteUbergraph_BP_AnalyticFog");

	Params::BP_AnalyticFog_C_ExecuteUbergraph_BP_AnalyticFog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AnalyticFog.BP_AnalyticFog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AnalyticFog_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalyticFog_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AnalyticFog.BP_AnalyticFog_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AnalyticFog_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalyticFog_C", "ReceiveTick");

	Params::BP_AnalyticFog_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AnalyticFog.BP_AnalyticFog_C.Update
// (BlueprintCallable, BlueprintEvent)

void ABP_AnalyticFog_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalyticFog_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AnalyticFog.BP_AnalyticFog_C.UpdateParameterByTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AnalyticFog_C::UpdateParameterByTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalyticFog_C", "UpdateParameterByTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AnalyticFog.BP_AnalyticFog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AnalyticFog_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalyticFog_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
