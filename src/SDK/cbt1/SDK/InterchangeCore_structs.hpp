#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeCore

#include "Basic.hpp"


namespace SDK
{

// Enum InterchangeCore.EInterchangeFactoryAssetType
// NumValues: 0x0007
enum class EInterchangeFactoryAssetType : uint8
{
	None                                     = 0,
	Textures                                 = 1,
	Materials                                = 2,
	Meshes                                   = 3,
	Animations                               = 4,
	Physics                                  = 5,
	EInterchangeFactoryAssetType_MAX         = 6,
};

// Enum InterchangeCore.EInterchangePipelineTask
// NumValues: 0x0005
enum class EInterchangePipelineTask : uint8
{
	PostTranslator                           = 0,
	PostFactory                              = 1,
	PostImport                               = 2,
	Export                                   = 3,
	EInterchangePipelineTask_MAX             = 4,
};

// Enum InterchangeCore.EInterchangePipelineContext
// NumValues: 0x000A
enum class EInterchangePipelineContext : uint8
{
	None                                     = 0,
	AssetImport                              = 1,
	AssetReimport                            = 2,
	SceneImport                              = 3,
	SceneReimport                            = 4,
	AssetCustomLODImport                     = 5,
	AssetCustomLODReimport                   = 6,
	AssetAlternateSkinningImport             = 7,
	AssetAlternateSkinningReimport           = 8,
	EInterchangePipelineContext_MAX          = 9,
};

// Enum InterchangeCore.EInterchangeResultType
// NumValues: 0x0004
enum class EInterchangeResultType : uint8
{
	Success                                  = 0,
	Warning                                  = 1,
	Error                                    = 2,
	EInterchangeResultType_MAX               = 3,
};

// Enum InterchangeCore.EInterchangeTranslatorType
// NumValues: 0x0005
enum class EInterchangeTranslatorType : uint8
{
	Invalid                                  = 0,
	Assets                                   = 2,
	Actors                                   = 4,
	Scenes                                   = 6,
	EInterchangeTranslatorType_MAX           = 7,
};

// Enum InterchangeCore.EInterchangeTranslatorAssetType
// NumValues: 0x0006
enum class EInterchangeTranslatorAssetType : uint8
{
	None                                     = 0,
	Textures                                 = 1,
	Materials                                = 2,
	Meshes                                   = 4,
	Animations                               = 8,
	EInterchangeTranslatorAssetType_MAX      = 9,
};

// Enum InterchangeCore.EInterchangeNodeContainerType
// NumValues: 0x0005
enum class EInterchangeNodeContainerType : uint8
{
	None                                     = 0,
	TranslatedScene                          = 1,
	TranslatedAsset                          = 2,
	FactoryData                              = 3,
	EInterchangeNodeContainerType_MAX        = 4,
};

// Enum InterchangeCore.EInterchangeNodeUserInterfaceContext
// NumValues: 0x0003
enum class EInterchangeNodeUserInterfaceContext : uint8
{
	None                                     = 0,
	Preview                                  = 1,
	EInterchangeNodeUserInterfaceContext_MAX = 2,
};

// Enum InterchangeCore.EReimportStrategyFlags
// NumValues: 0x0004
enum class EReimportStrategyFlags : uint8
{
	ApplyNoProperties                        = 0,
	ApplyPipelineProperties                  = 1,
	ApplyEditorChangedProperties             = 2,
	EReimportStrategyFlags_MAX               = 3,
};

// ScriptStruct InterchangeCore.InterchangePipelinePropertyStatePerContext
// 0x0001 (0x0001 - 0x0000)
struct FInterchangePipelinePropertyStatePerContext final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct InterchangeCore.InterchangePipelinePropertyStates
// 0x0004 (0x0004 - 0x0000)
struct FInterchangePipelinePropertyStates final
{
public:
	bool                                          bLocked;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterchangePipelinePropertyStatePerContext BasicLayoutStates;                                 // 0x0001(0x0001)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInterchangePipelinePropertyStatePerContext ImportStates;                                      // 0x0002(0x0001)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInterchangePipelinePropertyStatePerContext ReimportStates;                                    // 0x0003(0x0001)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct InterchangeCore.InterchangeUserDefinedAttributeInfo
// 0x0038 (0x0038 - 0x0000)
struct FInterchangeUserDefinedAttributeInfo final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4EE6[0x28];                                    // 0x0010(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
