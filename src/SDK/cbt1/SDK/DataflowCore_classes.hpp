#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataflowCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DataflowCore_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class DataflowCore.DataflowSettings
// 0x00A8 (0x00E0 - 0x0038)
class UDataflowSettings final : public UDeveloperSettings
{
public:
	struct FLinearColor                           ArrayPinTypeColor;                                 // 0x0038(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ManagedArrayCollectionPinTypeColor;                // 0x0048(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           BoxPinTypeColor;                                   // 0x0058(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SpherePinTypeColor;                                // 0x0068(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FNodeColors>         NodeColorsMap;                                     // 0x0078(0x0050)(Edit, Config, NativeAccessSpecifierPublic)
	uint8                                         Pad_12CD[0x18];                                    // 0x00C8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowSettings">();
	}
	static class UDataflowSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowSettings>();
	}
};

}
