#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDec_IsWithinAttackRange

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDec_IsWithinAttackRange.BTDec_IsWithinAttackRange_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTDec_IsWithinAttackRange_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTDec_IsWithinAttackRange_C">();
	}
	static class UBTDec_IsWithinAttackRange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDec_IsWithinAttackRange_C>();
	}
};

}

