#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HTButton

#include "Basic.hpp"

#include "W_HTButton_classes.hpp"
#include "W_HTButton_parameters.hpp"


namespace SDK
{

// Function W_HTButton.W_HTButton_C.BP_GetNormalPhoto
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UW_HTButton_C::BP_GetNormalPhoto()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_GetNormalPhoto");

	Params::W_HTButton_C_BP_GetNormalPhoto Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_HTButton.W_HTButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UW_HTButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UW_HTButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void UW_HTButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void UW_HTButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UW_HTButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.BP_OnPressed
// (Event, Protected, BlueprintEvent)

void UW_HTButton_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.BP_OnReleased
// (Event, Protected, BlueprintEvent)

void UW_HTButton_C::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_OnReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UW_HTButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UW_HTButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.BP_SetNormalImage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      Img                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_HTButton_C::BP_SetNormalImage(const struct FSlateBrush& Img)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_SetNormalImage");

	Params::W_HTButton_C_BP_SetNormalImage Parms{};

	Parms.Img = std::move(Img);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HTButton.W_HTButton_C.BP_SetNormalImageByTexture2D
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D*                       NormalImg                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HTButton_C::BP_SetNormalImageByTexture2D(class UTexture2D* NormalImg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "BP_SetNormalImageByTexture2D");

	Params::W_HTButton_C_BP_SetNormalImageByTexture2D Parms{};

	Parms.NormalImg = NormalImg;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HTButton.W_HTButton_C.EvaluateNamedSlotVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UW_HTButton_C::EvaluateNamedSlotVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "EvaluateNamedSlotVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.ExecuteUbergraph_W_HTButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HTButton_C::ExecuteUbergraph_W_HTButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "ExecuteUbergraph_W_HTButton");

	Params::W_HTButton_C_ExecuteUbergraph_W_HTButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HTButton.W_HTButton_C.Finished_D61E6B2E4C7C79D1B4BCF29E8E3B3418
// (BlueprintCallable, BlueprintEvent)

void UW_HTButton_C::Finished_D61E6B2E4C7C79D1B4BCF29E8E3B3418()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "Finished_D61E6B2E4C7C79D1B4BCF29E8E3B3418");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.GetPressProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Progress                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HTButton_C::GetPressProgress(double* Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "GetPressProgress");

	Params::W_HTButton_C_GetPressProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;
}


// Function W_HTButton.W_HTButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HTButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "PreConstruct");

	Params::W_HTButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HTButton.W_HTButton_C.ResetMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void UW_HTButton_C::ResetMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "ResetMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.SetBrush
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      InBrush                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                      CurBrush                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_HTButton_C::SetBrush(const struct FSlateBrush& InBrush, struct FSlateBrush& CurBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "SetBrush");

	Params::W_HTButton_C_SetBrush Parms{};

	Parms.InBrush = std::move(InBrush);
	Parms.CurBrush = std::move(CurBrush);

	UObject::ProcessEvent(Func, &Parms);

	CurBrush = std::move(Parms.CurBrush);
}


// Function W_HTButton.W_HTButton_C.UpdateButtonStyles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_HTButton_C::UpdateButtonStyles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "UpdateButtonStyles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_HTButton.W_HTButton_C.UpdateButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_HTButton_C::UpdateButtonText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "UpdateButtonText");

	Params::W_HTButton_C_UpdateButtonText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_HTButton.W_HTButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UW_HTButton_C::UpdateTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_HTButton_C", "UpdateTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}

}
