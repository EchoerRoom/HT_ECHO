#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MonsterFootIK_AnimLayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct MonsterFootIK_AnimLayer.MonsterFootIK_AnimLayer_C.AnimBlueprintGeneratedConstantData
// 0x0467 (0x0468 - 0x0001)
struct MonsterFootIK_AnimLayer::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_57A8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_52;                                 // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_53;                                   // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_54;                                 // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_55;                                 // 0x0019(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_56;                                 // 0x001A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57A9[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_57;                                // 0x0020(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_58;                                 // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_59;                                 // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_60;                               // 0x0040(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_61;                                 // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_62;                                 // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0070(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F0(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_6;                        // 0x0108(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_5;                        // 0x0138(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;               // 0x0168(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_4;                        // 0x0198(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_3;                        // 0x01C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_2;                        // 0x01F8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;                        // 0x0228(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;                          // 0x0258(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TwoBoneIK_1;                         // 0x0288(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TwoBoneIK;                           // 0x02B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;                     // 0x02E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;                     // 0x0318(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                      // 0x0348(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                       // 0x0378(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;               // 0x03A8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedInputPose;                     // 0x03D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root_1;                              // 0x0408(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x0438(0x0030)()
};

// ScriptStruct MonsterFootIK_AnimLayer.MonsterFootIK_AnimLayer_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct MonsterFootIK_AnimLayer::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

