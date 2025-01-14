#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImageCore

#include "Basic.hpp"

#include "ImageCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ImageCore.SharedImageConstRefBlueprintFns.GetHeight
// 0x0010 (0x0010 - 0x0000)
struct SharedImageConstRefBlueprintFns_GetHeight final
{
public:
	struct FSharedImageConstRefBlueprint          Image;                                             // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1219[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ImageCore.SharedImageConstRefBlueprintFns.GetPixelLinearColor
// 0x0038 (0x0038 - 0x0000)
struct SharedImageConstRefBlueprintFns_GetPixelLinearColor final
{
public:
	struct FSharedImageConstRefBlueprint          Image;                                             // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         X;                                                 // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Y;                                                 // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bValid;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_121A[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           FailureColor;                                      // 0x0014(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ReturnValue;                                       // 0x0024(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_121B[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ImageCore.SharedImageConstRefBlueprintFns.GetPixelValue
// 0x0030 (0x0030 - 0x0000)
struct SharedImageConstRefBlueprintFns_GetPixelValue final
{
public:
	struct FSharedImageConstRefBlueprint          Image;                                             // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         X;                                                 // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Y;                                                 // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bValid;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_121C[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4f                              ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImageCore.SharedImageConstRefBlueprintFns.GetSize
// 0x0010 (0x0010 - 0x0000)
struct SharedImageConstRefBlueprintFns_GetSize final
{
public:
	struct FSharedImageConstRefBlueprint          Image;                                             // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector2f                              ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImageCore.SharedImageConstRefBlueprintFns.GetWidth
// 0x0010 (0x0010 - 0x0000)
struct SharedImageConstRefBlueprintFns_GetWidth final
{
public:
	struct FSharedImageConstRefBlueprint          Image;                                             // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_121D[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ImageCore.SharedImageConstRefBlueprintFns.IsValid
// 0x0010 (0x0010 - 0x0000)
struct SharedImageConstRefBlueprintFns_IsValid final
{
public:
	struct FSharedImageConstRefBlueprint          Image;                                             // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_121E[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

