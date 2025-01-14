#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmartObjectsModule

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SmartObjectsModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "WorldConditions_structs.hpp"
#include "WorldConditions_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "StructUtils_structs.hpp"


namespace SDK
{

// Class SmartObjectsModule.EnvQueryGenerator_SmartObjects
// 0x0120 (0x0170 - 0x0050)
class UEnvQueryGenerator_SmartObjects final : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>           QueryOriginContext;                                // 0x0050(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2027[0x8];                                     // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSmartObjectRequestFilter              SmartObjectRequestFilter;                          // 0x0060(0x00F0)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FVector                                QueryBoxExtent;                                    // 0x0150(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bOnlyClaimable;                                    // 0x0168(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2028[0x7];                                     // 0x0169(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_SmartObjects">();
	}
	static class UEnvQueryGenerator_SmartObjects* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_SmartObjects>();
	}
};

// Class SmartObjectsModule.EnvQueryItemType_SmartObject
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_SmartObject final : public UEnvQueryItemType_VectorBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryItemType_SmartObject">();
	}
	static class UEnvQueryItemType_SmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryItemType_SmartObject>();
	}
};

// Class SmartObjectsModule.SmartObjectSettings
// 0x0018 (0x0050 - 0x0038)
class USmartObjectSettings final : public UDeveloperSettings
{
public:
	ESmartObjectTagFilteringPolicy                DefaultUserTagsFilteringPolicy;                    // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESmartObjectTagMergingPolicy                  DefaultActivityTagsMergingPolicy;                  // 0x0039(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2029[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class USmartObjectWorldConditionSchema> DefaultWorldConditionSchemaClass;                  // 0x0040(0x0008)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldExcludePreConditionsOnDedicatedClient;      // 0x0048(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_202A[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSettings">();
	}
	static class USmartObjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSettings>();
	}
};

// Class SmartObjectsModule.BlackboardKeyType_SOClaimHandle
// 0x0020 (0x0050 - 0x0030)
class UBlackboardKeyType_SOClaimHandle final : public UBlackboardKeyType
{
public:
	struct FSmartObjectClaimHandle                Handle;                                            // 0x0030(0x0020)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_SOClaimHandle">();
	}
	static class UBlackboardKeyType_SOClaimHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_SOClaimHandle>();
	}
};

// Class SmartObjectsModule.GenericSmartObject
// 0x0008 (0x02A8 - 0x02A0)
class AGenericSmartObject final : public AActor
{
public:
	class USmartObjectComponent*                  SOComponent;                                       // 0x02A0(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenericSmartObject">();
	}
	static class AGenericSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGenericSmartObject>();
	}
};

// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USmartObjectBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool AddMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors);
	static bool AddOrRemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors, const bool bAdd);
	static bool AddOrRemoveSmartObject(class AActor* SmartObject, const bool bEnabled);
	static bool AddSmartObject(class AActor* SmartObjectActor);
	static class FString Conv_SmartObjectClaimHandleToString(const struct FSmartObjectClaimHandle& Result);
	static class FString Conv_SmartObjectDefinitionToString(const class USmartObjectDefinition* Definition);
	static class FString Conv_SmartObjectHandleToString(const struct FSmartObjectHandle& Handle);
	static class FString Conv_SmartObjectRequestResultToString(const struct FSmartObjectRequestResult& Result);
	static class FString Conv_SmartObjectSlotHandleToString(const struct FSmartObjectSlotHandle& Handle);
	static bool Equal_SmartObjectHandleSmartObjectHandle(const struct FSmartObjectHandle& A, const struct FSmartObjectHandle& B);
	static bool Equal_SmartObjectSlotHandleSmartObjectSlotHandle(const struct FSmartObjectSlotHandle& A, const struct FSmartObjectSlotHandle& B);
	static bool FindSmartObjectsInActor(const struct FSmartObjectRequestFilter& Filter, class AActor* SearchActor, TArray<struct FSmartObjectRequestResult>* OutResults, const class AActor* UserActor);
	static bool FindSmartObjectsInComponent(const struct FSmartObjectRequestFilter& Filter, class USmartObjectComponent* SmartObjectComponent, TArray<struct FSmartObjectRequestResult>* OutResults, const class AActor* UserActor);
	static bool FindSmartObjectsInList(class UObject* WorldContextObject, const struct FSmartObjectRequestFilter& Filter, const TArray<class AActor*>& ActorList, TArray<struct FSmartObjectRequestResult>* OutResults, const class AActor* UserActor);
	static bool FindSmartObjectsInTargetingRequest(class UObject* WorldContextObject, const struct FSmartObjectRequestFilter& Filter, const struct FTargetingRequestHandle& TargetingHandle, TArray<struct FSmartObjectRequestResult>* OutResults, const class AActor* UserActor);
	static struct FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FSmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const class FName& KeyName);
	static bool IsValidSmartObjectClaimHandle(const struct FSmartObjectClaimHandle& Handle);
	static bool IsValidSmartObjectHandle(const struct FSmartObjectHandle& Handle);
	static bool IsValidSmartObjectSlotHandle(const struct FSmartObjectSlotHandle& Handle);
	static struct FSmartObjectClaimHandle MarkSmartObjectSlotAsClaimed(class UObject* WorldContextObject, const struct FSmartObjectSlotHandle& SlotHandle, const class AActor* UserActor, ESmartObjectClaimPriority ClaimPriority);
	static bool MarkSmartObjectSlotAsFree(class UObject* WorldContextObject, const struct FSmartObjectClaimHandle& ClaimHandle);
	static const class USmartObjectBehaviorDefinition* MarkSmartObjectSlotAsOccupied(class UObject* WorldContextObject, const struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	static bool NotEqual_SmartObjectHandleSmartObjectHandle(const struct FSmartObjectHandle& A, const struct FSmartObjectHandle& B);
	static bool NotEqual_SmartObjectSlotHandleSmartObjectSlotHandle(const struct FSmartObjectSlotHandle& A, const struct FSmartObjectSlotHandle& B);
	static bool RemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors);
	static bool RemoveSmartObject(class AActor* SmartObjectActor);
	static void SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FSmartObjectClaimHandle& Value);
	static bool SetMultipleSmartObjectsEnabled(const TArray<class AActor*>& SmartObjectActors, const bool bEnabled);
	static bool SetSmartObjectEnabled(class AActor* SmartObjectActor, const bool bEnabled);
	static void SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const class FName& KeyName, const struct FSmartObjectClaimHandle& Value);
	static struct FSmartObjectClaimHandle SmartObjectClaimHandle_Invalid();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectBlueprintFunctionLibrary">();
	}
	static class USmartObjectBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectBlueprintFunctionLibrary>();
	}
};

// Class SmartObjectsModule.SmartObjectCollection
// 0x00B0 (0x0350 - 0x02A0)
class ASmartObjectCollection final : public AActor
{
public:
	struct FBox                                   Bounds;                                            // 0x02A0(0x0038)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSmartObjectCollectionEntry>    CollectionEntries;                                 // 0x02D8(0x0010)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct FSmartObjectHandle, struct FSoftObjectPath> RegisteredIdToObjectMap;                           // 0x02E8(0x0050)(Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectDefinition*>         Definitions;                                       // 0x0338(0x0010)(Edit, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_2043[0x8];                                     // 0x0348(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectCollection">();
	}
	static class ASmartObjectCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectCollection>();
	}
};

// Class SmartObjectsModule.SmartObjectComponent
// 0x0080 (0x02B0 - 0x0230)
#pragma pack(push, 0x1)
class alignas(0x10) USmartObjectComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_             OnSmartObjectEvent;                                // 0x0230(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_2044[0x18];                                    // 0x0240(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSmartObjectDefinitionReference        DefinitionRef;                                     // 0x0258(0x0028)(Edit, Net, Protected, NativeAccessSpecifierProtected)
	struct FSmartObjectHandle                     RegisteredHandle;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2045[0x10];                                    // 0x0288(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bCanBePartOfCollection;                            // 0x0298(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2046[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USmartObjectDefinition*                 CachedDefinitionAssetVariation;                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void ReceiveOnEvent(const struct FSmartObjectEventData& EventData, const class AActor* Interactor);
	void SetDefinition(class USmartObjectDefinition* DefinitionAsset);

	const class USmartObjectDefinition* GetDefinition() const;
	bool IsBoundToSimulation() const;
	bool IsSmartObjectEnabled() const;
	bool IsSmartObjectEnabledForReason(const struct FGameplayTag& ReasonTag) const;
	bool SetSmartObjectEnabled(const bool bEnable) const;
	bool SetSmartObjectEnabledForReason(const struct FGameplayTag& ReasonTag, const bool bEnabled) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectComponent">();
	}
	static class USmartObjectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectComponent>();
	}
};
#pragma pack(pop)

// Class SmartObjectsModule.SmartObjectContainerRenderingComponent
// 0x0000 (0x0520 - 0x0520)
class USmartObjectContainerRenderingComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectContainerRenderingComponent">();
	}
	static class USmartObjectContainerRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectContainerRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectDebugRenderingComponent
// 0x0000 (0x0570 - 0x0570)
class USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectDebugRenderingComponent">();
	}
	static class USmartObjectDebugRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectDebugRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectBehaviorDefinition
// 0x0000 (0x0028 - 0x0028)
class USmartObjectBehaviorDefinition : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectBehaviorDefinition">();
	}
	static class USmartObjectBehaviorDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectBehaviorDefinition>();
	}
};

// Class SmartObjectsModule.SmartObjectDefinition
// 0x0110 (0x0140 - 0x0030)
class USmartObjectDefinition final : public UDataAsset
{
public:
	uint8                                         Pad_2049[0x10];                                    // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInstancedPropertyBag                  Parameters;                                        // 0x0040(0x0010)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGuid                                  ParametersID;                                      // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                  RootID;                                            // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSmartObjectDefinitionPropertyBinding> PropertyBindings;                                  // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FSmartObjectSlotDefinition>     Slots;                                             // 0x0080(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions;                        // 0x0090(0x0010)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                      UserTagFilter;                                     // 0x00A0(0x0048)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FWorldConditionQueryDefinition         Preconditions;                                     // 0x00E8(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ActivityTags;                                      // 0x0100(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FSmartObjectDefinitionDataProxy> DefinitionData;                                    // 0x0120(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class USmartObjectWorldConditionSchema> WorldConditionSchemaClass;                         // 0x0130(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ESmartObjectTagMergingPolicy                  ActivityTagsMergingPolicy;                         // 0x0138(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ESmartObjectTagFilteringPolicy                UserTagsFilteringPolicy;                           // 0x0139(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_204A[0x6];                                     // 0x013A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FSmartObjectSlotDefinition GetMutableSlot(const int32 Param_Index);
	void SetUserTagFilter(const struct FGameplayTagQuery& InUserTagFilter);

	const struct FGameplayTagContainer GetActivityTags() const;
	struct FBox GetBounds() const;
	void GetSlotActivityTags(const int32 SlotIndex, struct FGameplayTagContainer* OutActivityTags) const;
	struct FTransform GetSlotWorldTransform(const int32 SlotIndex, const struct FTransform& OwnerTransform) const;
	const struct FGameplayTagQuery GetUserTagFilter() const;
	ESmartObjectTagFilteringPolicy GetUserTagsFilteringPolicy() const;
	bool IsValidSlotIndex(const int32 SlotIndex) const;
	const TArray<struct FSmartObjectSlotDefinition> K2_GetSlots() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectDefinition">();
	}
	static class USmartObjectDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectDefinition>();
	}
};

// Class SmartObjectsModule.SmartObjectSpacePartition
// 0x0000 (0x0028 - 0x0028)
class USmartObjectSpacePartition : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSpacePartition">();
	}
	static class USmartObjectSpacePartition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSpacePartition>();
	}
};

// Class SmartObjectsModule.SmartObjectHashGrid
// 0x00A8 (0x00D0 - 0x0028)
class USmartObjectHashGrid final : public USmartObjectSpacePartition
{
public:
	uint8                                         Pad_204F[0xA8];                                    // 0x0028(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectHashGrid">();
	}
	static class USmartObjectHashGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectHashGrid>();
	}
};

// Class SmartObjectsModule.SmartObjectOctree
// 0x00C8 (0x00F0 - 0x0028)
class USmartObjectOctree final : public USmartObjectSpacePartition
{
public:
	uint8                                         Pad_2050[0xC8];                                    // 0x0028(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectOctree">();
	}
	static class USmartObjectOctree* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectOctree>();
	}
};

// Class SmartObjectsModule.SmartObjectPersistentCollection
// 0x00B8 (0x0358 - 0x02A0)
class ASmartObjectPersistentCollection final : public AActor
{
public:
	struct FSmartObjectContainer                  SmartObjectContainer;                              // 0x02A0(0x00B0)(Edit, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2051[0x8];                                     // 0x0350(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectPersistentCollection">();
	}
	static class ASmartObjectPersistentCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectPersistentCollection>();
	}
};

// Class SmartObjectsModule.SmartObjectRenderingComponent
// 0x0000 (0x0520 - 0x0520)
class USmartObjectRenderingComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectRenderingComponent">();
	}
	static class USmartObjectRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectSubsystem
// 0x0170 (0x01A0 - 0x0030)
class USmartObjectSubsystem final : public UWorldSubsystem
{
public:
	struct FSoftClassPath                         SpacePartitionClassName;                           // 0x0030(0x0020)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USmartObjectSpacePartition> SpacePartitionClass;                               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmartObjectSpacePartition*             SpacePartition;                                    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASmartObjectSubsystemRenderingActor*    RenderingActor;                                    // 0x0060(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectContainer                  SmartObjectContainer;                              // 0x0068(0x00B0)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2052[0x10];                                    // 0x0118(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FSmartObjectHandle, struct FSmartObjectRuntime> RuntimeSmartObjects;                               // 0x0128(0x0050)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectComponent*>          RegisteredSOComponents;                            // 0x0178(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class USmartObjectComponent*>          PendingSmartObjectRegistration;                    // 0x0188(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_2053[0x8];                                     // 0x0198(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddTagToInstance(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& Tag);
	void AddTagToSlot(const struct FSmartObjectSlotHandle& SlotHandle, const struct FGameplayTag& Tag);
	struct FSmartObjectClaimHandle Claim(const struct FSmartObjectRequestResult& RequestResult, const class AActor* UserActor);
	const class USmartObjectBehaviorDefinition* GetBehaviorDefinition(const struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	const class USmartObjectBehaviorDefinition* GetBehaviorDefinitionByRequestResult(const struct FSmartObjectRequestResult& RequestResult, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	bool Release(const struct FSmartObjectClaimHandle& ClaimHandle);
	void RemoveTagFromInstance(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& Tag);
	bool RemoveTagFromSlot(const struct FSmartObjectSlotHandle& SlotHandle, const struct FGameplayTag& Tag);
	bool SetEnabled(const struct FSmartObjectHandle& Handle, const bool bEnabled);
	bool SetEnabledForReason(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& ReasonTag, const bool bEnabled);
	bool SetSlotEnabled(const struct FSmartObjectSlotHandle& SlotHandle, const bool bEnabled);
	const class USmartObjectBehaviorDefinition* Use(const struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);

	struct FSmartObjectRequestResult FindSmartObject(const struct FSmartObjectRequest& Request, const class AActor* UserActor) const;
	bool FindSmartObjects(const struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults, const class AActor* UserActor) const;
	bool FindSmartObjects_BP(const struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults, const class AActor* UserActor) const;
	void GetAllSlots(const struct FSmartObjectHandle& Handle, TArray<struct FSmartObjectSlotHandle>* OutSlots) const;
	const struct FGameplayTagContainer GetInstanceTags(const struct FSmartObjectHandle& Handle) const;
	bool GetSlotLocation(const struct FSmartObjectClaimHandle& ClaimHandle, struct FVector* OutSlotLocation) const;
	ESmartObjectSlotState GetSlotState(const struct FSmartObjectSlotHandle& SlotHandle) const;
	const struct FGameplayTagContainer GetSlotTags(const struct FSmartObjectSlotHandle& SlotHandle) const;
	bool GetSlotTransform(const struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform* OutSlotTransform) const;
	bool GetSlotTransformFromRequestResult(const struct FSmartObjectRequestResult& RequestResult, struct FTransform* OutSlotTransform) const;
	class USmartObjectComponent* GetSmartObjectComponent(const struct FSmartObjectClaimHandle& ClaimHandle, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated) const;
	class USmartObjectComponent* GetSmartObjectComponentByRequestResult(const struct FSmartObjectRequestResult& Result, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated) const;
	bool IsEnabled(const struct FSmartObjectHandle& Handle) const;
	bool IsEnabledForReason(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& ReasonTag) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSubsystem">();
	}
	static class USmartObjectSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSubsystem>();
	}
};

// Class SmartObjectsModule.SmartObjectSubsystemRenderingComponent
// 0x0000 (0x0570 - 0x0570)
class USmartObjectSubsystemRenderingComponent final : public USmartObjectDebugRenderingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSubsystemRenderingComponent">();
	}
	static class USmartObjectSubsystemRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSubsystemRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectSubsystemRenderingActor
// 0x0008 (0x02A8 - 0x02A0)
class ASmartObjectSubsystemRenderingActor final : public AActor
{
public:
	class USmartObjectSubsystemRenderingComponent* RenderingComponent;                                // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSubsystemRenderingActor">();
	}
	static class ASmartObjectSubsystemRenderingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectSubsystemRenderingActor>();
	}
};

// Class SmartObjectsModule.SmartObjectTest
// 0x0008 (0x0030 - 0x0028)
class USmartObjectTest : public UObject
{
public:
	class ASmartObjectTestingActor*               SmartObjectTestingActor;                           // 0x0028(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectTest">();
	}
	static class USmartObjectTest* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectTest>();
	}
};

// Class SmartObjectsModule.SmartObjectSimpleQueryTest
// 0x0140 (0x0170 - 0x0030)
class USmartObjectSimpleQueryTest final : public USmartObjectTest
{
public:
	struct FSmartObjectRequest                    Request;                                           // 0x0030(0x0130)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSmartObjectRequestResult>      Results;                                           // 0x0160(0x0010)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSimpleQueryTest">();
	}
	static class USmartObjectSimpleQueryTest* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSimpleQueryTest>();
	}
};

// Class SmartObjectsModule.SmartObjectTestRenderingComponent
// 0x0000 (0x0570 - 0x0570)
class USmartObjectTestRenderingComponent final : public USmartObjectDebugRenderingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectTestRenderingComponent">();
	}
	static class USmartObjectTestRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectTestRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectTestingActor
// 0x0028 (0x02C8 - 0x02A0)
class ASmartObjectTestingActor final : public AActor
{
public:
	TArray<class USmartObjectTest*>               Tests;                                             // 0x02A0(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class USmartObjectTestRenderingComponent*     RenderingComponent;                                // 0x02B0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmartObjectSubsystem*                  SmartObjectSubsystem;                              // 0x02B8(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRunTestsEachFrame;                                // 0x02C0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2064[0x7];                                     // 0x02C1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ResetTests();
	void RunTests();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectTestingActor">();
	}
	static class ASmartObjectTestingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectTestingActor>();
	}
};

// Class SmartObjectsModule.SmartObjectSlotValidationFilter
// 0x0108 (0x0130 - 0x0028)
class USmartObjectSlotValidationFilter final : public UObject
{
public:
	struct FSmartObjectSlotValidationParams       EntryParameters;                                   // 0x0028(0x0080)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                          bUseEntryParametersForExit;                        // 0x00A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2065[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSmartObjectSlotValidationParams       ExitParameters;                                    // 0x00B0(0x0080)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSlotValidationFilter">();
	}
	static class USmartObjectSlotValidationFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSlotValidationFilter>();
	}
};

// Class SmartObjectsModule.SmartObjectUserComponent
// 0x0008 (0x00B0 - 0x00A8)
class USmartObjectUserComponent final : public UActorComponent
{
public:
	TSubclassOf<class USmartObjectSlotValidationFilter> ValidationFilter;                                  // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectUserComponent">();
	}
	static class USmartObjectUserComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectUserComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectWorldConditionSchema
// 0x0040 (0x0078 - 0x0038)
class USmartObjectWorldConditionSchema final : public UWorldConditionSchema
{
public:
	uint8                                         Pad_2066[0x40];                                    // 0x0038(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectWorldConditionSchema">();
	}
	static class USmartObjectWorldConditionSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectWorldConditionSchema>();
	}
};

}

