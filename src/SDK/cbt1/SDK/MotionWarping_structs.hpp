#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MotionWarping

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum MotionWarping.ERootMotionModifierState
// NumValues: 0x0005
enum class ERootMotionModifierState : uint8
{
	Waiting                                  = 0,
	Active                                   = 1,
	MarkedForRemoval                         = 2,
	Disabled                                 = 3,
	ERootMotionModifierState_MAX             = 4,
};

// Enum MotionWarping.EMotionWarpRotationType
// NumValues: 0x0003
enum class EMotionWarpRotationType : uint8
{
	Default                                  = 0,
	Facing                                   = 1,
	EMotionWarpRotationType_MAX              = 2,
};

// Enum MotionWarping.EMotionWarpRotationMethod
// NumValues: 0x0004
enum class EMotionWarpRotationMethod : uint8
{
	Slerp                                    = 0,
	SlerpWithClampedRate                     = 1,
	ConstantRate                             = 2,
	EMotionWarpRotationMethod_MAX            = 3,
};

// Enum MotionWarping.EWarpPointAnimProvider
// NumValues: 0x0004
enum class EWarpPointAnimProvider : uint8
{
	None                                     = 0,
	Static                                   = 1,
	Bone                                     = 2,
	EWarpPointAnimProvider_MAX               = 3,
};

// ScriptStruct MotionWarping.MotionWarpingWindowData
// 0x0010 (0x0010 - 0x0000)
struct FMotionWarpingWindowData final
{
public:
	class UAnimNotifyState_MotionWarping*         AnimNotify;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartTime;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndTime;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MotionWarping.MotionWarpingUpdateContext
// 0x001C (0x001C - 0x0000)
struct FMotionWarpingUpdateContext final
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>       Animation;                                         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PreviousPosition;                                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentPosition;                                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeltaSeconds;                                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MotionWarping.MotionWarpingTarget
// 0x0080 (0x0080 - 0x0000)
struct FMotionWarpingTarget final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>         Component;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFollowComponent;                                  // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_220A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LocationOffset;                                    // 0x0050(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0068(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct MotionWarping.MotionDeltaTrack
// 0x0060 (0x0060 - 0x0000)
struct FMotionDeltaTrack final
{
public:
	TArray<struct FTransform>                     BoneTransformTrack;                                // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        DeltaTranslationTrack;                             // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                       DeltaRotationTrack;                                // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                TotalTranslation;                                  // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               TotalRotation;                                     // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct MotionWarping.MotionDeltaTrackContainer
// 0x0010 (0x0010 - 0x0000)
struct FMotionDeltaTrackContainer final
{
public:
	TArray<struct FMotionDeltaTrack>              Tracks;                                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}
