#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassZoneGraphNavigation

#include "Basic.hpp"

#include "MassCommon_structs.hpp"
#include "ZoneGraph_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MassEntity_structs.hpp"
#include "MassNavigation_structs.hpp"


namespace SDK
{

// ScriptStruct MassZoneGraphNavigation.MassZoneGraphNavigationParameters
// 0x0010 (0x0010 - 0x0000)
struct FMassZoneGraphNavigationParameters final : public FMassSharedFragment
{
public:
	struct FZoneGraphTagFilter                    LaneFilter;                                        // 0x0000(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         QueryRadius;                                       // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassZoneGraphNavigation.ZoneGraphShortPathRequest
// 0x0048 (0x0048 - 0x0000)
struct FZoneGraphShortPathRequest final
{
public:
	struct FVector                                StartPosition;                                     // 0x0000(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                EndOfPathPosition;                                 // 0x0018(0x0018)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneGraphLaneHandle                   NextLaneHandle;                                    // 0x0030(0x0008)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetDistance;                                    // 0x0038(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMassSnorm8Vector                      EndOfPathDirection;                                // 0x003C(0x0003)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F40[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMassInt16Real                         AnticipationDistance;                              // 0x0040(0x0002)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FMassInt16Real                         EndOfPathOffset;                                   // 0x0042(0x0002)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	EMassMovementAction                           EndOfPathIntent;                                   // 0x0044(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EZoneLaneLinkType                             NextExitLinkType;                                  // 0x0045(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bMoveReverse : 1;                                  // 0x0046(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsEndOfPathPositionSet : 1;                       // 0x0046(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsEndOfPathDirectionSet : 1;                      // 0x0046(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1F41[0x1];                                     // 0x0047(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassZoneGraphNavigation.MassZoneGraphPathRequestFragment
// 0x0048 (0x0048 - 0x0000)
struct FMassZoneGraphPathRequestFragment final : public FMassFragment
{
public:
	struct FZoneGraphShortPathRequest             PathRequest;                                       // 0x0000(0x0048)(Transient, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct MassZoneGraphNavigation.MassZoneGraphLaneLocationFragment
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x04) FMassZoneGraphLaneLocationFragment final : public FMassFragment
{
public:
	uint8                                         Pad_1F42[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassZoneGraphNavigation.MassZoneGraphCachedLaneFragment
// 0x00A8 (0x00A8 - 0x0000)
struct alignas(0x08) FMassZoneGraphCachedLaneFragment final : public FMassFragment
{
public:
	uint8                                         Pad_1F43[0xA8];                                    // 0x0000(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassZoneGraphNavigation.MassZoneGraphPathPoint
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FMassZoneGraphPathPoint final
{
public:
	uint8                                         Pad_1F44[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassZoneGraphNavigation.MassZoneGraphShortPathFragment
// 0x0078 (0x0078 - 0x0000)
struct alignas(0x08) FMassZoneGraphShortPathFragment final : public FMassFragment
{
public:
	uint8                                         Pad_1F45[0x78];                                    // 0x0000(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassZoneGraphNavigation.MassLaneCacheBoundaryFragment
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FMassLaneCacheBoundaryFragment final : public FMassFragment
{
public:
	uint8                                         Pad_1F46[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
