#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TriggerGEBase

#include "Basic.hpp"

#include "GA_TriggerGEBase_classes.hpp"
#include "GA_TriggerGEBase_parameters.hpp"


namespace SDK
{

// Function GA_TriggerGEBase.GA_TriggerGEBase_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     TagParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_TriggerGEBase_C::CustomEvent(const struct FGameplayTag& TagParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TriggerGEBase_C", "CustomEvent");

	Params::GA_TriggerGEBase_C_CustomEvent Parms{};

	Parms.TagParam = std::move(TagParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TriggerGEBase.GA_TriggerGEBase_C.ExecuteUbergraph_GA_TriggerGEBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TriggerGEBase_C::ExecuteUbergraph_GA_TriggerGEBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TriggerGEBase_C", "ExecuteUbergraph_GA_TriggerGEBase");

	Params::GA_TriggerGEBase_C_ExecuteUbergraph_GA_TriggerGEBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TriggerGEBase.GA_TriggerGEBase_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TriggerGEBase_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TriggerGEBase_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TriggerGEBase.GA_TriggerGEBase_C.OnFinish_E44B65F545DF26B69D9E58BE9996F973
// (BlueprintCallable, BlueprintEvent)

void UGA_TriggerGEBase_C::OnFinish_E44B65F545DF26B69D9E58BE9996F973()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TriggerGEBase_C", "OnFinish_E44B65F545DF26B69D9E58BE9996F973");

	UObject::ProcessEvent(Func, nullptr);
}

}
