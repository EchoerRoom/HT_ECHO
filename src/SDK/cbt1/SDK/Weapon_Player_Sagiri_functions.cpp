#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weapon_Player_Sagiri

#include "Basic.hpp"

#include "Weapon_Player_Sagiri_classes.hpp"
#include "Weapon_Player_Sagiri_parameters.hpp"


namespace SDK
{

// Function Weapon_Player_Sagiri.Weapon_Player_Sagiri_C.ExecuteUbergraph_Weapon_Player_Sagiri
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Player_Sagiri_C::ExecuteUbergraph_Weapon_Player_Sagiri(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weapon_Player_Sagiri_C", "ExecuteUbergraph_Weapon_Player_Sagiri");

	Params::Weapon_Player_Sagiri_C_ExecuteUbergraph_Weapon_Player_Sagiri Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weapon_Player_Sagiri.Weapon_Player_Sagiri_C.K2_SwallowTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AHTAbilityCharacter*              InTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AWeapon_Player_Sagiri_C::K2_SwallowTarget(class AHTAbilityCharacter* InTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weapon_Player_Sagiri_C", "K2_SwallowTarget");

	Params::Weapon_Player_Sagiri_C_K2_SwallowTarget Parms{};

	Parms.InTarget = InTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weapon_Player_Sagiri.Weapon_Player_Sagiri_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeapon_Player_Sagiri_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weapon_Player_Sagiri_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weapon_Player_Sagiri.Weapon_Player_Sagiri_C.K2_CanSwallowTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AHTAbilityCharacter*              InTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMonsterStaticData               InMonsterStaticData                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AWeapon_Player_Sagiri_C::K2_CanSwallowTarget(class AHTAbilityCharacter* InTarget, const struct FMonsterStaticData& InMonsterStaticData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weapon_Player_Sagiri_C", "K2_CanSwallowTarget");

	Params::Weapon_Player_Sagiri_C_K2_CanSwallowTarget Parms{};

	Parms.InTarget = InTarget;
	Parms.InMonsterStaticData = std::move(InMonsterStaticData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
