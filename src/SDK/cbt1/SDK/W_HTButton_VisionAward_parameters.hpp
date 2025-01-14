#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HTButton_VisionAward

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.BothIconAndText
// 0x0028 (0x0028 - 0x0000)
struct W_HTButton_VisionAward_C_BothIconAndText final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Right_ImplicitCast;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.BP_GetNormalPhoto
// 0x0018 (0x0018 - 0x0000)
struct W_HTButton_VisionAward_C_BP_GetNormalPhoto final
{
public:
	class UTexture2D*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue_1; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.BP_SetIcon
// 0x0028 (0x0028 - 0x0000)
struct W_HTButton_VisionAward_C_BP_SetIcon final
{
public:
	TSoftObjectPtr<class UTexture2D>              InTexture;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.BP_SetNormalImage
// 0x00D0 (0x00D0 - 0x0000)
struct W_HTButton_VisionAward_C_BP_SetNormalImage final
{
public:
	struct FSlateBrush                            Img;                                               // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.BP_SetNormalImageByTexture2D
// 0x0008 (0x0008 - 0x0000)
struct W_HTButton_VisionAward_C_BP_SetNormalImageByTexture2D final
{
public:
	class UTexture2D*                             NormalImg;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.EvaluateNamedSlotVisibility
// 0x0004 (0x0004 - 0x0000)
struct W_HTButton_VisionAward_C_EvaluateNamedSlotVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.ExecuteUbergraph_W_HTButton_VisionAward
// 0x02A0 (0x02A0 - 0x0000)
struct W_HTButton_VisionAward_C_ExecuteUbergraph_W_HTButton_VisionAward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60CB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60CC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_3;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60CD[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Temp_object_Variable_4;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Temp_object_Variable_5;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60CE[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue_1;     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default;                             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_InText;                               // 0x0090(0x0010)(ConstParm)
	class USoundBase*                             K2Node_Select_Default_1;                           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Event_normalImg;                            // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_Event_Img;                                  // 0x00B0(0x00D0)(ConstParm)
	bool                                          CallFunc_IsGamepadInputType_ReturnValue;           // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60CF[0xF];                                     // 0x0181(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetButtonBorderBrush_OutBrush;            // 0x0190(0x00D0)()
	class UWidgetAnimation*                       K2Node_Select_Default_2;                           // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D0[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x0278(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.GetButtonBorderBrush
// 0x00E0 (0x00E0 - 0x0000)
struct W_HTButton_VisionAward_C_GetButtonBorderBrush final
{
public:
	struct FSlateBrush                            OutBrush;                                          // 0x0000(0x00D0)(Parm, OutParm)
	class UObject*                                CallFunc_GetBrushResource_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.GetPressProgress
// 0x0008 (0x0008 - 0x0000)
struct W_HTButton_VisionAward_C_GetPressProgress final
{
public:
	double                                        Progress;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_HTButton_VisionAward_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.ResetMaterials
// 0x0018 (0x0018 - 0x0000)
struct W_HTButton_VisionAward_C_ResetMaterials final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.SetBrush
// 0x01C0 (0x01C0 - 0x0000)
struct W_HTButton_VisionAward_C_SetBrush final
{
public:
	struct FSlateBrush                            InBrush;                                           // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                            CurBrush;                                          // 0x00D0(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UMaterialInterface*                     CallFunc_GetBrushResourceAsMaterial_ReturnValue;   // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.SetMaterialInstanceScalarParam
// 0x0020 (0x0020 - 0x0000)
struct W_HTButton_VisionAward_C_SetMaterialInstanceScalarParam final
{
public:
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Value;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D1[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.UpdateButtonStyles
// 0x01A0 (0x01A0 - 0x0000)
struct W_HTButton_VisionAward_C_UpdateButtonStyles final
{
public:
	float                                         Temp_real_Variable;                                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D2[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetButtonBorderBrush_OutBrush;            // 0x0010(0x00D0)()
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D3[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcherSlot*                    CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue;     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D4[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x0138(0x0038)(NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D5[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast;                // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast_1;           // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast_1;              // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast_1;             // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Right_ImplicitCast;              // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;              // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.UpdateButtonText
// 0x0010 (0x0010 - 0x0000)
struct W_HTButton_VisionAward_C_UpdateButtonText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_HTButton_VisionAward.W_HTButton_VisionAward_C.UpdateTextStyle
// 0x0001 (0x0001 - 0x0000)
struct W_HTButton_VisionAward_C_UpdateTextStyle final
{
public:
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

