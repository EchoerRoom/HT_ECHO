#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonGame

#include "Basic.hpp"


namespace SDK
{

// Enum CommonGame.ECommonMessagingResult
// NumValues: 0x0006
enum class ECommonMessagingResult : uint8
{
	Confirmed                                = 0,
	Declined                                 = 1,
	Cancelled                                = 2,
	Killed                                   = 3,
	Unknown                                  = 4,
	ECommonMessagingResult_MAX               = 5,
};

// Enum CommonGame.ECommonKeybindForcedHoldStatus
// NumValues: 0x0004
enum class ECommonKeybindForcedHoldStatus : uint8
{
	NoForcedHold                             = 0,
	ForcedHold                               = 1,
	NeverShowHold                            = 2,
	ECommonKeybindForcedHoldStatus_MAX       = 3,
};

// Enum CommonGame.ELocalMultiplayerInteractionMode
// NumValues: 0x0004
enum class ELocalMultiplayerInteractionMode : uint8
{
	PrimaryOnly                              = 0,
	SingleToggle                             = 1,
	Simultaneous                             = 2,
	ELocalMultiplayerInteractionMode_MAX     = 3,
};

// ScriptStruct CommonGame.MeasuredText
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FMeasuredText final
{
public:
	uint8                                         Pad_2A5A[0x28];                                    // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct CommonGame.RootViewportLayoutInfo
// 0x0018 (0x0018 - 0x0000)
struct FRootViewportLayoutInfo final
{
public:
	class ULocalPlayer*                           LocalPlayer;                                       // 0x0000(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimaryGameLayout*                     RootLayout;                                        // 0x0008(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAddedToViewport;                                  // 0x0010(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A5B[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct CommonGame.ConfirmationDialogAction
// 0x0018 (0x0018 - 0x0000)
struct FConfirmationDialogAction final
{
public:
	ECommonMessagingResult                        Result;                                            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A5C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OptionalDisplayText;                               // 0x0008(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}
