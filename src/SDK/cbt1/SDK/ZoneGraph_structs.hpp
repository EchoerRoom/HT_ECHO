#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZoneGraph

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ZoneGraph.EZoneGraphTags
// NumValues: 0x0003
enum class EZoneGraphTags : uint8
{
	MaxTags                                  = 32,
	MaxTagIndex                              = 31,
	EZoneGraphTags_MAX                       = 33,
};

// Enum ZoneGraph.EZoneLaneTagMaskComparison
// NumValues: 0x0004
enum class EZoneLaneTagMaskComparison : uint8
{
	Any                                      = 0,
	All                                      = 1,
	Not                                      = 2,
	EZoneLaneTagMaskComparison_MAX           = 3,
};

// Enum ZoneGraph.EZoneLaneDirection
// NumValues: 0x0004
enum class EZoneLaneDirection : uint8
{
	None                                     = 0,
	Forward                                  = 1,
	Backward                                 = 2,
	EZoneLaneDirection_MAX                   = 3,
};

// Enum ZoneGraph.EZoneLaneLinkType
// NumValues: 0x0006
enum class EZoneLaneLinkType : uint8
{
	None                                     = 0,
	All                                      = 255,
	Outgoing                                 = 1,
	Incoming                                 = 2,
	Adjacent                                 = 4,
	EZoneLaneLinkType_MAX                    = 256,
};

// Enum ZoneGraph.EZoneLaneLinkFlags
// NumValues: 0x0008
enum class EZoneLaneLinkFlags : uint8
{
	None                                     = 0,
	All                                      = 255,
	Left                                     = 1,
	Right                                    = 2,
	Splitting                                = 4,
	Merging                                  = 8,
	OppositeDirection                        = 16,
	EZoneLaneLinkFlags_MAX                   = 256,
};

// Enum ZoneGraph.FZoneShapeType
// NumValues: 0x0003
enum class EFZoneShapeType : uint8
{
	Spline                                   = 0,
	Polygon                                  = 1,
	FZoneShapeType_MAX                       = 2,
};

// Enum ZoneGraph.EZoneShapePolygonRoutingType
// NumValues: 0x0003
enum class EZoneShapePolygonRoutingType : uint8
{
	Bezier                                   = 0,
	Arcs                                     = 1,
	EZoneShapePolygonRoutingType_MAX         = 2,
};

// Enum ZoneGraph.EZoneShapeLaneConnectionRestrictions
// NumValues: 0x0006
enum class EZoneShapeLaneConnectionRestrictions : uint8
{
	None                                     = 0,
	NoLeftTurn                               = 1,
	NoRightTurn                              = 2,
	OneLanePerDestination                    = 4,
	MergeLanesToOneDestinationLane           = 8,
	EZoneShapeLaneConnectionRestrictions_MAX = 9,
};

// Enum ZoneGraph.FZoneShapePointType
// NumValues: 0x0005
enum class EFZoneShapePointType : uint8
{
	Sharp                                    = 0,
	Bezier                                   = 1,
	AutoBezier                               = 2,
	LaneProfile                              = 3,
	FZoneShapePointType_MAX                  = 4,
};

// Enum ZoneGraph.EZoneGraphLaneRoutingCountRule
// NumValues: 0x0004
enum class EZoneGraphLaneRoutingCountRule : uint8
{
	Any                                      = 0,
	One                                      = 1,
	Many                                     = 2,
	EZoneGraphLaneRoutingCountRule_MAX       = 3,
};

// ScriptStruct ZoneGraph.ZoneGraphBuilderRegisteredComponent
// 0x0018 (0x0018 - 0x0000)
struct FZoneGraphBuilderRegisteredComponent final
{
public:
	class UZoneShapeComponent*                    Component;                                         // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        ShapeHash;                                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ED1[0xC];                                     // 0x000C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneGraphDataHandle
// 0x0004 (0x0004 - 0x0000)
struct FZoneGraphDataHandle final
{
public:
	uint16                                        Index;                                             // 0x0000(0x0002)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        Generation;                                        // 0x0002(0x0002)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphLaneHandle
// 0x0008 (0x0008 - 0x0000)
struct FZoneGraphLaneHandle final
{
public:
	int32                                         Index;                                             // 0x0000(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneGraphDataHandle                   DataHandle;                                        // 0x0004(0x0004)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneShapeComponentBuildData
// 0x0018 (0x0018 - 0x0000)
struct FZoneShapeComponentBuildData final
{
public:
	int32                                         ZoneIndex;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ED2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FZoneGraphLaneHandle>           Lanes;                                             // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphBuildData
// 0x0050 (0x0050 - 0x0000)
struct FZoneGraphBuildData final
{
public:
	TMap<class UZoneShapeComponent*, struct FZoneShapeComponentBuildData> ZoneShapeComponentBuildData;                       // 0x0000(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphBuilder
// 0x0198 (0x0198 - 0x0000)
struct FZoneGraphBuilder final
{
public:
	TArray<struct FZoneGraphBuilderRegisteredComponent> ShapeComponents;                                   // 0x0000(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                 ShapeComponentsFreeList;                           // 0x0010(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class UZoneShapeComponent*, int32>       ShapeComponentToIndex;                             // 0x0020(0x0050)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FZoneGraphBuildData                    BuildData;                                         // 0x0070(0x0050)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1ED3[0xD8];                                    // 0x00C0(0x00D8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneGraphLinkedLane
// 0x000C (0x000C - 0x0000)
struct FZoneGraphLinkedLane final
{
public:
	struct FZoneGraphLaneHandle                   DestLane;                                          // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EZoneLaneLinkType                             Type;                                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Flags;                                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ED4[0x2];                                     // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneGraphBVNode
// 0x0010 (0x0010 - 0x0000)
struct FZoneGraphBVNode final
{
public:
	uint16                                        MinX;                                              // 0x0000(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        MinY;                                              // 0x0002(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        MinZ;                                              // 0x0004(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        MaxX;                                              // 0x0006(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        MaxY;                                              // 0x0008(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        MaxZ;                                              // 0x000A(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Index;                                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphBVTree
// 0x0030 (0x0030 - 0x0000)
struct FZoneGraphBVTree final
{
public:
	struct FVector                                Origin;                                            // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         QuantizationScale;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1ED5[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FZoneGraphBVNode>               Nodes;                                             // 0x0020(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// ScriptStruct ZoneGraph.RegisteredZoneGraphData
// 0x0010 (0x0010 - 0x0000)
struct FRegisteredZoneGraphData final
{
public:
	class AZoneGraphData*                         ZoneGraphData;                                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ED6[0x8];                                     // 0x0008(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneHandle
// 0x0004 (0x0004 - 0x0000)
struct FZoneHandle final
{
public:
	uint32                                        Index;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct ZoneGraph.ZoneShapeConnection
// 0x000C (0x000C - 0x0000)
struct FZoneShapeConnection final
{
public:
	TWeakObjectPtr<class UZoneShapeComponent>     ShapeComponent;                                    // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ConnectorIndex;                                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphTag
// 0x0001 (0x0001 - 0x0000)
struct FZoneGraphTag final
{
public:
	uint8                                         Bit;                                               // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct ZoneGraph.ZoneGraphTagMask
// 0x0004 (0x0004 - 0x0000)
struct FZoneGraphTagMask final
{
public:
	uint32                                        Mask;                                              // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct ZoneGraph.ZoneGraphTagFilter
// 0x000C (0x000C - 0x0000)
struct FZoneGraphTagFilter final
{
public:
	struct FZoneGraphTagMask                      AnyTags;                                           // 0x0000(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneGraphTagMask                      AllTags;                                           // 0x0004(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneGraphTagMask                      NotTags;                                           // 0x0008(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphTagInfo
// 0x0010 (0x0010 - 0x0000)
struct FZoneGraphTagInfo final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 Color;                                             // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneGraphTag                          Tag;                                               // 0x000C(0x0001)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ED7[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ExtraLaneInfo
// 0x0010 (0x0010 - 0x0000)
struct FExtraLaneInfo final
{
public:
	TArray<class FName>                           LaneInfos;                                         // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneLaneDesc
// 0x000C (0x000C - 0x0000)
struct FZoneLaneDesc final
{
public:
	float                                         Width;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EZoneLaneDirection                            Direction;                                         // 0x0004(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ED8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FZoneGraphTagMask                      Tags;                                              // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneLaneProfile
// 0x0028 (0x0028 - 0x0000)
struct FZoneLaneProfile final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ID;                                                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZoneLaneDesc>                  Lanes;                                             // 0x0018(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneLaneProfileRef
// 0x0018 (0x0018 - 0x0000)
struct FZoneLaneProfileRef final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ID;                                                // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphTessellationSettings
// 0x0010 (0x0010 - 0x0000)
struct FZoneGraphTessellationSettings final
{
public:
	struct FZoneGraphTagFilter                    LaneFilter;                                        // 0x0000(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         TessellationTolerance;                             // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneLaneLinkData
// 0x0008 (0x0008 - 0x0000)
struct FZoneLaneLinkData final
{
public:
	int32                                         DestLaneIndex;                                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EZoneLaneLinkType                             Type;                                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Flags;                                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ED9[0x2];                                     // 0x0006(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneLaneData
// 0x0020 (0x0020 - 0x0000)
struct FZoneLaneData final
{
public:
	float                                         Width;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneGraphTagMask                      Tags;                                              // 0x0004(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PointsBegin;                                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PointsEnd;                                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LinksBegin;                                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LinksEnd;                                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZoneIndex;                                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        StartEntryId;                                      // 0x001C(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        EndEntryId;                                        // 0x001E(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneData
// 0x0050 (0x0050 - 0x0000)
struct FZoneData final
{
public:
	int32                                         BoundaryPointsBegin;                               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BoundaryPointsEnd;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LanesBegin;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LanesEnd;                                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                   Bounds;                                            // 0x0010(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FZoneGraphTagMask                      Tags;                                              // 0x0048(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EDA[0x4];                                     // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneGraphLaneLocation
// 0x0070 (0x0070 - 0x0000)
struct FZoneGraphLaneLocation final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Direction;                                         // 0x0018(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Tangent;                                           // 0x0030(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Up;                                                // 0x0048(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneGraphLaneHandle                   LaneHandle;                                        // 0x0060(0x0008)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LaneSegment;                                       // 0x0068(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceAlongLane;                                 // 0x006C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphCompactLaneLocation
// 0x000C (0x000C - 0x0000)
struct FZoneGraphCompactLaneLocation final
{
public:
	struct FZoneGraphLaneHandle                   LaneHandle;                                        // 0x0000(0x0008)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceAlongLane;                                 // 0x0008(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphLaneSection
// 0x0010 (0x0010 - 0x0000)
struct FZoneGraphLaneSection final
{
public:
	struct FZoneGraphLaneHandle                   LaneHandle;                                        // 0x0000(0x0008)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartDistanceAlongLane;                            // 0x0008(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndDistanceAlongLane;                              // 0x000C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneGraphStorage
// 0x00F0 (0x00F0 - 0x0000)
struct FZoneGraphStorage final
{
public:
	TArray<struct FZoneData>                      Zones;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FZoneLaneData>                  Lanes;                                             // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        BoundaryPoints;                                    // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        LanePoints;                                        // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        LaneUpVectors;                                     // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        LaneTangentVectors;                                // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 LanePointProgressions;                             // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FZoneLaneLinkData>              LaneLinks;                                         // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                   Bounds;                                            // 0x0080(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FZoneGraphBVTree                       ZoneBVTree;                                        // 0x00B8(0x0030)(NativeAccessSpecifierPublic)
	uint8                                         Pad_1EDB[0x8];                                     // 0x00E8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneShapePoint
// 0x0070 (0x0070 - 0x0000)
struct FZoneShapePoint final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InControlPoint;                                    // 0x0018(0x0018)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                OutControlPoint;                                   // 0x0030(0x0018)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TangentLength;                                     // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InnerTurnRadius;                                   // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0050(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	EFZoneShapePointType                          Type;                                              // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         LaneProfile;                                       // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReverseLaneProfile;                               // 0x006A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EDC[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LaneConnectionRestrictions;                        // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ZoneGraph.ZoneShapeConnector
// 0x0068 (0x0068 - 0x0000)
struct FZoneShapeConnector final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Up;                                                // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PointIndex;                                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneLaneProfileRef                    LaneProfile;                                       // 0x004C(0x0018)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bReverseLaneProfile;                               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFZoneShapeType                               ShapeType;                                         // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EDD[0x2];                                     // 0x0066(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneGraphLaneRoutingRule
// 0x0060 (0x0060 - 0x0000)
struct FZoneGraphLaneRoutingRule final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EDE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Comment;                                           // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneGraphTagFilter                    ZoneTagFilter;                                     // 0x0018(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FZoneLaneProfileRef                    SourceLaneProfile;                                 // 0x0024(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FZoneLaneProfileRef                    DestinationLaneProfile;                            // 0x003C(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	EZoneGraphLaneRoutingCountRule                SourceOutgoingConnections;                         // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EZoneGraphLaneRoutingCountRule                DestinationIncomingConnections;                    // 0x0055(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EDF[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ConnectionRestrictions;                            // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EE0[0x4];                                     // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneGraphBuildSettings
// 0x0048 (0x0048 - 0x0000)
struct FZoneGraphBuildSettings final
{
public:
	float                                         CommonTessellationTolerance;                       // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EE1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FZoneGraphTessellationSettings> SpecificTessellationTolerances;                    // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         LaneConnectionAngle;                               // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneGraphTagMask                      LaneConnectionMask;                                // 0x001C(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TurnThresholdAngle;                                // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EE2[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FZoneGraphLaneRoutingRule>      PolygonRoutingRules;                               // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         ConnectionSnapDistance;                            // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConnectionSnapAngle;                               // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DragEndpointAutoConnectRange;                      // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EE3[0x4];                                     // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ZoneGraph.ZoneShapeLaneInternalLink
// 0x000C (0x000C - 0x0000)
struct FZoneShapeLaneInternalLink final
{
public:
	int32                                         LaneIndex;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneLaneLinkData                      LinkData;                                          // 0x0004(0x0008)(NoDestructor, NativeAccessSpecifierPublic)
};

}

