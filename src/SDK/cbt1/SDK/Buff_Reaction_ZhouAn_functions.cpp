#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_Reaction_ZhouAn

#include "Basic.hpp"

#include "Buff_Reaction_ZhouAn_classes.hpp"
#include "Buff_Reaction_ZhouAn_parameters.hpp"


namespace SDK
{

// Function Buff_Reaction_ZhouAn.Buff_Reaction_ZhouAn_C.ExecuteUbergraph_Buff_Reaction_ZhouAn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_Reaction_ZhouAn_C::ExecuteUbergraph_Buff_Reaction_ZhouAn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_Reaction_ZhouAn_C", "ExecuteUbergraph_Buff_Reaction_ZhouAn");

	Params::Buff_Reaction_ZhouAn_C_ExecuteUbergraph_Buff_Reaction_ZhouAn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
