#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WertheimerTower_Base

#include "Basic.hpp"

#include "BP_WertheimerTower_Base_classes.hpp"
#include "BP_WertheimerTower_Base_parameters.hpp"


namespace SDK
{

// Function BP_WertheimerTower_Base.BP_WertheimerTower_Base_C.BPActived
// (Event, Public, BlueprintEvent)
// Parameters:
// class AHTPlayerController*              ByPC                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WertheimerTower_Base_C::BPActived(class AHTPlayerController* ByPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WertheimerTower_Base_C", "BPActived");

	Params::BP_WertheimerTower_Base_C_BPActived Parms{};

	Parms.ByPC = ByPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WertheimerTower_Base.BP_WertheimerTower_Base_C.BPGetInteractEntries
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHTPlayerController*              ByPC                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInteractEntry>           OutInteractEntries                                     (Parm, OutParm, ContainsInstancedReference)

void ABP_WertheimerTower_Base_C::BPGetInteractEntries(class AHTPlayerController* ByPC, TArray<struct FInteractEntry>* OutInteractEntries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WertheimerTower_Base_C", "BPGetInteractEntries");

	Params::BP_WertheimerTower_Base_C_BPGetInteractEntries Parms{};

	Parms.ByPC = ByPC;

	UObject::ProcessEvent(Func, &Parms);

	if (OutInteractEntries != nullptr)
		*OutInteractEntries = std::move(Parms.OutInteractEntries);
}


// Function BP_WertheimerTower_Base.BP_WertheimerTower_Base_C.BPInteractFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHTPlayerController*              ByPC                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   InteractIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WertheimerTower_Base_C::BPInteractFinished(class AHTPlayerController* ByPC, int32 InteractIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WertheimerTower_Base_C", "BPInteractFinished");

	Params::BP_WertheimerTower_Base_C_BPInteractFinished Parms{};

	Parms.ByPC = ByPC;
	Parms.InteractIndex = InteractIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WertheimerTower_Base.BP_WertheimerTower_Base_C.BPOnMainRoleLoadFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class AHTPlayerState*                   PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WertheimerTower_Base_C::BPOnMainRoleLoadFinished(class AHTPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WertheimerTower_Base_C", "BPOnMainRoleLoadFinished");

	Params::BP_WertheimerTower_Base_C_BPOnMainRoleLoadFinished Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WertheimerTower_Base.BP_WertheimerTower_Base_C.Change Wertheimer Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DangerLevel                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WertheimerTower_Base_C::Change_Wertheimer_Color(const int32& DangerLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WertheimerTower_Base_C", "Change Wertheimer Color");

	Params::BP_WertheimerTower_Base_C_Change_Wertheimer_Color Parms{};

	Parms.DangerLevel = DangerLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WertheimerTower_Base.BP_WertheimerTower_Base_C.Change Wertheimer Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHTPlayerState*                   PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  WertheimerValue                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WertheimerTower_Base_C::Change_Wertheimer_Value(class AHTPlayerState* PlayerState, double WertheimerValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WertheimerTower_Base_C", "Change Wertheimer Value");

	Params::BP_WertheimerTower_Base_C_Change_Wertheimer_Value Parms{};

	Parms.PlayerState = PlayerState;
	Parms.WertheimerValue = WertheimerValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WertheimerTower_Base.BP_WertheimerTower_Base_C.ExecuteUbergraph_BP_WertheimerTower_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WertheimerTower_Base_C::ExecuteUbergraph_BP_WertheimerTower_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WertheimerTower_Base_C", "ExecuteUbergraph_BP_WertheimerTower_Base");

	Params::BP_WertheimerTower_Base_C_ExecuteUbergraph_BP_WertheimerTower_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WertheimerTower_Base.BP_WertheimerTower_Base_C.OnSequenceStopped_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*                   LevelSequence                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             InMediaID                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WertheimerTower_Base_C::OnSequenceStopped_Event(class ULevelSequence* LevelSequence, const class FName& InMediaID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WertheimerTower_Base_C", "OnSequenceStopped_Event");

	Params::BP_WertheimerTower_Base_C_OnSequenceStopped_Event Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.InMediaID = InMediaID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WertheimerTower_Base.BP_WertheimerTower_Base_C.OnWertheimerValueChangedDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHTPlayerState*                   PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           InExploreID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   CurrentValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RemainValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WertheimerTower_Base_C::OnWertheimerValueChangedDelegate_Event(class AHTPlayerState* PlayerState, const class FString& InExploreID, float CurrentValue, float RemainValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WertheimerTower_Base_C", "OnWertheimerValueChangedDelegate_Event");

	Params::BP_WertheimerTower_Base_C_OnWertheimerValueChangedDelegate_Event Parms{};

	Parms.PlayerState = PlayerState;
	Parms.InExploreID = std::move(InExploreID);
	Parms.CurrentValue = CurrentValue;
	Parms.RemainValue = RemainValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

