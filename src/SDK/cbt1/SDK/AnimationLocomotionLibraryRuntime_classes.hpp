#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationLocomotionLibraryRuntime

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimCharacterMovementLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FVector PredictGroundMovementPivotLocation(const struct FVector& Acceleration, const struct FVector& Velocity, float GroundFriction);
	static struct FVector PredictGroundMovementStopLocation(const struct FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimCharacterMovementLibrary">();
	}
	static class UAnimCharacterMovementLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCharacterMovementLibrary>();
	}
};

// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimDistanceMatchingLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FSequenceEvaluatorReference AdvanceTimeByDistanceMatching(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, class FName DistanceCurveName, const struct FVector2D& PlayRateClamp);
	static struct FSequenceEvaluatorReference DistanceMatchToTarget(const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, class FName DistanceCurveName);
	static struct FSequencePlayerReference SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, const struct FVector2D& PlayRateClamp);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimDistanceMatchingLibrary">();
	}
	static class UAnimDistanceMatchingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimDistanceMatchingLibrary>();
	}
};

}
