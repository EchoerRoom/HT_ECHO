#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_IdleStateReachedGoal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_IdleStateReachedGoal.BTTask_IdleStateReachedGoal_C
// 0x0008 (0x00B0 - 0x00A8)
class UBTTask_IdleStateReachedGoal_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BTTask_IdleStateReachedGoal(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_IdleStateReachedGoal_C">();
	}
	static class UBTTask_IdleStateReachedGoal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_IdleStateReachedGoal_C>();
	}
};

}

