#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassZoneGraphNavigation

#include "Basic.hpp"

#include "MassEntity_classes.hpp"
#include "MassSpawner_classes.hpp"
#include "MassZoneGraphNavigation_structs.hpp"


namespace SDK
{

// Class MassZoneGraphNavigation.MassZoneGraphLocationInitializer
// 0x02A8 (0x0380 - 0x00D8)
class UMassZoneGraphLocationInitializer final : public UMassObserverProcessor
{
public:
	uint8                                         Pad_1F47[0x2A8];                                   // 0x00D8(0x02A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassZoneGraphLocationInitializer">();
	}
	static class UMassZoneGraphLocationInitializer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassZoneGraphLocationInitializer>();
	}
};

// Class MassZoneGraphNavigation.MassZoneGraphPathFollowProcessor
// 0x02B0 (0x0370 - 0x00C0)
class alignas(0x10) UMassZoneGraphPathFollowProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1F48[0x2A0];                                   // 0x00C0(0x02A0)(Fixing Size After Last Property [ Dumper-7 ])
	class UMassSignalSubsystem*                   SignalSubsystem;                                   // 0x0360(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1F49[0x8];                                     // 0x0368(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassZoneGraphPathFollowProcessor">();
	}
	static class UMassZoneGraphPathFollowProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassZoneGraphPathFollowProcessor>();
	}
};

// Class MassZoneGraphNavigation.MassZoneGraphLaneCacheBoundaryProcessor
// 0x02B0 (0x0370 - 0x00C0)
class UMassZoneGraphLaneCacheBoundaryProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1F4A[0x2B0];                                   // 0x00C0(0x02B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassZoneGraphLaneCacheBoundaryProcessor">();
	}
	static class UMassZoneGraphLaneCacheBoundaryProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassZoneGraphLaneCacheBoundaryProcessor>();
	}
};

// Class MassZoneGraphNavigation.MassZoneGraphNavigationTrait
// 0x0010 (0x0038 - 0x0028)
class UMassZoneGraphNavigationTrait final : public UMassEntityTraitBase
{
public:
	struct FMassZoneGraphNavigationParameters     NavigationParameters;                              // 0x0028(0x0010)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassZoneGraphNavigationTrait">();
	}
	static class UMassZoneGraphNavigationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassZoneGraphNavigationTrait>();
	}
};

}
