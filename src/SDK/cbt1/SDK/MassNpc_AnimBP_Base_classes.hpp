#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassNpc_AnimBP_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_structs.hpp"
#include "HTGame_classes.hpp"
#include "MassNpc_AnimBP_Base_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "AnimationWarpingRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MassNpc_AnimBP_Base.MassNpc_AnimBP_Base_C
// 0x2120 (0x27C0 - 0x06A0)
class UMassNpc_AnimBP_Base_C : public UCrowdCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct MassNpc_AnimBP_Base::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x06A8(0x002C)(HasGetValueTypeHash)
	uint8                                         Pad_6235[0x4];                                     // 0x06D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x06D8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x06E0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x06E8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0708(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x07C0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x07E0(0x00B8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x0898(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0960(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x0980(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x09A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x09D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x09F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0A20(0x0028)()
	struct FHTAnimNode_GetRootSpeed               HTGetRootSpeedGraphNode_1;                         // 0x0A48(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0A90(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0AB8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0AE0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0B08(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0B30(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0B58(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0BC8(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0BE8(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0C58(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x0C78(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0D40(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0D60(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0D88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0DB0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0DD8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0E00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0E28(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0E50(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0E98(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0EB8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0F00(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0F20(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0F68(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0F88(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7;                              // 0x1050(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1098(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x10B8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_8;                    // 0x1180(0x0080)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x1200(0x0118)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_7;                    // 0x1318(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_6;                              // 0x1398(0x0048)()
	struct FHTAnimNode_GetRootSpeed               HTGetRootSpeedGraphNode;                           // 0x13E0(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x1428(0x00F0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_6;                    // 0x1518(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5;                              // 0x1598(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_5;                    // 0x15E0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_18;                    // 0x1660(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x1688(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x16D0(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x1718(0x00F0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x1808(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_17;                    // 0x1888(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x18B0(0x0048)()
	uint8                                         Pad_6236[0x8];                                     // 0x18F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x1900(0x0440)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x1D40(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1D88(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1DD0(0x00F0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x1EC0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_16;                    // 0x1F40(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x1F68(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_15;                    // 0x1FB0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_14;                    // 0x1FD8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x2000(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x2028(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x2050(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x2078(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x20C0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x2140(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x2168(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x2190(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x21B8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x21E0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x2228(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x2250(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x2298(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x22C0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x2340(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x2368(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x2390(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x23D8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x2400(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x2448(0x0028)()
	struct FAnimNode_OrientationWarping           AnimGraphNode_OrientationWarping;                  // 0x2470(0x0220)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x2690(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x26D8(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2758(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2780(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x27A0(0x0020)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintLinkedAnimationLayersInitialized();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MassNpc_AnimBP_Base_AnimGraphNode_TransitionResult_2B3819A54B362E71F38385864CC5FBAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MassNpc_AnimBP_Base_AnimGraphNode_TransitionResult_8942676846E49165307EE097A7B59E23();
	void ExecuteUbergraph_MassNpc_AnimBP_Base(int32 EntryPoint);
	void FootIK(const struct FPoseLink& InPose, struct FPoseLink* Param_FootIK);
	void FootIKLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_FootIKLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MassNpc_AnimBP_Base_C">();
	}
	static class UMassNpc_AnimBP_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassNpc_AnimBP_Base_C>();
	}
};

}
