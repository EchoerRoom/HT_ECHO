#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Female_Skill

#include "Basic.hpp"

#include "GA_Female_Skill_classes.hpp"
#include "GA_Female_Skill_parameters.hpp"


namespace SDK
{

// Function GA_Female_Skill.GA_Female_Skill_C.ExecuteUbergraph_GA_Female_Skill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Female_Skill_C::ExecuteUbergraph_GA_Female_Skill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Female_Skill_C", "ExecuteUbergraph_GA_Female_Skill");

	Params::GA_Female_Skill_C_ExecuteUbergraph_GA_Female_Skill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
