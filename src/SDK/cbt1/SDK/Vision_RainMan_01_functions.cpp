#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vision_RainMan_01

#include "Basic.hpp"

#include "Vision_RainMan_01_classes.hpp"
#include "Vision_RainMan_01_parameters.hpp"


namespace SDK
{

// Function Vision_RainMan_01.Vision_RainMan_01_C.Complete Vision
// (BlueprintCallable, BlueprintEvent)

void AVision_RainMan_01_C::Complete_Vision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vision_RainMan_01_C", "Complete Vision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Vision_RainMan_01.Vision_RainMan_01_C.ExecuteUbergraph_Vision_RainMan_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVision_RainMan_01_C::ExecuteUbergraph_Vision_RainMan_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vision_RainMan_01_C", "ExecuteUbergraph_Vision_RainMan_01");

	Params::Vision_RainMan_01_C_ExecuteUbergraph_Vision_RainMan_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
