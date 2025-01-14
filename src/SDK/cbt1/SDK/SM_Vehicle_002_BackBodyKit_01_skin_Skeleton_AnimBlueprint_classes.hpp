#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SM_Vehicle_002_BackBodyKit_01_skin_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SM_Vehicle_002_BackBodyKit_01_skin_Skeleton_AnimBlueprint.SM_Vehicle_002_BackBodyKit_01_skin_Skeleton_AnimBlueprint_C
// 0x0070 (0x03E0 - 0x0370)
class USM_Vehicle_002_BackBodyKit_01_skin_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_6282[0x8];                                     // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_MeshSpaceRefPose             AnimGraphNode_MeshRefPose;                         // 0x03A8(0x0010)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x03B8(0x0020)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_SM_Vehicle_002_BackBodyKit_01_skin_Skeleton_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SM_Vehicle_002_BackBodyKit_01_skin_Skeleton_AnimBlueprint_C">();
	}
	static class USM_Vehicle_002_BackBodyKit_01_skin_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USM_Vehicle_002_BackBodyKit_01_skin_Skeleton_AnimBlueprint_C>();
	}
};

}

