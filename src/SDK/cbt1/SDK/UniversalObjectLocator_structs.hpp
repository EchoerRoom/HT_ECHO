#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UniversalObjectLocator

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum UniversalObjectLocator.ELocatorResolveFlags
// NumValues: 0x0007
enum class ELocatorResolveFlags : uint8
{
	None                                     = 0,
	Load                                     = 1,
	Unload                                   = 2,
	Async                                    = 4,
	WillWait                                 = 8,
	AsyncWait                                = 12,
	ELocatorResolveFlags_MAX                 = 13,
};

// ScriptStruct UniversalObjectLocator.DirectPathObjectLocator
// 0x0020 (0x0020 - 0x0000)
struct FDirectPathObjectLocator final
{
public:
	struct FSoftObjectPath                        Path;                                              // 0x0000(0x0020)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UniversalObjectLocator.LocatorSpawnedCacheResolveParameter
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FLocatorSpawnedCacheResolveParameter final
{
public:
	uint8                                         Pad_52EE[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UniversalObjectLocator.SubObjectLocator
// 0x0010 (0x0010 - 0x0000)
struct FSubObjectLocator final
{
public:
	class FString                                 PathWithinContext;                                 // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UniversalObjectLocator.UniversalObjectLocatorFragment
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FUniversalObjectLocatorFragment final
{
public:
	uint8                                         Pad_52EF[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UniversalObjectLocator.UniversalObjectLocator
// 0x0010 (0x0010 - 0x0000)
struct FUniversalObjectLocator final
{
public:
	TArray<struct FUniversalObjectLocatorFragment> Fragments;                                         // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct UniversalObjectLocator.UniversalObjectLocatorEmptyPayload
// 0x0001 (0x0001 - 0x0000)
struct FUniversalObjectLocatorEmptyPayload final
{
public:
	uint8                                         Pad_52F0[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
