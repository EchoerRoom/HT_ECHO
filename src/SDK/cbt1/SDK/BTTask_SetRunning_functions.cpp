#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_SetRunning

#include "Basic.hpp"

#include "BTTask_SetRunning_classes.hpp"
#include "BTTask_SetRunning_parameters.hpp"


namespace SDK
{

// Function BTTask_SetRunning.BTTask_SetRunning_C.ExecuteUbergraph_BTTask_SetRunning
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetRunning_C::ExecuteUbergraph_BTTask_SetRunning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetRunning_C", "ExecuteUbergraph_BTTask_SetRunning");

	Params::BTTask_SetRunning_C_ExecuteUbergraph_BTTask_SetRunning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_SetRunning.BTTask_SetRunning_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetRunning_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_SetRunning_C", "ReceiveExecuteAI");

	Params::BTTask_SetRunning_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}
