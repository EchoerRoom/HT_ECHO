#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_Fadia039_Passive2

#include "Basic.hpp"

#include "Buff_Fadia039_Passive2_classes.hpp"
#include "Buff_Fadia039_Passive2_parameters.hpp"


namespace SDK
{

// Function Buff_Fadia039_Passive2.Buff_Fadia039_Passive2_C.ExecuteUbergraph_Buff_Fadia039_Passive2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_Fadia039_Passive2_C::ExecuteUbergraph_Buff_Fadia039_Passive2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_Fadia039_Passive2_C", "ExecuteUbergraph_Buff_Fadia039_Passive2");

	Params::Buff_Fadia039_Passive2_C_ExecuteUbergraph_Buff_Fadia039_Passive2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

