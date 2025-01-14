#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameFeatures

#include "Basic.hpp"


namespace SDK
{

// Enum GameFeatures.EGameFeatureTargetState
// NumValues: 0x0006
enum class EGameFeatureTargetState : uint8
{
	Installed                                = 0,
	Registered                               = 1,
	Loaded                                   = 2,
	Active                                   = 3,
	Count                                    = 4,
	EGameFeatureTargetState_MAX              = 5,
};

// ScriptStruct GameFeatures.GameFeatureComponentEntry
// 0x0058 (0x0058 - 0x0000)
struct FGameFeatureComponentEntry final
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;                                        // 0x0000(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   ComponentClass;                                    // 0x0028(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bClientComponent : 1;                              // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bServerComponent : 1;                              // 0x0050(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         AdditionFlags;                                     // 0x0051(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E42[0x6];                                     // 0x0052(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GameFeatures.DataRegistrySourceToAdd
// 0x0060 (0x0060 - 0x0000)
struct FDataRegistrySourceToAdd final
{
public:
	class FName                                   RegistryToAddTo;                                   // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AssetPriority;                                     // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bClientSource : 1;                                 // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bServerSource : 1;                                 // 0x000C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1E43[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UDataTable>              DataTableToAdd;                                    // 0x0010(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveTable>             CurveTableToAdd;                                   // 0x0038(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
// 0x00D0 (0x00D0 - 0x0000)
struct FGameFeaturePluginStateMachineProperties final
{
public:
	uint8                                         Pad_1E44[0x90];                                    // 0x0000(0x0090)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameFeatureData*                       GameFeatureData;                                   // 0x0090(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E45[0x38];                                    // 0x0098(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GameFeatures.GameFeaturePluginIdentifier
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FGameFeaturePluginIdentifier final
{
public:
	uint8                                         Pad_1E46[0x28];                                    // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GameFeatures.InstallBundlePluginProtocolOptions
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FInstallBundlePluginProtocolOptions final
{
public:
	uint8                                         Pad_1E47[0xC];                                     // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

