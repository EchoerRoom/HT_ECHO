#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Player_Skia_ShadowAtk_Damage

#include "Basic.hpp"

#include "GE_Player_Skia_ShadowAtk_Damage_classes.hpp"
#include "GE_Player_Skia_ShadowAtk_Damage_parameters.hpp"


namespace SDK
{

// Function GE_Player_Skia_ShadowAtk_Damage.GE_Player_Skia_ShadowAtk_Damage_C.ExecuteUbergraph_GE_Player_Skia_ShadowAtk_Damage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGE_Player_Skia_ShadowAtk_Damage_C::ExecuteUbergraph_GE_Player_Skia_ShadowAtk_Damage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GE_Player_Skia_ShadowAtk_Damage_C", "ExecuteUbergraph_GE_Player_Skia_ShadowAtk_Damage");

	Params::GE_Player_Skia_ShadowAtk_Damage_C_ExecuteUbergraph_GE_Player_Skia_ShadowAtk_Damage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

