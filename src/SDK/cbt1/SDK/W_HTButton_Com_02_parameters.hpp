#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HTButton_Com_02

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.BothIconAndText
// 0x0030 (0x0030 - 0x0000)
struct W_HTButton_Com_02_C_BothIconAndText final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DC[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Right_ImplicitCast;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.BP_GetNormalPhoto
// 0x0018 (0x0018 - 0x0000)
struct W_HTButton_Com_02_C_BP_GetNormalPhoto final
{
public:
	class UTexture2D*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue_1; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.BP_SetIcon
// 0x0028 (0x0028 - 0x0000)
struct W_HTButton_Com_02_C_BP_SetIcon final
{
public:
	TSoftObjectPtr<class UTexture2D>              InTexture;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.BP_SetNormalImage
// 0x00D0 (0x00D0 - 0x0000)
struct W_HTButton_Com_02_C_BP_SetNormalImage final
{
public:
	struct FSlateBrush                            Img;                                               // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.BP_SetNormalImageByTexture2D
// 0x0008 (0x0008 - 0x0000)
struct W_HTButton_Com_02_C_BP_SetNormalImageByTexture2D final
{
public:
	class UTexture2D*                             NormalImg;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.EvaluateNamedSlotVisibility
// 0x0004 (0x0004 - 0x0000)
struct W_HTButton_Com_02_C_EvaluateNamedSlotVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.ExecuteUbergraph_W_HTButton_Com_02
// 0x01F0 (0x01F0 - 0x0000)
struct W_HTButton_Com_02_C_ExecuteUbergraph_W_HTButton_Com_02 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue_1;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_InText;                               // 0x0028(0x0010)(ConstParm)
	class UTexture2D*                             K2Node_Event_normalImg;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_Event_Img;                                  // 0x0040(0x00D0)(ConstParm)
	struct FSlateBrush                            CallFunc_GetButtonBorderBrush_OutBrush;            // 0x0110(0x00D0)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.GetButtonBorderBrush
// 0x00E0 (0x00E0 - 0x0000)
struct W_HTButton_Com_02_C_GetButtonBorderBrush final
{
public:
	struct FSlateBrush                            OutBrush;                                          // 0x0000(0x00D0)(Parm, OutParm)
	class UObject*                                CallFunc_GetBrushResource_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.GetPressProgress
// 0x0008 (0x0008 - 0x0000)
struct W_HTButton_Com_02_C_GetPressProgress final
{
public:
	double                                        Progress;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_HTButton_Com_02_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.ResetMaterials
// 0x0018 (0x0018 - 0x0000)
struct W_HTButton_Com_02_C_ResetMaterials final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.SetBrush
// 0x01C0 (0x01C0 - 0x0000)
struct W_HTButton_Com_02_C_SetBrush final
{
public:
	struct FSlateBrush                            InBrush;                                           // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                            CurBrush;                                          // 0x00D0(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UMaterialInterface*                     CallFunc_GetBrushResourceAsMaterial_ReturnValue;   // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.SetIcon_Down
// 0x0001 (0x0001 - 0x0000)
struct W_HTButton_Com_02_C_SetIcon_Down final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.SetIcon_Glow
// 0x0001 (0x0001 - 0x0000)
struct W_HTButton_Com_02_C_SetIcon_Glow final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.SetMaterialInstanceScalarParam
// 0x0020 (0x0020 - 0x0000)
struct W_HTButton_Com_02_C_SetMaterialInstanceScalarParam final
{
public:
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Value;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.UpdateButtonStyles
// 0x01A0 (0x01A0 - 0x0000)
struct W_HTButton_Com_02_C_UpdateButtonStyles final
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
	uint8                                         Pad_57DF[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetButtonBorderBrush_OutBrush;            // 0x0010(0x00D0)()
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E0[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcherSlot*                    CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue;     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E1[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x0138(0x0038)(NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E2[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast;                // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast_1;           // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast_1;              // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast_1;             // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Right_ImplicitCast;              // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;              // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.UpdateButtonText
// 0x0010 (0x0010 - 0x0000)
struct W_HTButton_Com_02_C_UpdateButtonText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_HTButton_Com_02.W_HTButton_Com_02_C.UpdateTextStyle
// 0x0001 (0x0001 - 0x0000)
struct W_HTButton_Com_02_C_UpdateTextStyle final
{
public:
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
