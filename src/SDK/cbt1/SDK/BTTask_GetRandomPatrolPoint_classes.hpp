#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_GetRandomPatrolPoint

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_GetRandomPatrolPoint.BTTask_GetRandomPatrolPoint_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTTask_GetRandomPatrolPoint_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 MoveToLocation;                                    // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTTask_GetRandomPatrolPoint(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_GetRandomPatrolPoint_C">();
	}
	static class UBTTask_GetRandomPatrolPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_GetRandomPatrolPoint_C>();
	}
};

}
