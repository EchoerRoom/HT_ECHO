#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZoneGraph

#include "Basic.hpp"

#include "ZoneGraph_structs.hpp"


namespace SDK::Params
{

// Function ZoneGraph.ZoneShapeComponent.AddExtraLaneInfos
// 0x0018 (0x0018 - 0x0000)
struct ZoneShapeComponent_AddExtraLaneInfos final
{
public:
	int32                                         LaneIndex;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EEF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExtraLaneInfo                         InExtraLaneInfo;                                   // 0x0008(0x0010)(Parm, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.GetMutableExtraLaneInfos
// 0x0050 (0x0050 - 0x0000)
struct ZoneShapeComponent_GetMutableExtraLaneInfos final
{
public:
	TMap<int32, struct FExtraLaneInfo>            ReturnValue;                                       // 0x0000(0x0050)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.SetPolygonRoutingType
// 0x0001 (0x0001 - 0x0000)
struct ZoneShapeComponent_SetPolygonRoutingType final
{
public:
	EZoneShapePolygonRoutingType                  NewType;                                           // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.SetReverseLaneProfile
// 0x0002 (0x0002 - 0x0000)
struct ZoneShapeComponent_SetReverseLaneProfile final
{
public:
	bool                                          bReverse;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.SetShapeType
// 0x0001 (0x0001 - 0x0000)
struct ZoneShapeComponent_SetShapeType final
{
public:
	EFZoneShapeType                               Type;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.SetTags
// 0x0004 (0x0004 - 0x0000)
struct ZoneShapeComponent_SetTags final
{
public:
	struct FZoneGraphTagMask                      NewTags;                                           // 0x0000(0x0004)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.GetExtraLaneInfos
// 0x0050 (0x0050 - 0x0000)
struct ZoneShapeComponent_GetExtraLaneInfos final
{
public:
	TMap<int32, struct FExtraLaneInfo>            ReturnValue;                                       // 0x0000(0x0050)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.GetOffsetAlongNormal
// 0x0004 (0x0004 - 0x0000)
struct ZoneShapeComponent_GetOffsetAlongNormal final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.GetShapeType
// 0x0001 (0x0001 - 0x0000)
struct ZoneShapeComponent_GetShapeType final
{
public:
	EFZoneShapeType                               ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.GetTags
// 0x0004 (0x0004 - 0x0000)
struct ZoneShapeComponent_GetTags final
{
public:
	struct FZoneGraphTagMask                      ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ZoneGraph.ZoneShapeComponent.IsLaneProfileReversed
// 0x0001 (0x0001 - 0x0000)
struct ZoneShapeComponent_IsLaneProfileReversed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
