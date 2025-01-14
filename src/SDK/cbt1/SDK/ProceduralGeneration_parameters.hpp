#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralGeneration

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ProceduralGeneration_structs.hpp"


namespace SDK::Params
{

// Function ProceduralGeneration.PBG_DynamicStaticMeshComponent.CreateDynamicMeshToStaticMesh
// 0x0010 (0x0010 - 0x0000)
struct PBG_DynamicStaticMeshComponent_CreateDynamicMeshToStaticMesh final
{
public:
	TArray<struct FVector2D>                      PolygonVertices;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ProceduralGeneration.PBG_DynamicStaticMeshComponent.UpdateDynamicMeshToStaticMesh
// 0x0018 (0x0018 - 0x0000)
struct PBG_DynamicStaticMeshComponent_UpdateDynamicMeshToStaticMesh final
{
public:
	class USplineComponent*                       Spline;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TangentOffset;                                     // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SamplingOffset;                                    // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceOffset;                                    // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPBGDynamicMethod                             Method;                                            // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3035[0x3];                                     // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ProceduralGeneration.ProceduralBuildGenerationActor.ConvertDynamicMeshToStaticMesh
// 0x0020 (0x0020 - 0x0000)
struct ProceduralBuildGenerationActor_ConvertDynamicMeshToStaticMesh final
{
public:
	class FString                                 AssetPath;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AssetName;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralGeneration.ProceduralBuildGenerationActor.SetMobileSetting
// 0x0010 (0x0010 - 0x0000)
struct ProceduralBuildGenerationActor_SetMobileSetting final
{
public:
	TArray<class UStaticMesh*>                    Meshs;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

