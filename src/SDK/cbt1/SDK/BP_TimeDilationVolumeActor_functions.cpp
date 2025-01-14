#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeDilationVolumeActor

#include "Basic.hpp"

#include "BP_TimeDilationVolumeActor_classes.hpp"
#include "BP_TimeDilationVolumeActor_parameters.hpp"


namespace SDK
{

// Function BP_TimeDilationVolumeActor.BP_TimeDilationVolumeActor_C.ExecuteUbergraph_BP_TimeDilationVolumeActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeDilationVolumeActor_C::ExecuteUbergraph_BP_TimeDilationVolumeActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeDilationVolumeActor_C", "ExecuteUbergraph_BP_TimeDilationVolumeActor");

	Params::BP_TimeDilationVolumeActor_C_ExecuteUbergraph_BP_TimeDilationVolumeActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeDilationVolumeActor.BP_TimeDilationVolumeActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TimeDilationVolumeActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeDilationVolumeActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

