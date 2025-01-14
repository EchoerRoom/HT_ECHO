#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MotionTrajectory

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct MotionTrajectory.MotionTrajectorySettings
// 0x0004 (0x0004 - 0x0000)
struct FMotionTrajectorySettings final
{
public:
	float                                         Seconds;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MotionTrajectory.TrajectorySamplingData
// 0x0020 (0x0020 - 0x0000)
struct FTrajectorySamplingData final
{
public:
	float                                         HistoryLengthSeconds;                              // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HistorySamplesPerSecond;                           // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PredictionLengthSeconds;                           // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PredictionSamplesPerSecond;                        // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31B1[0x10];                                    // 0x0010(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MotionTrajectory.CharacterTrajectoryData
// 0x01E0 (0x01E0 - 0x0000)
struct alignas(0x10) FCharacterTrajectoryData final
{
public:
	float                                         RotateTowardsMovementSpeed;                        // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxControllerYawRate;                              // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BendVelocityTowardsAcceleration;                   // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSpeedRemappingCurve;                           // 0x000C(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31B2[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     SpeedRemappingCurve;                               // 0x0010(0x0088)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                          bUseAccelerationRemappingCurve;                    // 0x0098(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31B3[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     AccelerationRemappingCurve;                        // 0x00A0(0x0088)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                         Pad_31B4[0xB8];                                    // 0x0128(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

