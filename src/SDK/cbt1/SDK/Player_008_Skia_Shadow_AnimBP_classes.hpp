#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Player_008_Skia_Shadow_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass player_008_Skia_Shadow_AnimBP.player_008_Skia_Shadow_AnimBP_C
// 0x0190 (0x0500 - 0x0370)
class UPlayer_008_Skia_Shadow_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_581A[0x8];                                     // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x03A8(0x0158)(ContainsInstancedReference)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_player_008_Skia_Shadow_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"player_008_Skia_Shadow_AnimBP_C">();
	}
	static class UPlayer_008_Skia_Shadow_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_008_Skia_Shadow_AnimBP_C>();
	}
};

}

