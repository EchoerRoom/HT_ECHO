#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MotionWarping

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MotionWarping_structs.hpp"


namespace SDK::Params
{

// Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
// 0x0020 (0x0020 - 0x0000)
struct AnimNotifyState_MotionWarping_AddRootMotionModifier final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UAnimSequenceBase*                Animation;                                         // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartTime;                                         // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndTime;                                           // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                    ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
// 0x0010 (0x0010 - 0x0000)
struct AnimNotifyState_MotionWarping_OnRootMotionModifierActivate final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                    Modifier;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
// 0x0010 (0x0010 - 0x0000)
struct AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                    Modifier;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
// 0x0010 (0x0010 - 0x0000)
struct AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                    Modifier;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
// 0x0010 (0x0010 - 0x0000)
struct AnimNotifyState_MotionWarping_OnWarpBegin final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                    Modifier;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
// 0x0010 (0x0010 - 0x0000)
struct AnimNotifyState_MotionWarping_OnWarpEnd final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                    Modifier;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
// 0x0010 (0x0010 - 0x0000)
struct AnimNotifyState_MotionWarping_OnWarpUpdate final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                    Modifier;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
// 0x0070 (0x0070 - 0x0000)
struct MotionWarpingUtilities_ExtractRootMotionFromAnimation final
{
public:
	const class UAnimSequenceBase*                Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartTime;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndTime;                                           // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             ReturnValue;                                       // 0x0010(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
// 0x0020 (0x0020 - 0x0000)
struct MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation final
{
public:
	const class UAnimSequenceBase*                Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   WarpTargetName;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMotionWarpingWindowData>       OutWindows;                                        // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
// 0x0018 (0x0018 - 0x0000)
struct MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation final
{
public:
	const class UAnimSequenceBase*                Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMotionWarpingWindowData>       OutWindows;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
// 0x0080 (0x0080 - 0x0000)
struct MotionWarpingComponent_AddOrUpdateWarpTarget final
{
public:
	struct FMotionWarpingTarget                   WarpTarget;                                        // 0x0000(0x0080)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
// 0x0050 (0x0050 - 0x0000)
struct MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent final
{
public:
	class FName                                   WarpTargetName;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class USceneComponent*                  Component;                                         // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFollowComponent;                                  // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_220C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LocationOffset;                                    // 0x0020(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0038(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
// 0x0020 (0x0020 - 0x0000)
struct MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation final
{
public:
	class FName                                   WarpTargetName;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TargetLocation;                                    // 0x0008(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
// 0x0038 (0x0038 - 0x0000)
struct MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation final
{
public:
	class FName                                   WarpTargetName;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TargetLocation;                                    // 0x0008(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               TargetRotation;                                    // 0x0020(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
// 0x0070 (0x0070 - 0x0000)
struct MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform final
{
public:
	class FName                                   WarpTargetName;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_220D[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             TargetTransform;                                   // 0x0010(0x0060)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingComponent.RemoveAllWarpTargets
// 0x0004 (0x0004 - 0x0000)
struct MotionWarpingComponent_RemoveAllWarpTargets final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget
// 0x000C (0x000C - 0x0000)
struct MotionWarpingComponent_RemoveWarpTarget final
{
public:
	class FName                                   WarpTargetName;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
// 0x0038 (0x0038 - 0x0000)
struct RootMotionModifier_Scale_AddRootMotionModifierScale final
{
public:
	class UMotionWarpingComponent*                InMotionWarpingComp;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UAnimSequenceBase*                InAnimation;                                       // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InStartTime;                                       // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InEndTime;                                         // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InScale;                                           // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier_Scale*              ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
// 0x00B0 (0x00B0 - 0x0000)
struct RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp final
{
public:
	class UMotionWarpingComponent*                InMotionWarpingComp;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UAnimSequenceBase*                InAnimation;                                       // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InStartTime;                                       // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InEndTime;                                         // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InWarpTargetName;                                  // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWarpPointAnimProvider                        InWarpPointAnimProvider;                           // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2217[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InWarpPointAnimTransform;                          // 0x0030(0x0060)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InWarpPointAnimBoneName;                           // 0x0090(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInWarpTranslation;                                // 0x0098(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInIgnoreZAxis;                                    // 0x0099(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInWarpRotation;                                   // 0x009A(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMotionWarpRotationType                       InRotationType;                                    // 0x009B(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMotionWarpRotationMethod                     InRotationMethod;                                  // 0x009C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2218[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InWarpRotationTimeMultiplier;                      // 0x00A0(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InWarpMaxRotationRate;                             // 0x00A4(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier_SkewWarp*           ReturnValue;                                       // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
