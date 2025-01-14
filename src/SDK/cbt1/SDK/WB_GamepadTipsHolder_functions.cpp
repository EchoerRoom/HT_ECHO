#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GamepadTipsHolder

#include "Basic.hpp"

#include "WB_GamepadTipsHolder_classes.hpp"
#include "WB_GamepadTipsHolder_parameters.hpp"


namespace SDK
{

// Function WB_GamepadTipsHolder.WB_GamepadTipsHolder_C.ExecuteUbergraph_WB_GamepadTipsHolder
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GamepadTipsHolder_C::ExecuteUbergraph_WB_GamepadTipsHolder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GamepadTipsHolder_C", "ExecuteUbergraph_WB_GamepadTipsHolder");

	Params::WB_GamepadTipsHolder_C_ExecuteUbergraph_WB_GamepadTipsHolder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_GamepadTipsHolder.WB_GamepadTipsHolder_C.BP_OnTipsDeactivated
// (Event, Public, BlueprintEvent)

void UWB_GamepadTipsHolder_C::BP_OnTipsDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GamepadTipsHolder_C", "BP_OnTipsDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_GamepadTipsHolder.WB_GamepadTipsHolder_C.BP_OnTipsActivated
// (Event, Public, BlueprintEvent)

void UWB_GamepadTipsHolder_C::BP_OnTipsActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GamepadTipsHolder_C", "BP_OnTipsActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

