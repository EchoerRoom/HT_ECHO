#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_Fadia039_Level4

#include "Basic.hpp"

#include "Buff_Fadia039_Level4_classes.hpp"
#include "Buff_Fadia039_Level4_parameters.hpp"


namespace SDK
{

// Function Buff_Fadia039_Level4.Buff_Fadia039_Level4_C.ExecuteUbergraph_Buff_Fadia039_Level4
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_Fadia039_Level4_C::ExecuteUbergraph_Buff_Fadia039_Level4(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_Fadia039_Level4_C", "ExecuteUbergraph_Buff_Fadia039_Level4");

	Params::Buff_Fadia039_Level4_C_ExecuteUbergraph_Buff_Fadia039_Level4 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

