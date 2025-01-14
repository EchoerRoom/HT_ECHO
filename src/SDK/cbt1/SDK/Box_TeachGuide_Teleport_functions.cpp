#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Box_TeachGuide_Teleport

#include "Basic.hpp"

#include "Box_TeachGuide_Teleport_classes.hpp"
#include "Box_TeachGuide_Teleport_parameters.hpp"


namespace SDK
{

// Function Box_TeachGuide_Teleport.Box_TeachGuide_Teleport_C.BndEvt__Box_limitViewv_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABox_TeachGuide_Teleport_C::BndEvt__Box_limitViewv_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Box_TeachGuide_Teleport_C", "BndEvt__Box_limitViewv_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Box_TeachGuide_Teleport_C_BndEvt__Box_limitViewv_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Box_TeachGuide_Teleport.Box_TeachGuide_Teleport_C.ExecuteUbergraph_Box_TeachGuide_Teleport
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABox_TeachGuide_Teleport_C::ExecuteUbergraph_Box_TeachGuide_Teleport(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Box_TeachGuide_Teleport_C", "ExecuteUbergraph_Box_TeachGuide_Teleport");

	Params::Box_TeachGuide_Teleport_C_ExecuteUbergraph_Box_TeachGuide_Teleport Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Box_TeachGuide_Teleport.Box_TeachGuide_Teleport_C.ShowTips
// (BlueprintCallable, BlueprintEvent)

void ABox_TeachGuide_Teleport_C::ShowTips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Box_TeachGuide_Teleport_C", "ShowTips");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Box_TeachGuide_Teleport.Box_TeachGuide_Teleport_C.SpawnXiupa
// (BlueprintCallable, BlueprintEvent)

void ABox_TeachGuide_Teleport_C::SpawnXiupa()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Box_TeachGuide_Teleport_C", "SpawnXiupa");

	UObject::ProcessEvent(Func, nullptr);
}

}

