#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Actor_MintUltraSkill_TimeDilation

#include "Basic.hpp"

#include "Actor_MintUltraSkill_TimeDilation_classes.hpp"
#include "Actor_MintUltraSkill_TimeDilation_parameters.hpp"


namespace SDK
{

// Function Actor_MintUltraSkill_TimeDilation.Actor_MintUltraSkill_TimeDilation_C.ExecuteUbergraph_Actor_MintUltraSkill_TimeDilation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AActor_MintUltraSkill_TimeDilation_C::ExecuteUbergraph_Actor_MintUltraSkill_TimeDilation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Actor_MintUltraSkill_TimeDilation_C", "ExecuteUbergraph_Actor_MintUltraSkill_TimeDilation");

	Params::Actor_MintUltraSkill_TimeDilation_C_ExecuteUbergraph_Actor_MintUltraSkill_TimeDilation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Actor_MintUltraSkill_TimeDilation.Actor_MintUltraSkill_TimeDilation_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AActor_MintUltraSkill_TimeDilation_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Actor_MintUltraSkill_TimeDilation_C", "ReceiveActorBeginOverlap");

	Params::Actor_MintUltraSkill_TimeDilation_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Actor_MintUltraSkill_TimeDilation.Actor_MintUltraSkill_TimeDilation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AActor_MintUltraSkill_TimeDilation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Actor_MintUltraSkill_TimeDilation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
