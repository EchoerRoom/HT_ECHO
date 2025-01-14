#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_OverallUILayout

#include "Basic.hpp"

#include "W_OverallUILayout_classes.hpp"
#include "W_OverallUILayout_parameters.hpp"


namespace SDK
{

// Function W_OverallUILayout.W_OverallUILayout_C.ExecuteUbergraph_W_OverallUILayout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OverallUILayout_C::ExecuteUbergraph_W_OverallUILayout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_OverallUILayout_C", "ExecuteUbergraph_W_OverallUILayout");

	Params::W_OverallUILayout_C_ExecuteUbergraph_W_OverallUILayout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_OverallUILayout.W_OverallUILayout_C.GetWidgetContainerByUI
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHTUIBase*                        InUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHTActivatableWidgetContainerStack*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UHTActivatableWidgetContainerStack* UW_OverallUILayout_C::GetWidgetContainerByUI(class UHTUIBase* InUI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_OverallUILayout_C", "GetWidgetContainerByUI");

	Params::W_OverallUILayout_C_GetWidgetContainerByUI Parms{};

	Parms.InUI = InUI;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_OverallUILayout.W_OverallUILayout_C.HideAllLayer
// (Event, Public, BlueprintEvent)

void UW_OverallUILayout_C::HideAllLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_OverallUILayout_C", "HideAllLayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_OverallUILayout.W_OverallUILayout_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_OverallUILayout_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_OverallUILayout_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_OverallUILayout.W_OverallUILayout_C.RevertLayerShow
// (Event, Public, BlueprintEvent)

void UW_OverallUILayout_C::RevertLayerShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_OverallUILayout_C", "RevertLayerShow");

	UObject::ProcessEvent(Func, nullptr);
}

}

