#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_PropMessageObtainSlot

#include "Basic.hpp"

#include "BPUI_PropMessageObtainSlot_classes.hpp"
#include "BPUI_PropMessageObtainSlot_parameters.hpp"


namespace SDK
{

// Function BPUI_PropMessageObtainSlot.BPUI_PropMessageObtainSlot_C.ExecuteUbergraph_BPUI_PropMessageObtainSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_PropMessageObtainSlot_C::ExecuteUbergraph_BPUI_PropMessageObtainSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_PropMessageObtainSlot_C", "ExecuteUbergraph_BPUI_PropMessageObtainSlot");

	Params::BPUI_PropMessageObtainSlot_C_ExecuteUbergraph_BPUI_PropMessageObtainSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_PropMessageObtainSlot.BPUI_PropMessageObtainSlot_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UBPUI_PropMessageObtainSlot_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_PropMessageObtainSlot_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_PropMessageObtainSlot.BPUI_PropMessageObtainSlot_C.SequenceEvent__ENTRYPOINTBPUI_PropMessageObtainSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_PropMessageObtainSlot_C::SequenceEvent__ENTRYPOINTBPUI_PropMessageObtainSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_PropMessageObtainSlot_C", "SequenceEvent__ENTRYPOINTBPUI_PropMessageObtainSlot");

	UObject::ProcessEvent(Func, nullptr);
}

}

