#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataRegistry

#include "Basic.hpp"

#include "DataRegistry_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class DataRegistry.DataRegistrySettings
// 0x0018 (0x0050 - 0x0038)
class UDataRegistrySettings final : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                 DirectoriesToScan;                                 // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bInitializeAllLoadedRegistries;                    // 0x0048(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreMissingCookedAssetRegistryData;             // 0x0049(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C57[0x6];                                     // 0x004A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySettings">();
	}
	static class UDataRegistrySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySettings>();
	}
};

// Class DataRegistry.DataRegistry
// 0x0098 (0x00C0 - 0x0028)
class UDataRegistry : public UObject
{
public:
	class FName                                   RegistryType;                                      // 0x0028(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryIdFormat                  IdFormat;                                          // 0x0030(0x0008)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UScriptStruct*                          ItemStruct;                                        // 0x0038(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, AssetRegistrySearchable, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>            DataSources;                                       // 0x0040(0x0010)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>            RuntimeSources;                                    // 0x0050(0x0010)(Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                         TimerUpdateFrequency;                              // 0x0060(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryCachePolicy               DefaultCachePolicy;                                // 0x0064(0x0014)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1C58[0x48];                                    // 0x0078(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistry">();
	}
	static class UDataRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistry>();
	}
};

// Class DataRegistry.DataRegistrySource
// 0x0010 (0x0038 - 0x0028)
class UDataRegistrySource : public UObject
{
public:
	uint8                                         Pad_1C59[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataRegistrySource*                    ParentSource;                                      // 0x0030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySource">();
	}
	static class UDataRegistrySource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySource>();
	}
};

// Class DataRegistry.MetaDataRegistrySource
// 0x00D0 (0x0108 - 0x0038)
class UMetaDataRegistrySource : public UDataRegistrySource
{
public:
	EMetaDataRegistrySourceAssetUsage             AssetUsage;                                        // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C5A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAssetManagerSearchRules               SearchRules;                                       // 0x0040(0x0050)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, class UDataRegistrySource*> RuntimeChildren;                                   // 0x0090(0x0050)(ExportObject, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_1C5B[0x28];                                    // 0x00E0(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaDataRegistrySource">();
	}
	static class UMetaDataRegistrySource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaDataRegistrySource>();
	}
};

// Class DataRegistry.DataRegistrySource_CurveTable
// 0x0068 (0x00A0 - 0x0038)
class UDataRegistrySource_CurveTable final : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UCurveTable>             SourceTable;                                       // 0x0038(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules     TableRules;                                        // 0x0060(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveTable*                            CachedTable;                                       // 0x0068(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                            PreloadTable;                                      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1C5C[0x28];                                    // 0x0078(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySource_CurveTable">();
	}
	static class UDataRegistrySource_CurveTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySource_CurveTable>();
	}
};

// Class DataRegistry.MetaDataRegistrySource_CurveTable
// 0x0010 (0x0118 - 0x0108)
class UMetaDataRegistrySource_CurveTable final : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_CurveTable> CreatedSource;                                     // 0x0108(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules     TableRules;                                        // 0x0110(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaDataRegistrySource_CurveTable">();
	}
	static class UMetaDataRegistrySource_CurveTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaDataRegistrySource_CurveTable>();
	}
};

// Class DataRegistry.DataRegistrySource_DataTable
// 0x0068 (0x00A0 - 0x0038)
class UDataRegistrySource_DataTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UDataTable>              SourceTable;                                       // 0x0038(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules     TableRules;                                        // 0x0060(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                             CachedTable;                                       // 0x0068(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                             PreloadTable;                                      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1C5D[0x28];                                    // 0x0078(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySource_DataTable">();
	}
	static class UDataRegistrySource_DataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySource_DataTable>();
	}
};

// Class DataRegistry.MetaDataRegistrySource_DataTable
// 0x0010 (0x0118 - 0x0108)
class UMetaDataRegistrySource_DataTable final : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_DataTable> CreatedSource;                                     // 0x0108(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules     TableRules;                                        // 0x0110(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaDataRegistrySource_DataTable">();
	}
	static class UMetaDataRegistrySource_DataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaDataRegistrySource_DataTable>();
	}
};

// Class DataRegistry.DataRegistrySubsystem
// 0x00B0 (0x00E0 - 0x0030)
class UDataRegistrySubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_1C5E[0xB0];                                    // 0x0030(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static bool AcquireItemBP(const struct FDataRegistryId& ItemID, TDelegate<void(const struct FDataRegistryId& ItemID, const struct FDataRegistryLookup& ResolvedLookup, EDataRegistryAcquireStatus Status)> AcquireCallback);
	static class FString Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId);
	static class FString Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType);
	static bool EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	static bool EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
	static void EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemID, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue);
	static void FindCachedItemBP(const struct FDataRegistryId& ItemID, EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem);
	static bool GetCachedItemBP(const struct FDataRegistryId& ItemID, struct FTableRowBase& OutItem);
	static bool GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemID, const struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem);
	static bool IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId);
	static bool IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType);
	static bool NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	static bool NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySubsystem">();
	}
	static class UDataRegistrySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySubsystem>();
	}
};

}
