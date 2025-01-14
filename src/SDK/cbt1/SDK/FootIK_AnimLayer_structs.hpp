#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FootIK_AnimLayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct FootIK_AnimLayer.FootIK_AnimLayer_C.AnimBlueprintGeneratedConstantData
// 0x0E77 (0x0E78 - 0x0001)
struct FootIK_AnimLayer::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_5793[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_276;                               // 0x0008(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<float>                                 __ArrayProperty_277;                               // 0x0018(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<float>                                 __ArrayProperty_278;                               // 0x0028(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                 __ArrayProperty_279;                               // 0x0038(0x0010)(BlueprintVisible)
	TArray<float>                                 __ArrayProperty_280;                               // 0x0048(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_281;                                // 0x0058(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_282;                                // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_283;                                // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_284;                                  // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_285;                                // 0x0078(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_286;                                // 0x0079(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_287;                                // 0x007A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5794[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_288;                               // 0x0080(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_289;                              // 0x0090(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_290;                                // 0x00B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_291;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00C0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0140(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LegIK_2;                             // 0x0158(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_FootPlacement_2;                     // 0x0188(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_4;             // 0x01B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LegIK_1;                             // 0x01E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_21;                    // 0x0218(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_11;                  // 0x0248(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LegIK;                               // 0x0278(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_7;                    // 0x02A8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_20;                    // 0x02D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_19;                    // 0x0308(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_18;                    // 0x0338(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_17;                    // 0x0368(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_6;                    // 0x0398(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_16;                    // 0x03C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_10;                  // 0x03F8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_9;                   // 0x0428(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_15;                    // 0x0458(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_14;                    // 0x0488(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_8;                   // 0x04B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_13;                    // 0x04E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_3;             // 0x0518(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_4;                        // 0x0548(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_3;                        // 0x0578(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ControlRig;                          // 0x05A8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_2;                        // 0x05D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;                        // 0x0608(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_12;                    // 0x0638(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TwoBoneIK_1;                         // 0x0668(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TwoBoneIK;                           // 0x0698(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_2;             // 0x06C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_11;                    // 0x06F8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_4;             // 0x0728(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_3;             // 0x0758(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_FootPlacement_1;                     // 0x0788(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_5;                    // 0x07B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_7;                   // 0x07E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_10;                    // 0x0818(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_4;                    // 0x0848(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_2;             // 0x0878(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_9;                     // 0x08A8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_6;                   // 0x08D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_5;                   // 0x0908(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_3;                    // 0x0938(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_2;                    // 0x0968(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_8;                     // 0x0998(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;                          // 0x09C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_1;             // 0x09F8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_7;                     // 0x0A28(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_1;             // 0x0A58(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_6;                     // 0x0A88(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_5;                     // 0x0AB8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_4;                   // 0x0AE8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;               // 0x0B18(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_4;                     // 0x0B48(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_3;                   // 0x0B78(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_1;                    // 0x0BA8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_3;                     // 0x0BD8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_FootPlacement;                       // 0x0C08(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByEnum;                     // 0x0C38(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;               // 0x0C68(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_2;                   // 0x0C98(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_2;                     // 0x0CC8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                      // 0x0CF8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;                     // 0x0D28(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedInputPose;                     // 0x0D58(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root_1;                              // 0x0D88(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;                   // 0x0DB8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                       // 0x0DE8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;                     // 0x0E18(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x0E48(0x0030)()
};

// ScriptStruct FootIK_AnimLayer.FootIK_AnimLayer_C.AnimBlueprintGeneratedMutableData
// 0x000D (0x000E - 0x0001)
struct FootIK_AnimLayer::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x0003(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_2;                                  // 0x0004(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_3;                                  // 0x0005(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_4;                                  // 0x0006(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_5;                                  // 0x0007(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_6;                                  // 0x0008(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_7;                                  // 0x0009(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         __ByteProperty_8;                                  // 0x000A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_9;                                  // 0x000B(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_10;                                 // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_11;                                 // 0x000D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

