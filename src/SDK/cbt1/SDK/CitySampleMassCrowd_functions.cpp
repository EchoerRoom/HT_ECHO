#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CitySampleMassCrowd

#include "Basic.hpp"

#include "CitySampleMassCrowd_classes.hpp"
#include "CitySampleMassCrowd_parameters.hpp"


namespace SDK
{

// Function CitySampleMassCrowd.MassCrowdAnimationSettings.GetContextualAnimOptions
// (Final, Native, Static, Private)
// Parameters:
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UMassCrowdAnimationSettings::GetContextualAnimOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MassCrowdAnimationSettings", "GetContextualAnimOptions");

	Params::MassCrowdAnimationSettings_GetContextualAnimOptions Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

