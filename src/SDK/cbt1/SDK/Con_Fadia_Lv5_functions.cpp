#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Con_Fadia_Lv5

#include "Basic.hpp"

#include "Con_Fadia_Lv5_classes.hpp"
#include "Con_Fadia_Lv5_parameters.hpp"


namespace SDK
{

// Function Con_Fadia_Lv5.Con_Fadia_Lv5_C.CanApplyGameplayEffectContent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           SourceActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InstigatorActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*                  GameplayEffect                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCon_Fadia_Lv5_C::CanApplyGameplayEffectContent(class AActor* SourceActor, class AActor* TargetActor, class AActor* InstigatorActor, const class UGameplayEffect* GameplayEffect) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Con_Fadia_Lv5_C", "CanApplyGameplayEffectContent");

	Params::Con_Fadia_Lv5_C_CanApplyGameplayEffectContent Parms{};

	Parms.SourceActor = SourceActor;
	Parms.TargetActor = TargetActor;
	Parms.InstigatorActor = InstigatorActor;
	Parms.GameplayEffect = GameplayEffect;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
