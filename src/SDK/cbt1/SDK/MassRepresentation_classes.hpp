#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassRepresentation

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "MassRepresentation_structs.hpp"
#include "MassEntity_classes.hpp"
#include "MassSpawner_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MassRepresentation.MassDistanceLODProcessor
// 0x07F0 (0x08B0 - 0x00C0)
class alignas(0x10) UMassDistanceLODProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_2083[0x7E8];                                   // 0x00C0(0x07E8)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          FilterTag;                                         // 0x08A8(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassDistanceLODProcessor">();
	}
	static class UMassDistanceLODProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassDistanceLODProcessor>();
	}
};

// Class MassRepresentation.MassDistanceVisualizationTrait
// 0x00F8 (0x0120 - 0x0028)
class UMassDistanceVisualizationTrait : public UMassEntityTraitBase
{
public:
	uint8                                         Pad_2084[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStaticMeshInstanceVisualizationDesc   StaticMeshInstanceDesc;                            // 0x0030(0x0080)(Edit, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     HighResTemplateActor;                              // 0x00B0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     LowResTemplateActor;                               // 0x00B8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMassRepresentationSubsystem> RepresentationSubsystemClass;                      // 0x00C0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMassRepresentationParameters          Params;                                            // 0x00C8(0x0028)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMassDistanceLODParameters             LODParams;                                         // 0x00F0(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bAllowServerSideVisualization;                     // 0x0110(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2085[0xF];                                     // 0x0111(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassDistanceVisualizationTrait">();
	}
	static class UMassDistanceVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassDistanceVisualizationTrait>();
	}
};

// Class MassRepresentation.MassVisualizationTrait
// 0x0118 (0x0140 - 0x0028)
class UMassVisualizationTrait : public UMassEntityTraitBase
{
public:
	uint8                                         Pad_2086[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStaticMeshInstanceVisualizationDesc   StaticMeshInstanceDesc;                            // 0x0030(0x0080)(Edit, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     HighResTemplateActor;                              // 0x00B0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     LowResTemplateActor;                               // 0x00B8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMassRepresentationSubsystem> RepresentationSubsystemClass;                      // 0x00C0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMassRepresentationParameters          Params;                                            // 0x00C8(0x0028)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMassVisualizationLODParameters        LODParams;                                         // 0x00F0(0x0048)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bAllowServerSideVisualization;                     // 0x0138(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2087[0x7];                                     // 0x0139(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizationTrait">();
	}
	static class UMassVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassVisualizationTrait>();
	}
};

// Class MassRepresentation.MassMovableVisualizationTrait
// 0x0000 (0x0140 - 0x0140)
class UMassMovableVisualizationTrait final : public UMassVisualizationTrait
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassMovableVisualizationTrait">();
	}
	static class UMassMovableVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassMovableVisualizationTrait>();
	}
};

// Class MassRepresentation.MassRepresentationActorManagement
// 0x0000 (0x0028 - 0x0028)
class UMassRepresentationActorManagement : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassRepresentationActorManagement">();
	}
	static class UMassRepresentationActorManagement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassRepresentationActorManagement>();
	}
};

// Class MassRepresentation.MassRepresentationProcessor
// 0x02B0 (0x0370 - 0x00C0)
class UMassRepresentationProcessor : public UMassProcessor
{
public:
	uint8                                         Pad_2088[0x2A0];                                   // 0x00C0(0x02A0)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMassRepresentationUpdateParams        UpdateParams;                                      // 0x0360(0x0001)(Edit, Config, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_2089[0xF];                                     // 0x0361(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassRepresentationProcessor">();
	}
	static class UMassRepresentationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassRepresentationProcessor>();
	}
};

// Class MassRepresentation.MassVisualizationProcessor
// 0x0000 (0x0370 - 0x0370)
class UMassVisualizationProcessor : public UMassRepresentationProcessor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizationProcessor">();
	}
	static class UMassVisualizationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassVisualizationProcessor>();
	}
};

// Class MassRepresentation.MassRepresentationFragmentDestructor
// 0x02A8 (0x0380 - 0x00D8)
class UMassRepresentationFragmentDestructor final : public UMassObserverProcessor
{
public:
	uint8                                         Pad_208A[0x2A8];                                   // 0x00D8(0x02A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassRepresentationFragmentDestructor">();
	}
	static class UMassRepresentationFragmentDestructor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassRepresentationFragmentDestructor>();
	}
};

// Class MassRepresentation.MassRepresentationSubsystem
// 0x0098 (0x00D0 - 0x0038)
class UMassRepresentationSubsystem : public UMassSubsystemBase
{
public:
	TArray<TSubclassOf<class AActor>>             TemplateActors;                                    // 0x0038(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UMassVisualizationComponent*            VisualizationComponent;                            // 0x0048(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMassVisualizer*                        Visualizer;                                        // 0x0050(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMassActorSpawnerSubsystem*             ActorSpawnerSubsystem;                             // 0x0058(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_208B[0x10];                                    // 0x0060(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UWorldPartitionSubsystem*               WorldPartitionSubsystem;                           // 0x0070(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_208C[0x58];                                    // 0x0078(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassRepresentationSubsystem">();
	}
	static class UMassRepresentationSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassRepresentationSubsystem>();
	}
};

// Class MassRepresentation.MassStationaryDistanceVisualizationTrait
// 0x0000 (0x0120 - 0x0120)
class UMassStationaryDistanceVisualizationTrait final : public UMassDistanceVisualizationTrait
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassStationaryDistanceVisualizationTrait">();
	}
	static class UMassStationaryDistanceVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassStationaryDistanceVisualizationTrait>();
	}
};

// Class MassRepresentation.MassStationaryISMRepresentationFragmentDestructor
// 0x02A8 (0x0380 - 0x00D8)
class UMassStationaryISMRepresentationFragmentDestructor final : public UMassObserverProcessor
{
public:
	uint8                                         Pad_208D[0x2A8];                                   // 0x00D8(0x02A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassStationaryISMRepresentationFragmentDestructor">();
	}
	static class UMassStationaryISMRepresentationFragmentDestructor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassStationaryISMRepresentationFragmentDestructor>();
	}
};

// Class MassRepresentation.MassStationaryISMSwitcherProcessor
// 0x02A0 (0x0360 - 0x00C0)
class UMassStationaryISMSwitcherProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_208E[0x2A0];                                   // 0x00C0(0x02A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassStationaryISMSwitcherProcessor">();
	}
	static class UMassStationaryISMSwitcherProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassStationaryISMSwitcherProcessor>();
	}
};

// Class MassRepresentation.MassStationaryVisualizationTrait
// 0x0000 (0x0140 - 0x0140)
class UMassStationaryVisualizationTrait final : public UMassVisualizationTrait
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassStationaryVisualizationTrait">();
	}
	static class UMassStationaryVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassStationaryVisualizationTrait>();
	}
};

// Class MassRepresentation.MassUpdateISMProcessor
// 0x02A0 (0x0360 - 0x00C0)
class UMassUpdateISMProcessor : public UMassProcessor
{
public:
	uint8                                         Pad_208F[0x2A0];                                   // 0x00C0(0x02A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassUpdateISMProcessor">();
	}
	static class UMassUpdateISMProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassUpdateISMProcessor>();
	}
};

// Class MassRepresentation.MassVisualizationComponent
// 0x0160 (0x0208 - 0x00A8)
class UMassVisualizationComponent final : public UActorComponent
{
public:
	TArray<struct FMassInstancedStaticMeshInfo>   InstancedStaticMeshInfos;                          // 0x00A8(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_2090[0x150];                                   // 0x00B8(0x0150)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizationComponent">();
	}
	static class UMassVisualizationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassVisualizationComponent>();
	}
};

// Class MassRepresentation.MassVisualizationLODProcessor
// 0x0AA0 (0x0B60 - 0x00C0)
class alignas(0x10) UMassVisualizationLODProcessor : public UMassProcessor
{
public:
	uint8                                         Pad_2091[0xA88];                                   // 0x00C0(0x0A88)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          FilterTag;                                         // 0x0B48(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bDoAdjustmentFromCount;                            // 0x0B50(0x0001)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2092[0xF];                                     // 0x0B51(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizationLODProcessor">();
	}
	static class UMassVisualizationLODProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassVisualizationLODProcessor>();
	}
};

// Class MassRepresentation.MassVisualizer
// 0x0008 (0x02A8 - 0x02A0)
class AMassVisualizer final : public AActor
{
public:
	class UMassVisualizationComponent*            VisComponent;                                      // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizer">();
	}
	static class AMassVisualizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMassVisualizer>();
	}
};

}

