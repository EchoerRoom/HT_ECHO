#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HTButton_MainFormFunction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "HTGame_structs.hpp"
#include "HTGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_HTButton_MainFormFunction.W_HTButton_MainFormFunction_C
// 0x03D0 (0x1C00 - 0x1830)
class UW_HTButton_MainFormFunction_C final : public UHTUI_Button
{
public:
	uint8                                         Pad_6249[0x8];                                     // 0x1828(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1830(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHovered;                                         // 0x1838(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                ButtonBorder;                                      // 0x1840(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ButtonTextBlock;                                   // 0x1848(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x1850(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x1858(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Glow;                                         // 0x1860(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               IconOvr;                                           // 0x1868(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Yz;                                          // 0x1870(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_38;                                      // 0x1878(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ring;                                              // 0x1880(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TextIconSwitch;                                    // 0x1888(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TextOvr;                                           // 0x1890(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextShadow;                                        // 0x1898(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_NewGuideEffect_C*                   UI_NewGuideEffect_282;                             // 0x18A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        TextLeftRightPadding;                              // 0x18A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HitTestPadding_X;                                  // 0x18B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HitTestPadding_Y;                                  // 0x18B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PressProgress;                                     // 0x18C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         Font;                                              // 0x18C8(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                         Pad_624A[0x8];                                     // 0x1928(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            ButtonBorderBrush;                                 // 0x1930(0x00D0)(Edit, BlueprintVisible)
	struct FSlateBrush                            IconBrush;                                         // 0x1A00(0x00D0)(Edit, BlueprintVisible)
	ETextTransformPolicy                          TextCase;                                          // 0x1AD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FlipIconXDimension;                                // 0x1AD1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisabled;                                        // 0x1AD2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseImageOverlays;                                  // 0x1AD3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseScaleChangeSpacers;                             // 0x1AD4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseIconOverride;                                   // 0x1AD5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          InputHorzAlignment;                                // 0x1AD6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            InputVertAlignment;                                // 0x1AD7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                InputPadding;                                      // 0x1AD8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              ShadowOffset;                                      // 0x1AE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ShadowColorAndOpacity;                             // 0x1AF8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TextStyle;                                         // 0x1B08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          UseYzBrush;                                        // 0x1B10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_624B[0xF];                                     // 0x1B11(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            YzBrush;                                           // 0x1B20(0x00D0)(Edit, BlueprintVisible)
	TArray<struct FStaticGuideWidgetInfo>         In_Guide_Infos;                                    // 0x1BF0(0x0010)(Edit, BlueprintVisible)

public:
	class UTexture2D* BP_GetNormalPhoto();
	void BP_OnDeselected();
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnHovered();
	void BP_OnPressed();
	void BP_OnReleased();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void BP_SetNormalImage(const struct FSlateBrush& Img);
	void BP_SetNormalImageByTexture2D(class UTexture2D* NormalImg);
	void ExecuteUbergraph_W_HTButton_MainFormFunction(int32 EntryPoint);
	void Finished_3D86D50940A5AB08C922A6BCB18DA1F1();
	void GetPressProgress(double* Progress);
	void PreConstruct(bool IsDesignTime);
	void ResetMaterials();
	void SetBrush(const struct FSlateBrush& InBrush, struct FSlateBrush& CurBrush);
	void UpdateButtonStyles();
	void UpdateButtonText(const class FText& InText);
	void UpdateTextStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_HTButton_MainFormFunction_C">();
	}
	static class UW_HTButton_MainFormFunction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_HTButton_MainFormFunction_C>();
	}
};

}
