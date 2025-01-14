#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VehicleAnimBP_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct VehicleAnimBP_Base.VehicleAnimBP_Base_C.AnimBlueprintGeneratedConstantData
// 0x0997 (0x0998 - 0x0001)
struct VehicleAnimBP_Base::FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_5A75[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_232;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A76[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_233;                                // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_234;                                  // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_235;                                // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_236;                                // 0x0021(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A77[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_237;                               // 0x0028(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_238;                                // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_239;                                // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_240;                                // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_241;                                // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_242;                                 // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_243;                                // 0x005C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_244;                                 // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_245;                              // 0x0068(0x002C)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_246;                                // 0x0094(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_247;                                 // 0x009C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_248;                                // 0x00A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_249;                                // 0x00A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_250;                                 // 0x00B0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A78[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_251;                              // 0x00B8(0x0020)(BlueprintVisible, NoDestructor)
	bool                                          __BoolProperty_252;                                // 0x00D8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A79[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_253;                               // 0x00DC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_254;                               // 0x00E0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_255;                                // 0x00E4(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_256;                                // 0x00E5(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_257;                                // 0x00E6(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A7A[0x1];                                     // 0x00E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_258;                                // 0x00E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00F0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0170(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x0188(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_WheelController;                     // 0x01B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_MeshRefPose_1;                       // 0x01E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                                // 0x0218(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                      // 0x0248(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;                     // 0x0278(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                       // 0x02A8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LayeredBoneBlend;                    // 0x02D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;                     // 0x0308(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_1;             // 0x0338(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_MeshRefPose;                         // 0x0368(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;               // 0x0398(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_13;                 // 0x03C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_12;                 // 0x03F8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_11;                 // 0x0428(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_10;                 // 0x0458(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_9;                  // 0x0488(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_8;                  // 0x04B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_5;                    // 0x04E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_7;                       // 0x0518(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_4;                    // 0x0548(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_6;                       // 0x0578(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;                    // 0x05A8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_5;                       // 0x05D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_4;                       // 0x0608(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine_1;                      // 0x0638(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_7;                  // 0x0668(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_6;                  // 0x0698(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_5;                  // 0x06C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_4;                  // 0x06F8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_3;                  // 0x0728(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;                  // 0x0758(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;                  // 0x0788(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;                    // 0x07B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;                    // 0x07E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_3;                       // 0x0818(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;                    // 0x0848(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;                       // 0x0878(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;                      // 0x08A8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;                       // 0x08D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;                         // 0x0908(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;                        // 0x0938(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_RotationOffsetBlendSpace;            // 0x0968(0x0030)()
};

// ScriptStruct VehicleAnimBP_Base.VehicleAnimBP_Base_C.AnimBlueprintGeneratedMutableData
// 0x000F (0x0010 - 0x0001)
struct VehicleAnimBP_Base::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A7B[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_0;                                 // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_1;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_2;                                 // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

