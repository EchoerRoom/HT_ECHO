#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Reaction_GuangLingXiang_Charge

#include "Basic.hpp"

#include "GE_Reaction_GuangLingXiang_Charge_classes.hpp"
#include "GE_Reaction_GuangLingXiang_Charge_parameters.hpp"


namespace SDK
{

// Function GE_Reaction_GuangLingXiang_Charge.GE_Reaction_GuangLingXiang_Charge_C.ExecuteUbergraph_GE_Reaction_GuangLingXiang_Charge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGE_Reaction_GuangLingXiang_Charge_C::ExecuteUbergraph_GE_Reaction_GuangLingXiang_Charge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GE_Reaction_GuangLingXiang_Charge_C", "ExecuteUbergraph_GE_Reaction_GuangLingXiang_Charge");

	Params::GE_Reaction_GuangLingXiang_Charge_C_ExecuteUbergraph_GE_Reaction_GuangLingXiang_Charge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

