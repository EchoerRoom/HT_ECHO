#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HTAimAnimLayerBase

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "HTAimAnimLayerBase_structs.hpp"
#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass HTAimAnimLayerBase.HTAimAnimLayerBase_C
// 0x05D0 (0x09B0 - 0x03E0)
class UHTAimAnimLayerBase_C : public UHTAimAnimLayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct HTAimAnimLayerBase::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x03E8(0x0010)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03F8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0400(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0408(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0428(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x04A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x04D0(0x0028)()
	struct FAnimNode_MultiWayBlend                AnimGraphNode_MultiWayBlend;                       // 0x04F8(0x0050)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0548(0x0070)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x05B8(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0628(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0648(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0690(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x06B0(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0778(0x0028)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x07A0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x07C0(0x00B8)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0878(0x0118)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0990(0x0020)()

public:
	void AimLayer(struct FPoseLink* Param_AimLayer);
	void AimOffset(const struct FPoseLink& InPose, struct FPoseLink* Param_AimOffset);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HTAimAnimLayerBase_AnimGraphNode_MultiWayBlend_6D4FE9FC4340227D1561EDB5E6BF6598();
	void ExecuteUbergraph_HTAimAnimLayerBase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HTAimAnimLayerBase_C">();
	}
	static class UHTAimAnimLayerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAimAnimLayerBase_C>();
	}
};

}

