#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TalkBubble_Base

#include "Basic.hpp"

#include "BP_TalkBubble_Base_classes.hpp"
#include "BP_TalkBubble_Base_parameters.hpp"


namespace SDK
{

// Function BP_TalkBubble_Base.BP_TalkBubble_Base_C.BndEvt__BP_TalkBubble_Base_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TalkBubble_Base_C::BndEvt__BP_TalkBubble_Base_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkBubble_Base_C", "BndEvt__BP_TalkBubble_Base_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_TalkBubble_Base_C_BndEvt__BP_TalkBubble_Base_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkBubble_Base.BP_TalkBubble_Base_C.BndEvt__trinitybubble_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_TalkBubble_Base_C::BndEvt__trinitybubble_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkBubble_Base_C", "BndEvt__trinitybubble_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_TalkBubble_Base_C_BndEvt__trinitybubble_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkBubble_Base.BP_TalkBubble_Base_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHTSimpleSceneActor*              SelfActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESimpleNPCSpecialState                  InSpecialState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TalkBubble_Base_C::CustomEvent_0(class AHTSimpleSceneActor* SelfActor, ESimpleNPCSpecialState InSpecialState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkBubble_Base_C", "CustomEvent_0");

	Params::BP_TalkBubble_Base_C_CustomEvent_0 Parms{};

	Parms.SelfActor = SelfActor;
	Parms.InSpecialState = InSpecialState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkBubble_Base.BP_TalkBubble_Base_C.ExecuteUbergraph_BP_TalkBubble_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TalkBubble_Base_C::ExecuteUbergraph_BP_TalkBubble_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkBubble_Base_C", "ExecuteUbergraph_BP_TalkBubble_Base");

	Params::BP_TalkBubble_Base_C_ExecuteUbergraph_BP_TalkBubble_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkBubble_Base.BP_TalkBubble_Base_C.GetConfigedRelatedSimpleSceneActors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AHTSimpleSceneActor*>      ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class AHTSimpleSceneActor*> ABP_TalkBubble_Base_C::GetConfigedRelatedSimpleSceneActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkBubble_Base_C", "GetConfigedRelatedSimpleSceneActors");

	Params::BP_TalkBubble_Base_C_GetConfigedRelatedSimpleSceneActors Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_TalkBubble_Base.BP_TalkBubble_Base_C.GetRelatedNpc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AHTSimpleSceneActor*>      Npcs                                                   (Parm, OutParm)

void ABP_TalkBubble_Base_C::GetRelatedNpc(bool* bSuccess, TArray<class AHTSimpleSceneActor*>* Npcs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkBubble_Base_C", "GetRelatedNpc");

	Params::BP_TalkBubble_Base_C_GetRelatedNpc Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Npcs != nullptr)
		*Npcs = std::move(Parms.Npcs);
}


// Function BP_TalkBubble_Base.BP_TalkBubble_Base_C.setlocation
// (BlueprintCallable, BlueprintEvent)

void ABP_TalkBubble_Base_C::Setlocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkBubble_Base_C", "setlocation");

	UObject::ProcessEvent(Func, nullptr);
}

}
