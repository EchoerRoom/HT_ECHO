#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Oceanology_Plugin

#include "Basic.hpp"


namespace SDK::Params
{

// Function Oceanology_Plugin.Oceanology_PluginBPLibrary.Oceanology_PluginSampleFunction
// 0x0008 (0x0008 - 0x0000)
struct Oceanology_PluginBPLibrary_Oceanology_PluginSampleFunction final
{
public:
	float                                         Param;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Oceanology_Plugin.QuadTree.Procedural
// 0x0018 (0x0018 - 0x0000)
struct QuadTree_Procedural final
{
public:
	class UHierarchicalInstancedStaticMeshComponent* HISMC;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GridSize;                                          // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GridTiles;                                         // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellSize;                                          // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C72[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Oceanology_Plugin.QuadTree.SetEditorTickEnabled
// 0x0001 (0x0001 - 0x0000)
struct QuadTree_SetEditorTickEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
