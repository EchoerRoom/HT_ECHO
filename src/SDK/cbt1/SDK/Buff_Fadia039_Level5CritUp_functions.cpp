#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_Fadia039_Level5CritUp

#include "Basic.hpp"

#include "Buff_Fadia039_Level5CritUp_classes.hpp"
#include "Buff_Fadia039_Level5CritUp_parameters.hpp"


namespace SDK
{

// Function Buff_Fadia039_Level5CritUp.Buff_Fadia039_Level5CritUp_C.ExecuteUbergraph_Buff_Fadia039_Level5CritUp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_Fadia039_Level5CritUp_C::ExecuteUbergraph_Buff_Fadia039_Level5CritUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_Fadia039_Level5CritUp_C", "ExecuteUbergraph_Buff_Fadia039_Level5CritUp");

	Params::Buff_Fadia039_Level5CritUp_C_ExecuteUbergraph_Buff_Fadia039_Level5CritUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
