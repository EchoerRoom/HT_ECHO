#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_Lacrimosa_StealPassive

#include "Basic.hpp"

#include "Buff_Lacrimosa_StealPassive_classes.hpp"
#include "Buff_Lacrimosa_StealPassive_parameters.hpp"


namespace SDK
{

// Function Buff_Lacrimosa_StealPassive.Buff_Lacrimosa_StealPassive_C.ExecuteUbergraph_Buff_Lacrimosa_StealPassive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_Lacrimosa_StealPassive_C::ExecuteUbergraph_Buff_Lacrimosa_StealPassive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_Lacrimosa_StealPassive_C", "ExecuteUbergraph_Buff_Lacrimosa_StealPassive");

	Params::Buff_Lacrimosa_StealPassive_C_ExecuteUbergraph_Buff_Lacrimosa_StealPassive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
