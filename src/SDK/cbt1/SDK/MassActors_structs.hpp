#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassActors

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "MassCommon_structs.hpp"
#include "Engine_structs.hpp"
#include "MassEntity_structs.hpp"


namespace SDK
{

// Enum MassActors.ESpawnRequestStatus
// NumValues: 0x0007
enum class ESpawnRequestStatus : uint8
{
	None                                     = 0,
	Pending                                  = 1,
	Processing                               = 2,
	Succeeded                                = 3,
	Failed                                   = 4,
	RetryPending                             = 5,
	ESpawnRequestStatus_MAX                  = 6,
};

// Enum MassActors.EAgentComponentState
// NumValues: 0x0009
enum class EAgentComponentState : uint8
{
	None                                     = 0,
	EntityPendingCreation                    = 1,
	EntityCreated                            = 2,
	PuppetPendingInitialization              = 3,
	PuppetInitialized                        = 4,
	PuppetPaused                             = 5,
	PuppetPendingReplication                 = 6,
	PuppetReplicatedOrphan                   = 7,
	EAgentComponentState_MAX                 = 8,
};

// ScriptStruct MassActors.MassActorSpawnRequestHandle
// 0x0000 (0x0008 - 0x0008)
struct FMassActorSpawnRequestHandle final : public FIndexedHandleBase
{
};

// ScriptStruct MassActors.MassActorSpawnRequest
// 0x00D0 (0x00D0 - 0x0000)
struct alignas(0x10) FMassActorSpawnRequest final
{
public:
	uint8                                         Pad_1F61[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AActor>                     Template;                                          // 0x0008(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F62[0x90];                                    // 0x0010(0x0090)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 SpawnedActor;                                      // 0x00A0(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F63[0x28];                                    // 0x00A8(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassActors.MassGuidFragment
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x04) FMassGuidFragment final : public FObjectWrapperFragment
{
public:
	uint8                                         Pad_1F64[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassActors.MassActorInstanceFragment
// 0x0020 (0x0020 - 0x0000)
struct FMassActorInstanceFragment final : public FMassFragment
{
public:
	struct FActorInstanceHandle                   Handle;                                            // 0x0000(0x0020)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MassActors.MassActorFragment
// 0x000C (0x000C - 0x0000)
struct FMassActorFragment final : public FObjectWrapperFragment
{
public:
	TWeakObjectPtr<class AActor>                  Actor;                                             // 0x0000(0x0008)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F65[0x4];                                     // 0x0008(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassActors.MassAgentInitializationQueue
// 0x0010 (0x0010 - 0x0000)
struct FMassAgentInitializationQueue final
{
public:
	TArray<class UMassAgentComponent*>            AgentComponents;                                   // 0x0000(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// ScriptStruct MassActors.CapsuleComponentWrapperFragment
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FCapsuleComponentWrapperFragment final : public FObjectWrapperFragment
{
public:
	uint8                                         Pad_1F66[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassActors.MassCapsuleTransformCopyToMassTag
// 0x0000 (0x0001 - 0x0001)
struct FMassCapsuleTransformCopyToMassTag final : public FMassTag
{
};

// ScriptStruct MassActors.MassCapsuleTransformCopyToActorTag
// 0x0000 (0x0001 - 0x0001)
struct FMassCapsuleTransformCopyToActorTag final : public FMassTag
{
};

// ScriptStruct MassActors.CharacterMovementComponentWrapperFragment
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FCharacterMovementComponentWrapperFragment final : public FObjectWrapperFragment
{
public:
	uint8                                         Pad_1F67[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassActors.MassCharacterMovementCopyToMassTag
// 0x0000 (0x0001 - 0x0001)
struct FMassCharacterMovementCopyToMassTag final : public FMassTag
{
};

// ScriptStruct MassActors.MassCharacterMovementCopyToActorTag
// 0x0000 (0x0001 - 0x0001)
struct FMassCharacterMovementCopyToActorTag final : public FMassTag
{
};

// ScriptStruct MassActors.MassCharacterOrientationCopyToMassTag
// 0x0000 (0x0001 - 0x0001)
struct FMassCharacterOrientationCopyToMassTag final : public FMassTag
{
};

// ScriptStruct MassActors.MassCharacterOrientationCopyToActorTag
// 0x0000 (0x0001 - 0x0001)
struct FMassCharacterOrientationCopyToActorTag final : public FMassTag
{
};

// ScriptStruct MassActors.MassSceneComponentWrapperFragment
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FMassSceneComponentWrapperFragment final : public FObjectWrapperFragment
{
public:
	uint8                                         Pad_1F68[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MassActors.MassSceneComponentLocationCopyToMassTag
// 0x0000 (0x0001 - 0x0001)
struct FMassSceneComponentLocationCopyToMassTag final : public FMassTag
{
};

// ScriptStruct MassActors.MassSceneComponentLocationCopyToActorTag
// 0x0000 (0x0001 - 0x0001)
struct FMassSceneComponentLocationCopyToActorTag final : public FMassTag
{
};

// ScriptStruct MassActors.DataFragment_BehaviorTreeComponentWrapper
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FDataFragment_BehaviorTreeComponentWrapper final : public FObjectWrapperFragment
{
public:
	uint8                                         Pad_1F69[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

