#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_MassCrowdAnimSharingAdditiveInstance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimationSharing_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_MassCrowdAnimSharingAdditiveInstance.ABP_MassCrowdAnimSharingAdditiveInstance_C
// 0x02B0 (0x0630 - 0x0380)
class UABP_MassCrowdAnimSharingAdditiveInstance_C final : public UAnimSharingAdditiveInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0388(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0390(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0398(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x03B8(0x0158)(ContainsInstancedReference)
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x0510(0x00D0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x05E0(0x0048)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_MassCrowdAnimSharingAdditiveInstance(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_MassCrowdAnimSharingAdditiveInstance_C">();
	}
	static class UABP_MassCrowdAnimSharingAdditiveInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_MassCrowdAnimSharingAdditiveInstance_C>();
	}
};

}
