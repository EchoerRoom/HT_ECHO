#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vehicle003_BackKit_01

#include "Basic.hpp"

#include "Vehicle003_BackKit_01_classes.hpp"
#include "Vehicle003_BackKit_01_parameters.hpp"


namespace SDK
{

// Function Vehicle003_BackKit_01.Vehicle003_BackKit_01_C.ExecuteUbergraph_Vehicle003_BackKit_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicle003_BackKit_01_C::ExecuteUbergraph_Vehicle003_BackKit_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicle003_BackKit_01_C", "ExecuteUbergraph_Vehicle003_BackKit_01");

	Params::Vehicle003_BackKit_01_C_ExecuteUbergraph_Vehicle003_BackKit_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Vehicle003_BackKit_01.Vehicle003_BackKit_01_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UVehicle003_BackKit_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicle003_BackKit_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
