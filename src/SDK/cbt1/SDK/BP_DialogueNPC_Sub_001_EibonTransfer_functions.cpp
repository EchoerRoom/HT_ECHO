#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DialogueNPC_Sub_001_EibonTransfer

#include "Basic.hpp"

#include "BP_DialogueNPC_Sub_001_EibonTransfer_classes.hpp"
#include "BP_DialogueNPC_Sub_001_EibonTransfer_parameters.hpp"


namespace SDK
{

// Function BP_DialogueNPC_Sub_001_EibonTransfer.BP_DialogueNPC_Sub_001_EibonTransfer_C.ExecuteUbergraph_BP_DialogueNPC_Sub_001_EibonTransfer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueNPC_Sub_001_EibonTransfer_C::ExecuteUbergraph_BP_DialogueNPC_Sub_001_EibonTransfer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogueNPC_Sub_001_EibonTransfer_C", "ExecuteUbergraph_BP_DialogueNPC_Sub_001_EibonTransfer");

	Params::BP_DialogueNPC_Sub_001_EibonTransfer_C_ExecuteUbergraph_BP_DialogueNPC_Sub_001_EibonTransfer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DialogueNPC_Sub_001_EibonTransfer.BP_DialogueNPC_Sub_001_EibonTransfer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DialogueNPC_Sub_001_EibonTransfer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogueNPC_Sub_001_EibonTransfer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DialogueNPC_Sub_001_EibonTransfer.BP_DialogueNPC_Sub_001_EibonTransfer_C.ThrowOut
// (BlueprintCallable, BlueprintEvent)

void ABP_DialogueNPC_Sub_001_EibonTransfer_C::ThrowOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogueNPC_Sub_001_EibonTransfer_C", "ThrowOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DialogueNPC_Sub_001_EibonTransfer.BP_DialogueNPC_Sub_001_EibonTransfer_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_DialogueNPC_Sub_001_EibonTransfer_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogueNPC_Sub_001_EibonTransfer_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DialogueNPC_Sub_001_EibonTransfer.BP_DialogueNPC_Sub_001_EibonTransfer_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_DialogueNPC_Sub_001_EibonTransfer_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogueNPC_Sub_001_EibonTransfer_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
