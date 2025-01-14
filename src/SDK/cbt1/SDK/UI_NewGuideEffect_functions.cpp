#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_NewGuideEffect

#include "Basic.hpp"

#include "UI_NewGuideEffect_classes.hpp"
#include "UI_NewGuideEffect_parameters.hpp"


namespace SDK
{

// Function UI_NewGuideEffect.UI_NewGuideEffect_C.BP_PlaySelectAnim
// (Event, Public, BlueprintEvent)

void UUI_NewGuideEffect_C::BP_PlaySelectAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NewGuideEffect_C", "BP_PlaySelectAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_NewGuideEffect.UI_NewGuideEffect_C.BP_StopSelectAnim
// (Event, Public, BlueprintEvent)

void UUI_NewGuideEffect_C::BP_StopSelectAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NewGuideEffect_C", "BP_StopSelectAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_NewGuideEffect.UI_NewGuideEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_NewGuideEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NewGuideEffect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_NewGuideEffect.UI_NewGuideEffect_C.ExecuteUbergraph_UI_NewGuideEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_NewGuideEffect_C::ExecuteUbergraph_UI_NewGuideEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NewGuideEffect_C", "ExecuteUbergraph_UI_NewGuideEffect");

	Params::UI_NewGuideEffect_C_ExecuteUbergraph_UI_NewGuideEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_NewGuideEffect.UI_NewGuideEffect_C.Finished_4CDB4E694ED382414B89739CCCD5D9A7
// (BlueprintCallable, BlueprintEvent)

void UUI_NewGuideEffect_C::Finished_4CDB4E694ED382414B89739CCCD5D9A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NewGuideEffect_C", "Finished_4CDB4E694ED382414B89739CCCD5D9A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_NewGuideEffect.UI_NewGuideEffect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_NewGuideEffect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NewGuideEffect_C", "PreConstruct");

	Params::UI_NewGuideEffect_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_NewGuideEffect.UI_NewGuideEffect_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_NewGuideEffect_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NewGuideEffect_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_NewGuideEffect.UI_NewGuideEffect_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UUI_NewGuideEffect_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NewGuideEffect_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

