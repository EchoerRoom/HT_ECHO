#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GeometryCache_structs.hpp"


namespace SDK::Params
{

// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// 0x0008 (0x0008 - 0x0000)
struct GeometryCacheActor_GetGeometryCacheComponent final
{
public:
	class UGeometryCacheComponent*                ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_SetExtrapolateFrames final
{
public:
	bool                                          bNewExtrapolating;                                 // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// 0x0010 (0x0010 - 0x0000)
struct GeometryCacheComponent_SetGeometryCache final
{
public:
	class UGeometryCache*                         NewGeomCache;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2822[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GeometryCache.GeometryCacheComponent.SetLooping
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_SetLooping final
{
public:
	bool                                          bNewLooping;                                       // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_SetMotionVectorScale final
{
public:
	float                                         NewMotionVectorScale;                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_SetOverrideWireframeColor final
{
public:
	bool                                          bOverride;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_SetPlaybackSpeed final
{
public:
	float                                         NewPlaybackSpeed;                                  // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_SetStartTimeOffset final
{
public:
	float                                         NewStartTimeOffset;                                // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
// 0x0010 (0x0010 - 0x0000)
struct GeometryCacheComponent_SetWireframeOverrideColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
// 0x0008 (0x0008 - 0x0000)
struct GeometryCacheComponent_TickAtThisTime final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInIsRunning;                                      // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInBackwards;                                      // 0x0005(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInIsLooping;                                      // 0x0006(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2823[0x1];                                     // 0x0007(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetAnimationTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.GetDuration
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetMotionVectorScale final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetNumberOfFrames final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_GetOverrideWireframeColor final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetPlaybackDirection final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetPlaybackSpeed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// 0x0004 (0x0004 - 0x0000)
struct GeometryCacheComponent_GetStartTimeOffset final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
// 0x0010 (0x0010 - 0x0000)
struct GeometryCacheComponent_GetWireframeOverrideColor final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_IsExtrapolatingFrames final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.IsLooping
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_IsLooping final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.IsPlaying
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_IsPlaying final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// 0x0001 (0x0001 - 0x0000)
struct GeometryCacheComponent_IsPlayingReversed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// 0x00D0 (0x00D0 - 0x0000)
struct GeometryCacheTrack_FlipbookAnimation_AddMeshSample final
{
public:
	struct FGeometryCacheMeshData                 MeshData;                                          // 0x0000(0x00C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                         SampleTime;                                        // 0x00C8(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2826[0x4];                                     // 0x00CC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// 0x00C8 (0x00C8 - 0x0000)
struct GeometryCacheTrack_TransformAnimation_SetMesh final
{
public:
	struct FGeometryCacheMeshData                 NewMeshData;                                       // 0x0000(0x00C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// 0x00C8 (0x00C8 - 0x0000)
struct GeometryCacheTrack_TransformGroupAnimation_SetMesh final
{
public:
	struct FGeometryCacheMeshData                 NewMeshData;                                       // 0x0000(0x00C8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
