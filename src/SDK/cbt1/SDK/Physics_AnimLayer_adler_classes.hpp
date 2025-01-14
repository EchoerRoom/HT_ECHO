#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Physics_AnimLayer_adler

#include "Basic.hpp"

#include "KawaiiPhysics_structs.hpp"
#include "Physics_AnimLayer_adler_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "HTGame_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Physics_AnimLayer_adler.Physics_AnimLayer_adler_C
// 0x5A70 (0x5E00 - 0x0390)
class UPhysics_AnimLayer_adler_C final : public UHTPlayerPhysicsAnimLayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Physics_AnimLayer_adler::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0398(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_5823[0x6];                                     // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03A0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03A8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x03B0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x03D0(0x00B8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0488(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x04A8(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0528(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0550(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x05D0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0618(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0640(0x0028)()
	uint8                                         Pad_5824[0x8];                                     // 0x0668(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_9;                     // 0x0670(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_8;                     // 0x0EC0(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_7;                     // 0x1710(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_6;                     // 0x1F60(0x0850)(ContainsInstancedReference)
	struct FHTSkirtControlAnimNode                HTAnimGraphNode_SkirtControl;                      // 0x27B0(0x0200)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x29B0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x29D0(0x0020)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_5;                     // 0x29F0(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_4;                     // 0x3240(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_3;                     // 0x3A90(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0x42E0(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x4B30(0x0850)(ContainsInstancedReference)
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x5380(0x0850)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5BD0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x5BF0(0x0020)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x5C10(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x5CD8(0x0048)()
	struct FKawaiiPhysicsSettings                 Physics_Settings;                                  // 0x5D20(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Dummy_Bone_Length;                                 // 0x5D38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x5D3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKawaiiPhysicsSettings                 Physics_Settings_0;                                // 0x5D40(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Dummy_Bone_Length_0;                               // 0x5D58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5825[0x4];                                     // 0x5D5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Return_Value_Rotation;                             // 0x5D60(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FKawaiiPhysicsSettings                 Physics_Settings_1;                                // 0x5D78(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 Physics_Settings_2;                                // 0x5D90(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 Physics_Settings_3;                                // 0x5DA8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 Physics_Settings_4;                                // 0x5DC0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Alpha_0;                                           // 0x5DD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Dummy_Bone_Length_1;                               // 0x5DDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKawaiiPhysicsSettings                 Physics_Settings_5;                                // 0x5DE0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Dummy_Bone_Length_2;                               // 0x5DF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_Physics_AnimLayer_adler(int32 EntryPoint);
	void PhysicsAnimInterface(const struct FPoseLink& InPose, struct FPoseLink* Param_PhysicsAnimInterface);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Physics_AnimLayer_adler_C">();
	}
	static class UPhysics_AnimLayer_adler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysics_AnimLayer_adler_C>();
	}
};

}

