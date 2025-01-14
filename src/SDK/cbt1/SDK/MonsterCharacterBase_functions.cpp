#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MonsterCharacterBase

#include "Basic.hpp"

#include "MonsterCharacterBase_classes.hpp"
#include "MonsterCharacterBase_parameters.hpp"


namespace SDK
{

// Function MonsterCharacterBase.MonsterCharacterBase_C.BPOnAICharacterDead
// (Event, Public, BlueprintEvent)

void AMonsterCharacterBase_C::BPOnAICharacterDead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterCharacterBase_C", "BPOnAICharacterDead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterCharacterBase.MonsterCharacterBase_C.BPOnBronAnim
// (Event, Public, BlueprintEvent)

void AMonsterCharacterBase_C::BPOnBronAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterCharacterBase_C", "BPOnBronAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterCharacterBase.MonsterCharacterBase_C.ExecuteUbergraph_MonsterCharacterBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMonsterCharacterBase_C::ExecuteUbergraph_MonsterCharacterBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterCharacterBase_C", "ExecuteUbergraph_MonsterCharacterBase");

	Params::MonsterCharacterBase_C_ExecuteUbergraph_MonsterCharacterBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MonsterCharacterBase.MonsterCharacterBase_C.PlayPostGlithEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayForward                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMonsterCharacterBase_C::PlayPostGlithEffect(bool PlayForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterCharacterBase_C", "PlayPostGlithEffect");

	Params::MonsterCharacterBase_C_PlayPostGlithEffect Parms{};

	Parms.PlayForward = PlayForward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MonsterCharacterBase.MonsterCharacterBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMonsterCharacterBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterCharacterBase_C", "ReceiveEndPlay");

	Params::MonsterCharacterBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MonsterCharacterBase.MonsterCharacterBase_C.Timeline__FinishedFunc
// (BlueprintEvent)

void AMonsterCharacterBase_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterCharacterBase_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterCharacterBase.MonsterCharacterBase_C.Timeline__UpdateFunc
// (BlueprintEvent)

void AMonsterCharacterBase_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterCharacterBase_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterCharacterBase.MonsterCharacterBase_C.Timeline_PostEffect__FinishedFunc
// (BlueprintEvent)

void AMonsterCharacterBase_C::Timeline_PostEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterCharacterBase_C", "Timeline_PostEffect__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterCharacterBase.MonsterCharacterBase_C.Timeline_PostEffect__UpdateFunc
// (BlueprintEvent)

void AMonsterCharacterBase_C::Timeline_PostEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterCharacterBase_C", "Timeline_PostEffect__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

