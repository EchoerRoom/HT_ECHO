#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_Aiming

#include "Basic.hpp"

#include "BPUI_Aiming_classes.hpp"
#include "BPUI_Aiming_parameters.hpp"


namespace SDK
{

// Function BPUI_Aiming.BPUI_Aiming_C.BP_ShowCantStealAbilityPanel
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_Aiming_C::BP_ShowCantStealAbilityPanel(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_Aiming_C", "BP_ShowCantStealAbilityPanel");

	Params::BPUI_Aiming_C_BP_ShowCantStealAbilityPanel Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_Aiming.BPUI_Aiming_C.ExecuteUbergraph_BPUI_Aiming
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_Aiming_C::ExecuteUbergraph_BPUI_Aiming(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_Aiming_C", "ExecuteUbergraph_BPUI_Aiming");

	Params::BPUI_Aiming_C_ExecuteUbergraph_BPUI_Aiming Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_Aiming.BPUI_Aiming_C.miaozhun_buketou
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_Aiming_C::Miaozhun_buketou()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_Aiming_C", "miaozhun_buketou");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_Aiming.BPUI_Aiming_C.miaozhun_ketou
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_Aiming_C::Miaozhun_ketou()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_Aiming_C", "miaozhun_ketou");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_Aiming.BPUI_Aiming_C.miaozhun_yy_buketou
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_Aiming_C::Miaozhun_yy_buketou()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_Aiming_C", "miaozhun_yy_buketou");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_Aiming.BPUI_Aiming_C.miaozhun_yy_ketou
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_Aiming_C::Miaozhun_yy_ketou()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_Aiming_C", "miaozhun_yy_ketou");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_Aiming.BPUI_Aiming_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_Aiming_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_Aiming_C", "PreConstruct");

	Params::BPUI_Aiming_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

