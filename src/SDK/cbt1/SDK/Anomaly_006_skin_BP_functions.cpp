#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Anomaly_006_skin_BP

#include "Basic.hpp"

#include "Anomaly_006_skin_BP_classes.hpp"
#include "Anomaly_006_skin_BP_parameters.hpp"


namespace SDK
{

// Function Anomaly_006_skin_BP.Anomaly_006_skin_BP_C.ExecuteUbergraph_Anomaly_006_skin_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnomaly_006_skin_BP_C::ExecuteUbergraph_Anomaly_006_skin_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anomaly_006_skin_BP_C", "ExecuteUbergraph_Anomaly_006_skin_BP");

	Params::Anomaly_006_skin_BP_C_ExecuteUbergraph_Anomaly_006_skin_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Anomaly_006_skin_BP.Anomaly_006_skin_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAnomaly_006_skin_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anomaly_006_skin_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Anomaly_006_skin_BP.Anomaly_006_skin_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnomaly_006_skin_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Anomaly_006_skin_BP_C", "ReceiveTick");

	Params::Anomaly_006_skin_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
