#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayBehaviorSmartObjectsModule

#include "Basic.hpp"

#include "GameplayBehaviorSmartObjectsModule_classes.hpp"
#include "GameplayBehaviorSmartObjectsModule_parameters.hpp"


namespace SDK
{

// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.MoveToAndUseSmartObjectWithGameplayBehavior
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*                    Controller                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle          ClaimHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    bLockAILogic                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESmartObjectClaimPriority               ClaimPriority                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayBehaviorSmartObject*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayBehaviorSmartObject* UAITask_UseGameplayBehaviorSmartObject::MoveToAndUseSmartObjectWithGameplayBehavior(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic, ESmartObjectClaimPriority ClaimPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AITask_UseGameplayBehaviorSmartObject", "MoveToAndUseSmartObjectWithGameplayBehavior");

	Params::AITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior Parms{};

	Parms.Controller = Controller;
	Parms.ClaimHandle = std::move(ClaimHandle);
	Parms.bLockAILogic = bLockAILogic;
	Parms.ClaimPriority = ClaimPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseGameplayBehaviorSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*                    Controller                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           SmartObjectActor                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectComponent*            SmartObjectComponent                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLockAILogic                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayBehaviorSmartObject*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayBehaviorSmartObject* UAITask_UseGameplayBehaviorSmartObject::UseGameplayBehaviorSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AITask_UseGameplayBehaviorSmartObject", "UseGameplayBehaviorSmartObject");

	Params::AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject Parms{};

	Parms.Controller = Controller;
	Parms.SmartObjectActor = SmartObjectActor;
	Parms.SmartObjectComponent = SmartObjectComponent;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseSmartObjectWithGameplayBehavior
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*                    Controller                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle          ClaimHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    bLockAILogic                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESmartObjectClaimPriority               ClaimPriority                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayBehaviorSmartObject*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayBehaviorSmartObject* UAITask_UseGameplayBehaviorSmartObject::UseSmartObjectWithGameplayBehavior(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic, ESmartObjectClaimPriority ClaimPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AITask_UseGameplayBehaviorSmartObject", "UseSmartObjectWithGameplayBehavior");

	Params::AITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior Parms{};

	Parms.Controller = Controller;
	Parms.ClaimHandle = std::move(ClaimHandle);
	Parms.bLockAILogic = bLockAILogic;
	Parms.ClaimPriority = ClaimPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.UseGameplayBehaviorSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Avatar                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           SmartObject                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::UseGameplayBehaviorSmartObject(class AActor* Avatar, class AActor* SmartObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayBehaviorSmartObjectsBlueprintFunctionLibrary", "UseGameplayBehaviorSmartObject");

	Params::GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject Parms{};

	Parms.Avatar = Avatar;
	Parms.SmartObject = SmartObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
