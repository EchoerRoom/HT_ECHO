#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIExtension

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum UIExtension.EUIExtensionAction
// NumValues: 0x0003
enum class EUIExtensionAction : uint8
{
	Added                                    = 0,
	Removed                                  = 1,
	EUIExtensionAction_MAX                   = 2,
};

// Enum UIExtension.EUIExtensionPointMatch
// NumValues: 0x0003
enum class EUIExtensionPointMatch : uint8
{
	ExactMatch                               = 0,
	PartialMatch                             = 1,
	EUIExtensionPointMatch_MAX               = 2,
};

// ScriptStruct UIExtension.UIExtensionHandle
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FUIExtensionHandle final
{
public:
	uint8                                         Pad_2A72[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UIExtension.UIExtensionRequest
// 0x0070 (0x0070 - 0x0000)
struct FUIExtensionRequest final
{
public:
	struct FUIExtensionHandle                     ExtensionHandle;                                   // 0x0000(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ExtensionPointTag;                                 // 0x0018(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x0020(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A73[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Data;                                              // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        SoftObj;                                           // 0x0030(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ContextObject;                                     // 0x0050(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasCallback;                                       // 0x0058(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A74[0x17];                                    // 0x0059(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UIExtension.UIExtensionPointHandle
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FUIExtensionPointHandle final
{
public:
	uint8                                         Pad_2A75[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
