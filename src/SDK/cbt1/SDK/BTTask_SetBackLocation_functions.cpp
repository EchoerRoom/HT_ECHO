#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_SetBackLocation

#include "Basic.hpp"

#include "BTTask_SetBackLocation_classes.hpp"
#include "BTTask_SetBackLocation_parameters.hpp"


namespace SDK
{

// Function BTTask_SetBackLocation.BTTask_SetBackLocation_C.ExecuteUbergraph_BTTask_SetBackLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetBackLocation_C::ExecuteUbergraph_BTTask_SetBackLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetBackLocation_C", "ExecuteUbergraph_BTTask_SetBackLocation");

	Params::BTTask_SetBackLocation_C_ExecuteUbergraph_BTTask_SetBackLocation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_SetBackLocation.BTTask_SetBackLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetBackLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetBackLocation_C", "ReceiveExecuteAI");

	Params::BTTask_SetBackLocation_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

