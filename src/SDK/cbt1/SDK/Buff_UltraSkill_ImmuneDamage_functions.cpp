#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_UltraSkill_ImmuneDamage

#include "Basic.hpp"

#include "Buff_UltraSkill_ImmuneDamage_classes.hpp"
#include "Buff_UltraSkill_ImmuneDamage_parameters.hpp"


namespace SDK
{

// Function Buff_UltraSkill_ImmuneDamage.Buff_UltraSkill_ImmuneDamage_C.ExecuteUbergraph_Buff_UltraSkill_ImmuneDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuff_UltraSkill_ImmuneDamage_C::ExecuteUbergraph_Buff_UltraSkill_ImmuneDamage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buff_UltraSkill_ImmuneDamage_C", "ExecuteUbergraph_Buff_UltraSkill_ImmuneDamage");

	Params::Buff_UltraSkill_ImmuneDamage_C_ExecuteUbergraph_Buff_UltraSkill_ImmuneDamage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

