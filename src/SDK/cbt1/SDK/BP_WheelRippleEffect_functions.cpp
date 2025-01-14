#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WheelRippleEffect

#include "Basic.hpp"

#include "BP_WheelRippleEffect_classes.hpp"
#include "BP_WheelRippleEffect_parameters.hpp"


namespace SDK
{

// Function BP_WheelRippleEffect.BP_WheelRippleEffect_C.ExecuteUbergraph_BP_WheelRippleEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WheelRippleEffect_C::ExecuteUbergraph_BP_WheelRippleEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WheelRippleEffect_C", "ExecuteUbergraph_BP_WheelRippleEffect");

	Params::BP_WheelRippleEffect_C_ExecuteUbergraph_BP_WheelRippleEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WheelRippleEffect.BP_WheelRippleEffect_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_WheelRippleEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WheelRippleEffect_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WheelRippleEffect.BP_WheelRippleEffect_C.RippleEffectEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                          HitPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WheelRippleEffect_C::RippleEffectEvent(const struct FVector& HitPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WheelRippleEffect_C", "RippleEffectEvent");

	Params::BP_WheelRippleEffect_C_RippleEffectEvent Parms{};

	Parms.HitPos = std::move(HitPos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WheelRippleEffect.BP_WheelRippleEffect_C.SandEffectEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                          HitPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WheelRippleEffect_C::SandEffectEvent(const struct FVector& HitPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WheelRippleEffect_C", "SandEffectEvent");

	Params::BP_WheelRippleEffect_C_SandEffectEvent Parms{};

	Parms.HitPos = std::move(HitPos);

	UObject::ProcessEvent(Func, &Parms);
}

}

