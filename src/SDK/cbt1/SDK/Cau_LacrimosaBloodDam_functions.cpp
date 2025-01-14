#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cau_LacrimosaBloodDam

#include "Basic.hpp"

#include "Cau_LacrimosaBloodDam_classes.hpp"
#include "Cau_LacrimosaBloodDam_parameters.hpp"


namespace SDK
{

// Function Cau_LacrimosaBloodDam.Cau_LacrimosaBloodDam_C.HTCustomCalculateBaseMagnitude
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           OwnerActor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InstigatorActor                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UCau_LacrimosaBloodDam_C::HTCustomCalculateBaseMagnitude(const class AActor* OwnerActor, const class AActor* HitActor, const class AActor* InstigatorActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cau_LacrimosaBloodDam_C", "HTCustomCalculateBaseMagnitude");

	Params::Cau_LacrimosaBloodDam_C_HTCustomCalculateBaseMagnitude Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.HitActor = HitActor;
	Parms.InstigatorActor = InstigatorActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

