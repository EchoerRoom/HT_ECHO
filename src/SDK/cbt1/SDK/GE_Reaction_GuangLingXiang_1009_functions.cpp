#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Reaction_GuangLingXiang_1009

#include "Basic.hpp"

#include "GE_Reaction_GuangLingXiang_1009_classes.hpp"
#include "GE_Reaction_GuangLingXiang_1009_parameters.hpp"


namespace SDK
{

// Function GE_Reaction_GuangLingXiang_1009.GE_Reaction_GuangLingXiang_1009_C.ExecuteUbergraph_GE_Reaction_GuangLingXiang_1009
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGE_Reaction_GuangLingXiang_1009_C::ExecuteUbergraph_GE_Reaction_GuangLingXiang_1009(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GE_Reaction_GuangLingXiang_1009_C", "ExecuteUbergraph_GE_Reaction_GuangLingXiang_1009");

	Params::GE_Reaction_GuangLingXiang_1009_C_ExecuteUbergraph_GE_Reaction_GuangLingXiang_1009 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
