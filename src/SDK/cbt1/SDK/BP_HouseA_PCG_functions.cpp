#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HouseA_PCG

#include "Basic.hpp"

#include "BP_HouseA_PCG_classes.hpp"
#include "BP_HouseA_PCG_parameters.hpp"


namespace SDK
{

// Function BP_HouseA_PCG.BP_HouseA_PCG_C.ChangeCorner
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HouseA_PCG_C::ChangeCorner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HouseA_PCG_C", "ChangeCorner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HouseA_PCG.BP_HouseA_PCG_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HouseA_PCG_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HouseA_PCG_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
