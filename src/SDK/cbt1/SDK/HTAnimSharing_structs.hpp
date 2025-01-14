#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HTAnimSharing

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct HTAnimSharing.HTAnimationSharingInstanceData
// 0x0050 (0x0050 - 0x0000)
struct FHTAnimationSharingInstanceData final
{
public:
	TMap<class USkeletalMeshComponent*, uint32>   CompMap;                                           // 0x0000(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct HTAnimSharing.HTAnimationSharingStateInfor
// 0x0030 (0x0030 - 0x0000)
struct FHTAnimationSharingStateInfor final
{
public:
	uint32                                        PreState;                                          // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        CurState;                                          // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsInit;                                           // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31E9[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 PreSkeletalMeshComponent;                          // 0x0010(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 CurSkeletalMeshComponent;                          // 0x0018(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 TransitionSkeletalMeshComponent;                   // 0x0020(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 AdditiveSkeletalMeshComponent;                     // 0x0028(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct HTAnimSharing.HTAnimationSharingStateEnum
// 0x0018 (0x0018 - 0x0000)
struct FHTAnimationSharingStateEnum final
{
public:
	uint32                                        State;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31EA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Describe;                                          // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct HTAnimSharing.HTAnimationSharingSetup
// 0x0020 (0x0020 - 0x0000)
struct FHTAnimationSharingSetup final
{
public:
	class UAnimSequence*                          AnimSequence;                                      // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHTAnimSharingStateInstance> AnimInstanceClass;                                 // 0x0008(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendTime;                                         // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                        NumRandomizedInstances;                            // 0x0014(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                       Enabled;                                           // 0x0018(0x0001)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_31EB[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct HTAnimSharing.HTAnimationSharingState
// 0x0038 (0x0038 - 0x0000)
struct FHTAnimationSharingState final
{
public:
	struct FHTAnimationSharingStateEnum           StateEnum;                                         // 0x0000(0x0018)(Edit, NativeAccessSpecifierPublic)
	struct FHTAnimationSharingSetup               AnimationSharingSkeletonSetup;                     // 0x0018(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct HTAnimSharing.HTAnimationSharingSkeletonSetup
// 0x0038 (0x0038 - 0x0000)
struct FHTAnimationSharingSkeletonSetup final
{
public:
	class USkeleton*                              Skeleton;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x0008(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHTAnimSharingTransitionInstance> AnimSharingTransitionInstance;                     // 0x0010(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHTAnimSharingAdditiveInstance> AnimSharingAdditiveInstance;                       // 0x0018(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHTAnimationSharingStateProcessor> AnimationSharingStateProcessor;                    // 0x0020(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHTAnimationSharingState>       HTAnimationSharingStates;                          // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct HTAnimSharing.TickHTAnimationSharingFunction
// 0x0008 (0x0038 - 0x0030)
struct FTickHTAnimationSharingFunction final : public FTickFunction
{
public:
	uint8                                         Pad_31EC[0x8];                                     // 0x0030(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

