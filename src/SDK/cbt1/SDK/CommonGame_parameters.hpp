#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonGame

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CommonGame_structs.hpp"
#include "CommonUser_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function CommonGame.AsyncAction_CreateWidgetAsync.CreateWidgetAsync
// 0x0048 (0x0048 - 0x0000)
struct AsyncAction_CreateWidgetAsync_CreateWidgetAsync final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   UserWidgetSoftClass;                               // 0x0008(0x0028)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                      OwningPlayer;                                      // 0x0030(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuspendInputUntilComplete;                        // 0x0038(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A5E[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_CreateWidgetAsync*         ReturnValue;                                       // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.AsyncAction_PushContentToLayerForPlayer.PushContentToLayerForPlayer
// 0x0048 (0x0048 - 0x0000)
struct AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer final
{
public:
	class APlayerController*                      OwningPlayer;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   WidgetClass;                                       // 0x0008(0x0028)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           LayerName;                                         // 0x0030(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuspendInputUntilComplete;                        // 0x0038(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A60[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_PushContentToLayerForPlayer* ReturnValue;                                       // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationCustom
// 0x0018 (0x0018 - 0x0000)
struct AsyncAction_ShowConfirmation_ShowConfirmationCustom final
{
public:
	class UObject*                                InWorldContextObject;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonGameDialogDescriptor*            Param_Descriptor;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncAction_ShowConfirmation*          ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationOkCancel
// 0x0030 (0x0030 - 0x0000)
struct AsyncAction_ShowConfirmation_ShowConfirmationOkCancel final
{
public:
	class UObject*                                InWorldContextObject;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x0008(0x0010)(Parm, NativeAccessSpecifierPublic)
	class FText                                   Message;                                           // 0x0018(0x0010)(Parm, NativeAccessSpecifierPublic)
	class UAsyncAction_ShowConfirmation*          ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationYesNo
// 0x0030 (0x0030 - 0x0000)
struct AsyncAction_ShowConfirmation_ShowConfirmationYesNo final
{
public:
	class UObject*                                InWorldContextObject;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x0008(0x0010)(Parm, NativeAccessSpecifierPublic)
	class FText                                   Message;                                           // 0x0018(0x0010)(Parm, NativeAccessSpecifierPublic)
	class UAsyncAction_ShowConfirmation*          ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonGameInstance.HandlePrivilegeChanged
// 0x0010 (0x0010 - 0x0000)
struct CommonGameInstance_HandlePrivilegeChanged final
{
public:
	const class UCommonUserInfo*                  UserInfo;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonUserPrivilege                          Privilege;                                         // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonUserAvailability                       OldAvailability;                                   // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonUserAvailability                       NewAvailability;                                   // 0x000A(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A62[0x5];                                     // 0x000B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CommonGame.CommonGameInstance.HandlerUserInitialized
// 0x0028 (0x0028 - 0x0000)
struct CommonGameInstance_HandlerUserInitialized final
{
public:
	const class UCommonUserInfo*                  UserInfo;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A63[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Error;                                             // 0x0010(0x0010)(Parm, NativeAccessSpecifierPublic)
	ECommonUserPrivilege                          RequestedPrivilege;                                // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonUserOnlineContext                      OnlineContext;                                     // 0x0021(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A64[0x6];                                     // 0x0022(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CommonGame.CommonGameInstance.HandleSystemMessage
// 0x0028 (0x0028 - 0x0000)
struct CommonGameInstance_HandleSystemMessage final
{
public:
	struct FGameplayTag                           MessageType;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x0008(0x0010)(Parm, NativeAccessSpecifierPublic)
	class FText                                   Message;                                           // 0x0018(0x0010)(Parm, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.SetAxisScale
// 0x0004 (0x0004 - 0x0000)
struct CommonPlayerInputKey_SetAxisScale final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.SetBoundAction
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerInputKey_SetBoundAction final
{
public:
	class FName                                   NewBoundAction;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.SetBoundKey
// 0x0018 (0x0018 - 0x0000)
struct CommonPlayerInputKey_SetBoundKey final
{
public:
	struct FKey                                   NewBoundAction;                                    // 0x0000(0x0018)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.SetForcedHoldKeybind
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_SetForcedHoldKeybind final
{
public:
	bool                                          InForcedHoldKeybind;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.SetForcedHoldKeybindStatus
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_SetForcedHoldKeybindStatus final
{
public:
	ECommonKeybindForcedHoldStatus                InForcedHoldKeybindStatus;                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.SetPresetNameOverride
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerInputKey_SetPresetNameOverride final
{
public:
	class FName                                   NewValue;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.SetShowProgressCountDown
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_SetShowProgressCountDown final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.StartHoldProgress
// 0x000C (0x000C - 0x0000)
struct CommonPlayerInputKey_StartHoldProgress final
{
public:
	class FName                                   HoldActionName;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HoldDuration;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.StopHoldProgress
// 0x000C (0x000C - 0x0000)
struct CommonPlayerInputKey_StopHoldProgress final
{
public:
	class FName                                   HoldActionName;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCompletedSuccessfully;                            // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A6C[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CommonGame.CommonPlayerInputKey.IsBoundKeyValid
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_IsBoundKeyValid final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonPlayerInputKey.IsHoldKeybind
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_IsHoldKeybind final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonUIExtensions.GetLocalPlayerFromController
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_GetLocalPlayerFromController final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalPlayer*                           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonUIExtensions.GetOwningPlayerInputType
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_GetOwningPlayerInputType final
{
public:
	const class UUserWidget*                      WidgetContextObject;                               // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputType                              ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A6D[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingGamepad
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_IsOwningPlayerUsingGamepad final
{
public:
	const class UUserWidget*                      WidgetContextObject;                               // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A6E[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingTouch
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_IsOwningPlayerUsingTouch final
{
public:
	const class UUserWidget*                      WidgetContextObject;                               // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A6F[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CommonGame.CommonUIExtensions.PopContentFromLayer
// 0x0008 (0x0008 - 0x0000)
struct CommonUIExtensions_PopContentFromLayer final
{
public:
	class UCommonActivatableWidget*               ActivatableWidget;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonUIExtensions.PushContentToLayer_ForPlayer
// 0x0020 (0x0020 - 0x0000)
struct CommonUIExtensions_PushContentToLayer_ForPlayer final
{
public:
	const class ULocalPlayer*                     LocalPlayer;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           LayerName;                                         // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonActivatableWidget>   WidgetClass;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidget*               ReturnValue;                                       // 0x0018(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonUIExtensions.PushStreamedContentToLayer_ForPlayer
// 0x0038 (0x0038 - 0x0000)
struct CommonUIExtensions_PushStreamedContentToLayer_ForPlayer final
{
public:
	const class ULocalPlayer*                     LocalPlayer;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           LayerName;                                         // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   WidgetClass;                                       // 0x0010(0x0028)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonUIExtensions.ResumeInputForPlayer
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_ResumeInputForPlayer final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SuspendToken;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.CommonUIExtensions.SuspendInputForPlayer
// 0x0018 (0x0018 - 0x0000)
struct CommonUIExtensions_SuspendInputForPlayer final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SuspendReason;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonGame.PrimaryGameLayout.RegisterLayer
// 0x0010 (0x0010 - 0x0000)
struct PrimaryGameLayout_RegisterLayer final
{
public:
	struct FGameplayTag                           LayerTag;                                          // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidgetContainerBase*  LayerWidget;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
