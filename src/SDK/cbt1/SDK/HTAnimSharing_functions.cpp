#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HTAnimSharing

#include "Basic.hpp"

#include "HTAnimSharing_classes.hpp"
#include "HTAnimSharing_parameters.hpp"


namespace SDK
{

// Function HTAnimSharing.HTAnimationSharingManager.GetAdditiveAnimMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           PlayActor                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*           ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UHTAnimationSharingManager::GetAdditiveAnimMeshComponent(class AActor* PlayActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HTAnimationSharingManager", "GetAdditiveAnimMeshComponent");

	Params::HTAnimationSharingManager_GetAdditiveAnimMeshComponent Parms{};

	Parms.PlayActor = PlayActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HTAnimSharing.HTAnimationSharingManager.HTAdditivePlayAnimMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           PlayActor                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                     AnimMontage                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InPlayRate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             StartSectionName                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHTAnimationSharingManager::HTAdditivePlayAnimMontage(class AActor* PlayActor, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HTAnimationSharingManager", "HTAdditivePlayAnimMontage");

	Params::HTAnimationSharingManager_HTAdditivePlayAnimMontage Parms{};

	Parms.PlayActor = PlayActor;
	Parms.AnimMontage = AnimMontage;
	Parms.InPlayRate = InPlayRate;
	Parms.StartSectionName = StartSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HTAnimSharing.HTAnimationSharingManager.HTGetActorAdditiveAnimInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                           PlayActor                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHTAnimSharingAdditiveInstance*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHTAnimSharingAdditiveInstance* UHTAnimationSharingManager::HTGetActorAdditiveAnimInstance(class AActor* PlayActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HTAnimationSharingManager", "HTGetActorAdditiveAnimInstance");

	Params::HTAnimationSharingManager_HTGetActorAdditiveAnimInstance Parms{};

	Parms.PlayActor = PlayActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HTAnimSharing.HTAnimationSharingManager.HTGetAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           InActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHTAnimationSharingManager*       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHTAnimationSharingManager* UHTAnimationSharingManager::HTGetAnimationSharingManager(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HTAnimationSharingManager", "HTGetAnimationSharingManager");

	Params::HTAnimationSharingManager_HTGetAnimationSharingManager Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HTAnimSharing.HTAnimationSharingManager.HTHasAdditivePlayAnimMontageByGroup
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                           PlayActor                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             InGroupName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimMontage* UHTAnimationSharingManager::HTHasAdditivePlayAnimMontageByGroup(class AActor* PlayActor, class FName InGroupName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HTAnimationSharingManager", "HTHasAdditivePlayAnimMontageByGroup");

	Params::HTAnimationSharingManager_HTHasAdditivePlayAnimMontageByGroup Parms{};

	Parms.PlayActor = PlayActor;
	Parms.InGroupName = InGroupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HTAnimSharing.HTAnimationSharingManager.HTSharingPlayAnimMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           PlayActor                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                     AnimMontage                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InPlayRate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             StartSectionName                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHTAnimationSharingManager::HTSharingPlayAnimMontage(class AActor* PlayActor, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HTAnimationSharingManager", "HTSharingPlayAnimMontage");

	Params::HTAnimationSharingManager_HTSharingPlayAnimMontage Parms{};

	Parms.PlayActor = PlayActor;
	Parms.AnimMontage = AnimMontage;
	Parms.InPlayRate = InPlayRate;
	Parms.StartSectionName = StartSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HTAnimSharing.HTAnimationSharingManager.AdditivePlayAnimMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           PlayActor                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                     AnimMontage                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InPlayRate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             StartSectionName                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHTAnimationSharingManager::AdditivePlayAnimMontage(class AActor* PlayActor, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HTAnimationSharingManager", "AdditivePlayAnimMontage");

	Params::HTAnimationSharingManager_AdditivePlayAnimMontage Parms{};

	Parms.PlayActor = PlayActor;
	Parms.AnimMontage = AnimMontage;
	Parms.InPlayRate = InPlayRate;
	Parms.StartSectionName = StartSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HTAnimSharing.HTAnimationSharingManager.RegisterActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           InActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTAnimationSharingManager::RegisterActor(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HTAnimationSharingManager", "RegisterActor");

	Params::HTAnimationSharingManager_RegisterActor Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HTAnimSharing.HTAnimationSharingManager.SharingPlayAnimMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           PlayActor                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                     AnimMontage                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InPlayRate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             StartSectionName                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHTAnimationSharingManager::SharingPlayAnimMontage(class AActor* PlayActor, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HTAnimationSharingManager", "SharingPlayAnimMontage");

	Params::HTAnimationSharingManager_SharingPlayAnimMontage Parms{};

	Parms.PlayActor = PlayActor;
	Parms.AnimMontage = AnimMontage;
	Parms.InPlayRate = InPlayRate;
	Parms.StartSectionName = StartSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HTAnimSharing.HTAnimationSharingManager.UnRegisterActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           InActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTAnimationSharingManager::UnRegisterActor(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HTAnimationSharingManager", "UnRegisterActor");

	Params::HTAnimationSharingManager_UnRegisterActor Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HTAnimSharing.HTAnimationSharingStateProcessor.ProcessActorState
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                                   OutState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           InActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   CurrentState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OnDemandState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bShouldProcess                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHTAnimationSharingStateProcessor::ProcessActorState(int32* OutState, class AActor* InActor, int32 CurrentState, int32 OnDemandState, bool* bShouldProcess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HTAnimationSharingStateProcessor", "ProcessActorState");

	Params::HTAnimationSharingStateProcessor_ProcessActorState Parms{};

	Parms.InActor = InActor;
	Parms.CurrentState = CurrentState;
	Parms.OnDemandState = OnDemandState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutState != nullptr)
		*OutState = Parms.OutState;

	if (bShouldProcess != nullptr)
		*bShouldProcess = Parms.bShouldProcess;
}


// Function HTAnimSharing.HTAnimationSharingSubsystem.PlayAnimMontage
// (Final, Native, Static, Public)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                     AnimMontage                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InPlayRate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             StartSectionName                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHTAnimationSharingSubsystem::PlayAnimMontage(class UAnimInstance* AnimInstance, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HTAnimationSharingSubsystem", "PlayAnimMontage");

	Params::HTAnimationSharingSubsystem_PlayAnimMontage Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimMontage = AnimMontage;
	Parms.InPlayRate = InPlayRate;
	Parms.StartSectionName = StartSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HTAnimSharing.HTAnimSharingInterface.OnSetActorLeaderComp
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           TargetComp                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IHTAnimSharingInterface::OnSetActorLeaderComp(class USkeletalMeshComponent* TargetComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HTAnimSharingInterface", "OnSetActorLeaderComp");

	Params::HTAnimSharingInterface_OnSetActorLeaderComp Parms{};

	Parms.TargetComp = TargetComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HTAnimSharing.HTAnimSharingStateInstance.GetInstancedActors
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AActor*>                   Actors                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UHTAnimSharingStateInstance::GetInstancedActors(TArray<class AActor*>* Actors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HTAnimSharingStateInstance", "GetInstancedActors");

	Params::HTAnimSharingStateInstance_GetInstancedActors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Actors != nullptr)
		*Actors = std::move(Parms.Actors);
}

}
