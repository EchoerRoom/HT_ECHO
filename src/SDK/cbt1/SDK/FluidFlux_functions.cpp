#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FluidFlux

#include "Basic.hpp"

#include "FluidFlux_classes.hpp"
#include "FluidFlux_parameters.hpp"


namespace SDK
{

// Function FluidFlux.FluidFluxActor.IsES3_1
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFluidFluxActor::IsES3_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FluidFluxActor", "IsES3_1");

	Params::FluidFluxActor_IsES3_1 Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function FluidFlux.FluidFluxActor.WhenFeatureLevelChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFluidFluxActor::WhenFeatureLevelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FluidFluxActor", "WhenFeatureLevelChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}
