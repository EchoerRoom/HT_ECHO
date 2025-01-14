#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HTAnimSharingTransitionInstanceBaseBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct HTAnimSharingTransitionInstanceBaseBP.HTAnimSharingTransitionInstanceBaseBP_C.AnimBlueprintGeneratedConstantData
// 0x02C7 (0x02C8 - 0x0001)
struct HTAnimSharingTransitionInstanceBaseBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_5A50[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_28;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_29;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A51[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_30;                                 // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_31;                                   // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_32;                                 // 0x0028(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_33;                                 // 0x0029(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_34;                                 // 0x002A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A52[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_35;                               // 0x0030(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0050(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00D0(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x00E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;                     // 0x0118(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_1;                    // 0x0148(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                      // 0x0178(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_2;                     // 0x01A8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;                     // 0x01D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LayeredBoneBlend;                    // 0x0208(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                       // 0x0238(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyPoseFromMesh_1;                  // 0x0268(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyPoseFromMesh;                    // 0x0298(0x0030)()
};

// ScriptStruct HTAnimSharingTransitionInstanceBaseBP.HTAnimSharingTransitionInstanceBaseBP_C.AnimBlueprintGeneratedMutableData
// 0x001F (0x0020 - 0x0001)
struct HTAnimSharingTransitionInstanceBaseBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_5A53[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty;                                   // 0x0008(0x0010)(BlueprintVisible, EditFixedSize)
	bool                                          __BoolProperty_0;                                  // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

