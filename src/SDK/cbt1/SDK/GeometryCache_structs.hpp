#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"

#include "Niagara_structs.hpp"


namespace SDK
{

// ScriptStruct GeometryCache.TrackRenderData
// 0x00C0 (0x00C0 - 0x0000)
struct alignas(0x10) FTrackRenderData final
{
public:
	uint8                                         Pad_2816[0xC0];                                    // 0x0000(0x00C0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FGeometryCacheMeshBatchInfo final
{
public:
	uint8                                         Pad_2817[0xC];                                     // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GeometryCache.GeometryCacheVertexInfo
// 0x0009 (0x0009 - 0x0000)
struct FGeometryCacheVertexInfo final
{
public:
	uint8                                         Pad_2818[0x9];                                     // 0x0000(0x0009)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GeometryCache.GeometryCacheMeshData
// 0x00C8 (0x00C8 - 0x0000)
struct alignas(0x08) FGeometryCacheMeshData final
{
public:
	uint8                                         Pad_2819[0xC8];                                    // 0x0000(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GeometryCache.NiagaraGeometryCacheMICOverride
// 0x0010 (0x0010 - 0x0000)
struct FNiagaraGeometryCacheMICOverride final
{
public:
	class UMaterialInterface*                     OriginalMaterial;                                  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*              ReplacementMaterial;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GeometryCache.NiagaraGeometryCacheReference
// 0x0048 (0x0048 - 0x0000)
struct FNiagaraGeometryCacheReference final
{
public:
	class UGeometryCache*                         GeometryCache;                                     // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding           GeometryCacheUserParamBinding;                     // 0x0008(0x0020)(Edit, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             OverrideMaterials;                                 // 0x0028(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraGeometryCacheMICOverride> MICOverrideMaterials;                              // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}
