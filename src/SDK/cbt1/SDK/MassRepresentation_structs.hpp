#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassRepresentation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MassEntity_structs.hpp"
#include "MassLOD_structs.hpp"
#include "MassActors_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum MassRepresentation.EMassRepresentationType
// NumValues: 0x0005
enum class EMassRepresentationType : uint8
{
	HighResSpawnedActor                      = 0,
	LowResSpawnedActor                       = 1,
	StaticMeshInstance                       = 2,
	None                                     = 3,
	EMassRepresentationType_MAX              = 4,
};

// ScriptStruct MassRepresentation.MassDistanceLODProcessorTag
// 0x0000 (0x0001 - 0x0001)
struct FMassDistanceLODProcessorTag final : public FMassTag
{
};

// ScriptStruct MassRepresentation.MassStaticRepresentationTag
// 0x0000 (0x0001 - 0x0001)
struct FMassStaticRepresentationTag final : public FMassTag
{
};

// ScriptStruct MassRepresentation.MassRepresentationLODFragment
// 0x0008 (0x0008 - 0x0000)
struct FMassRepresentationLODFragment final : public FMassFragment
{
public:
	EMassLOD                                      LOD;                                               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMassLOD                                      PrevLOD;                                           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMassVisibility                               Visibility;                                        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMassVisibility                               PrevVisibility;                                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LODSignificance;                                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.StaticMeshInstanceVisualizationDescHandle
// 0x0002 (0x0002 - 0x0000)
struct FStaticMeshInstanceVisualizationDescHandle final
{
public:
	uint16                                        Index;                                             // 0x0000(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct MassRepresentation.MassRepresentationFragment
// 0x0080 (0x0080 - 0x0000)
struct FMassRepresentationFragment final : public FMassFragment
{
public:
	EMassRepresentationType                       CurrentRepresentation;                             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMassRepresentationType                       PrevRepresentation;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         HighResTemplateActorIndex;                         // 0x0002(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         LowResTemplateActorIndex;                          // 0x0004(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStaticMeshInstanceVisualizationDescHandle StaticMeshDescHandle;                              // 0x0006(0x0002)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMassActorSpawnRequestHandle           ActorSpawnRequestHandle;                           // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             PrevTransform;                                     // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PrevLODSignificance;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2079[0xC];                                     // 0x0074(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassRepresentation.MassRepresentationSubsystemSharedFragment
// 0x0008 (0x0008 - 0x0000)
struct FMassRepresentationSubsystemSharedFragment final : public FMassSharedFragment
{
public:
	class UMassRepresentationSubsystem*           RepresentationSubsystem;                           // 0x0000(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.MassRepresentationParameters
// 0x0028 (0x0028 - 0x0000)
struct FMassRepresentationParameters final : public FMassSharedFragment
{
public:
	TSubclassOf<class UMassRepresentationActorManagement> RepresentationActorManagementClass;                // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMassRepresentationType                       LODRepresentation[0x4];                            // 0x0008(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bForceActorRepresentationForExternalActors : 1;    // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bKeepLowResActors : 1;                             // 0x000C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bKeepActorExtraFrame : 1;                          // 0x000C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSpreadFirstVisualizationUpdate : 1;               // 0x000C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_207A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   WorldPartitionGridNameContainingCollision;         // 0x0010(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NotVisibleUpdateRate;                              // 0x0018(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMassRepresentationType                       CachedDefaultRepresentationType;                   // 0x001C(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_207B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMassRepresentationActorManagement*     CachedRepresentationActorManagement;               // 0x0020(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.MassVisualizationLODParameters
// 0x0048 (0x0048 - 0x0000)
struct FMassVisualizationLODParameters final : public FMassSharedFragment
{
public:
	float                                         BaseLODDistance[0x4];                              // 0x0000(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VisibleLODDistance[0x4];                           // 0x0010(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BufferHysteresisOnDistancePercentage;              // 0x0020(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LODMaxCount[0x4];                                  // 0x0024(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceToFrustum;                                 // 0x0034(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceToFrustumHysteresis;                       // 0x0038(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_207C[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          FilterTag;                                         // 0x0040(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.MassVisualizationLODSharedFragment
// 0x2028 (0x2028 - 0x0000)
struct FMassVisualizationLODSharedFragment final : public FMassSharedFragment
{
public:
	uint8                                         Pad_207D[0x2020];                                  // 0x0000(0x2020)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          FilterTag;                                         // 0x2020(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.MassDistanceLODParameters
// 0x0020 (0x0020 - 0x0000)
struct FMassDistanceLODParameters final : public FMassSharedFragment
{
public:
	float                                         LODDistance[0x4];                                  // 0x0000(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BufferHysteresisOnDistancePercentage;              // 0x0010(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_207E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          FilterTag;                                         // 0x0018(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.MassDistanceLODSharedFragment
// 0x2020 (0x2020 - 0x0000)
struct FMassDistanceLODSharedFragment final : public FMassSharedFragment
{
public:
	uint8                                         Pad_207F[0x2018];                                  // 0x0000(0x2018)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          FilterTag;                                         // 0x2018(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.MassSkipStreamCompleteCheckTag
// 0x0000 (0x0001 - 0x0001)
struct FMassSkipStreamCompleteCheckTag final : public FMassTag
{
};

// ScriptStruct MassRepresentation.MassForceHighRepresentationTypeTag
// 0x0000 (0x0001 - 0x0001)
struct FMassForceHighRepresentationTypeTag final : public FMassTag
{
};

// ScriptStruct MassRepresentation.MassRepresentationUpdateParams
// 0x0001 (0x0001 - 0x0000)
struct FMassRepresentationUpdateParams final
{
public:
	bool                                          bTestCollisionAvailibilityForActorVisualization;   // 0x0000(0x0001)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.MassVisualizationProcessorTag
// 0x0000 (0x0001 - 0x0001)
struct FMassVisualizationProcessorTag final : public FMassTag
{
};

// ScriptStruct MassRepresentation.MassStaticMeshInstanceVisualizationMeshDesc
// 0x0030 (0x0030 - 0x0000)
struct FMassStaticMeshInstanceVisualizationMeshDesc final
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             MaterialOverrides;                                 // 0x0008(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                         MinLODSignificance;                                // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxLODSignificance;                                // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCastShadows;                                      // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2080[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UInstancedStaticMeshComponent> ISMComponentClass;                                 // 0x0028(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.StaticMeshInstanceVisualizationDesc
// 0x0078 (0x0080 - 0x0008)
struct FStaticMeshInstanceVisualizationDesc final : public FTableRowBase
{
public:
	TArray<struct FMassStaticMeshInstanceVisualizationMeshDesc> Meshes;                                            // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bUseTransformOffset;                               // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2081[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             TransformOffset;                                   // 0x0020(0x0060)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassRepresentation.MassLODSignificanceRange
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FMassLODSignificanceRange final
{
public:
	uint8                                         Pad_2082[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassRepresentation.MassInstancedStaticMeshInfo
// 0x00A0 (0x00A0 - 0x0000)
struct FMassInstancedStaticMeshInfo final
{
public:
	struct FStaticMeshInstanceVisualizationDesc   Desc;                                              // 0x0000(0x0080)(Edit, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UInstancedStaticMeshComponent*>  InstancedStaticMeshComponents;                     // 0x0080(0x0010)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FMassLODSignificanceRange>      LODSignificanceRanges;                             // 0x0090(0x0010)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
};

// ScriptStruct MassRepresentation.MassStationaryISMSwitcherProcessorTag
// 0x0000 (0x0001 - 0x0001)
struct FMassStationaryISMSwitcherProcessorTag final : public FMassTag
{
};

// ScriptStruct MassRepresentation.MassVisualizationLODProcessorTag
// 0x0000 (0x0001 - 0x0001)
struct FMassVisualizationLODProcessorTag final : public FMassTag
{
};

}

