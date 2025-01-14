#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassSpawner

#include "Basic.hpp"

#include "MassEntity_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "StructUtils_structs.hpp"
#include "ZoneGraph_structs.hpp"
#include "MassSpawner_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// Class MassSpawner.MassEntityTraitBase
// 0x0000 (0x0028 - 0x0028)
class UMassEntityTraitBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityTraitBase">();
	}
	static class UMassEntityTraitBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityTraitBase>();
	}
};

// Class MassSpawner.MassAssortedFragmentsTrait
// 0x0020 (0x0048 - 0x0028)
class UMassAssortedFragmentsTrait final : public UMassEntityTraitBase
{
public:
	TArray<struct FInstancedStruct>               Fragments;                                         // 0x0028(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInstancedStruct>               Tags;                                              // 0x0038(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassAssortedFragmentsTrait">();
	}
	static class UMassAssortedFragmentsTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassAssortedFragmentsTrait>();
	}
};

// Class MassSpawner.MassEntityConfigAsset
// 0x0030 (0x0060 - 0x0030)
class UMassEntityConfigAsset final : public UDataAsset
{
public:
	struct FMassEntityConfig                      Config;                                            // 0x0030(0x0030)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityConfigAsset">();
	}
	static class UMassEntityConfigAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityConfigAsset>();
	}
};

// Class MassSpawner.MassEntitySpawnDataGeneratorBase
// 0x0008 (0x0030 - 0x0028)
class UMassEntitySpawnDataGeneratorBase : public UObject
{
public:
	int32                                         RandomSelectionSeed;                               // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bUseCustomSeed : 1;                                // 0x002C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1EF5[0x3];                                     // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntitySpawnDataGeneratorBase">();
	}
	static class UMassEntitySpawnDataGeneratorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntitySpawnDataGeneratorBase>();
	}
};

// Class MassSpawner.MassEntityEQSSpawnPointsGenerator
// 0x0048 (0x0078 - 0x0030)
class UMassEntityEQSSpawnPointsGenerator final : public UMassEntitySpawnDataGeneratorBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest  EQSRequest;                                        // 0x0030(0x0048)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityEQSSpawnPointsGenerator">();
	}
	static class UMassEntityEQSSpawnPointsGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityEQSSpawnPointsGenerator>();
	}
};

// Class MassSpawner.MassEntityTemplateRegistry
// 0x0000 (0x0028 - 0x0028)
class UMassEntityTemplateRegistry final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityTemplateRegistry">();
	}
	static class UMassEntityTemplateRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityTemplateRegistry>();
	}
};

// Class MassSpawner.MassEntityZoneGraphSpawnPointsGenerator
// 0x0018 (0x0048 - 0x0030)
class UMassEntityZoneGraphSpawnPointsGenerator final : public UMassEntitySpawnDataGeneratorBase
{
public:
	struct FZoneGraphTagFilter                    TagFilter;                                         // 0x0030(0x000C)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                         MinGap;                                            // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxGap;                                            // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1EF6[0x4];                                     // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntityZoneGraphSpawnPointsGenerator">();
	}
	static class UMassEntityZoneGraphSpawnPointsGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntityZoneGraphSpawnPointsGenerator>();
	}
};

// Class MassSpawner.MassSpawner
// 0x00A8 (0x0348 - 0x02A0)
class AMassSpawner : public AActor
{
public:
	FMulticastInlineDelegateProperty_             OnSpawningFinishedEvent;                           // 0x02A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnDespawningFinishedEvent;                         // 0x02B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                         Count;                                             // 0x02C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1EF7[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMassSpawnedEntityType>         EntityTypes;                                       // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMassSpawnDataGenerator>        SpawnDataGenerators;                               // 0x02D8(0x0010)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         bAutoSpawnOnBeginPlay : 1;                         // 0x02E8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bOverrideSchematics : 1;                           // 0x02E8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1EF8[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMassProcessor*>                 PostSpawnProcessors;                               // 0x02F0(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                         SpawningCountScale;                                // 0x0300(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1EF9[0x44];                                    // 0x0304(0x0044)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClearTemplates();
	void DoDespawning();
	void DoSpawning();
	void ScaleSpawningCount(float Scale);
	void UnloadConfig();

	int32 GetCount() const;
	float GetSpawningCountScale() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSpawner">();
	}
	static class AMassSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMassSpawner>();
	}
};

// Class MassSpawner.MassSpawnerSubsystem
// 0x0088 (0x00C0 - 0x0038)
class UMassSpawnerSubsystem final : public UMassSubsystemBase
{
public:
	TArray<class UMassProcessor*>                 SpawnDataInitializers;                             // 0x0038(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_1EFA[0x78];                                    // 0x0048(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSpawnerSubsystem">();
	}
	static class UMassSpawnerSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassSpawnerSubsystem>();
	}
};

// Class MassSpawner.MassSpawnLocationProcessor
// 0x02B0 (0x0370 - 0x00C0)
class UMassSpawnLocationProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1EFB[0x2B0];                                   // 0x00C0(0x02B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSpawnLocationProcessor">();
	}
	static class UMassSpawnLocationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassSpawnLocationProcessor>();
	}
};

// Class MassSpawner.MassTranslator
// 0x0020 (0x00E0 - 0x00C0)
class UMassTranslator : public UMassProcessor
{
public:
	uint8                                         Pad_1EFC[0x20];                                    // 0x00C0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassTranslator">();
	}
	static class UMassTranslator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassTranslator>();
	}
};

}

