#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Fadia_Skill

#include "Basic.hpp"

#include "GA_Fadia_Skill_classes.hpp"
#include "GA_Fadia_Skill_parameters.hpp"


namespace SDK
{

// Function GA_Fadia_Skill.GA_Fadia_Skill_C.ExecuteUbergraph_GA_Fadia_Skill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Fadia_Skill_C::ExecuteUbergraph_GA_Fadia_Skill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Fadia_Skill_C", "ExecuteUbergraph_GA_Fadia_Skill");

	Params::GA_Fadia_Skill_C_ExecuteUbergraph_GA_Fadia_Skill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Fadia_Skill.GA_Fadia_Skill_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Fadia_Skill_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Fadia_Skill_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Fadia_Skill.GA_Fadia_Skill_C.OnReceiveEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     ContainerTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Fadia_Skill_C::OnReceiveEvent(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Fadia_Skill_C", "OnReceiveEvent");

	Params::GA_Fadia_Skill_C_OnReceiveEvent Parms{};

	Parms.ContainerTag = std::move(ContainerTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}
