#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalizableMessageBlueprint

#include "Basic.hpp"

#include "LocalizableMessage_structs.hpp"


namespace SDK::Params
{

// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Conv_LocalizableMessageToText
// 0x0048 (0x0048 - 0x0000)
struct LocalizableMessageLibrary_Conv_LocalizableMessageToText final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocalizableMessage                    Message;                                           // 0x0008(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                   ReturnValue;                                       // 0x0038(0x0010)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.IsEmpty_LocalizableMessage
// 0x0038 (0x0038 - 0x0000)
struct LocalizableMessageLibrary_IsEmpty_LocalizableMessage final
{
public:
	struct FLocalizableMessage                    Message;                                           // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_20DA[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Reset_LocalizableMessage
// 0x0030 (0x0030 - 0x0000)
struct LocalizableMessageLibrary_Reset_LocalizableMessage final
{
public:
	struct FLocalizableMessage                    Message;                                           // 0x0000(0x0030)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
