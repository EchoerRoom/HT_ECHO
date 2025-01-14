#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PWCrash

#include "Basic.hpp"


namespace SDK::Params
{

// Function PWCrash.PWCrashBlueprintLibrary.InitPWCrashSDK
// 0x0028 (0x0028 - 0x0000)
struct PWCrashBlueprintLibrary_InitPWCrashSDK final
{
public:
	TDelegate<void(const class FString& ResultCode, const class FString& ErrMsg)> OnBInitCompleteDelegate;                           // 0x0000(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Domain;                                            // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3273[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function PWCrash.PWCrashBlueprintLibrary.ReportExtraFile
// 0x0010 (0x0010 - 0x0000)
struct PWCrashBlueprintLibrary_ReportExtraFile final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PWCrash.PWCrashBlueprintLibrary.ReportExtraInfo
// 0x0010 (0x0010 - 0x0000)
struct PWCrashBlueprintLibrary_ReportExtraInfo final
{
public:
	class FString                                 ExtraInfo;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PWCrash.PWCrashBlueprintLibrary.ReportExtraInfoKV
// 0x0018 (0x0018 - 0x0000)
struct PWCrashBlueprintLibrary_ReportExtraInfoKV final
{
public:
	class FString                                 ExtraInfoKV;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3274[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function PWCrash.PWCrashBlueprintLibrary.TestSetHotfixVersion
// 0x0010 (0x0010 - 0x0000)
struct PWCrashBlueprintLibrary_TestSetHotfixVersion final
{
public:
	class FString                                 HotfixVersion;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PWCrash.PWCrashBlueprintLibrary.TestSetRoleID
// 0x0010 (0x0010 - 0x0000)
struct PWCrashBlueprintLibrary_TestSetRoleID final
{
public:
	class FString                                 RoleId;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PWCrash.PWCrashBlueprintLibrary.TestSetTagVersion
// 0x0010 (0x0010 - 0x0000)
struct PWCrashBlueprintLibrary_TestSetTagVersion final
{
public:
	class FString                                 TagVersion;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PWCrash.PWCrashBlueprintLibrary.TestSetUserID
// 0x0010 (0x0010 - 0x0000)
struct PWCrashBlueprintLibrary_TestSetUserID final
{
public:
	class FString                                 UserId;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PWCrash.PWCrashBlueprintLibrary.BInitCompleteDelegate__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct PWCrashBlueprintLibrary_BInitCompleteDelegate__DelegateSignature final
{
public:
	class FString                                 ResultCode;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ErrMsg;                                            // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

