#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Physics_AnimLayer_skia

#include "Basic.hpp"

#include "KawaiiPhysics_structs.hpp"
#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"
#include "Physics_AnimLayer_skia_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Physics_AnimLayer_skia.Physics_AnimLayer_skia_C
// 0x4770 (0x4B00 - 0x0390)
class UPhysics_AnimLayer_skia_C final : public UHTPlayerPhysicsAnimLayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Physics_AnimLayer_skia::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0398(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_52CA[0x6];                                     // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03A0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03A8(0x0008)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_7;                     // 0x03B0(0x0850)(ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0C00(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0C80(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0CA8(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0D28(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0D70(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0D98(0x0028)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0DC0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0DE0(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0E98(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0EB8(0x0020)()
	uint8                                         Pad_52CB[0x8];                                     // 0x0ED8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_6;                     // 0x0EE0(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_5;                     // 0x1730(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_4;                     // 0x1F80(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_3;                     // 0x27D0(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0x3020(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x3870(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x40C0(0x0850)(ContainsInstancedReference)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x4910(0x0020)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x4930(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x49F8(0x0048)()
	struct FKawaiiPhysicsSettings                 Physics_Settings;                                  // 0x4A40(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Dummy_Bone_Length;                                 // 0x4A58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x4A5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKawaiiPhysicsSettings                 Physics_Settings_0;                                // 0x4A60(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Dummy_Bone_Length_0;                               // 0x4A78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52CC[0x4];                                     // 0x4A7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Return_Value_Rotation;                             // 0x4A80(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FKawaiiPhysicsSettings                 Physics_Settings_1;                                // 0x4A98(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 Physics_Settings_2;                                // 0x4AB0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 Physics_Settings_3;                                // 0x4AC8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 Physics_Settings_4;                                // 0x4AE0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Alpha_0;                                           // 0x4AF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_Physics_AnimLayer_skia(int32 EntryPoint);
	void PhysicsAnimInterface(const struct FPoseLink& InPose, struct FPoseLink* Param_PhysicsAnimInterface);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Physics_AnimLayer_skia_C">();
	}
	static class UPhysics_AnimLayer_skia_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysics_AnimLayer_skia_C>();
	}
};

}
