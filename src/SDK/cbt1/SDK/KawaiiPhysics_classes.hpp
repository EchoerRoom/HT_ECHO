#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KawaiiPhysics

#include "Basic.hpp"

#include "StructUtils_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "KawaiiPhysics_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class KawaiiPhysics.AnimNotifyState_KawaiiPhysicsAddExternalForce
// 0x0038 (0x0068 - 0x0030)
class UAnimNotifyState_KawaiiPhysicsAddExternalForce final : public UAnimNotifyState
{
public:
	TArray<struct FInstancedStruct>               AdditionalExternalForces;                          // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  FilterTags;                                        // 0x0040(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                          bFilterExactMatch;                                 // 0x0060(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D35[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_KawaiiPhysicsAddExternalForce">();
	}
	static class UAnimNotifyState_KawaiiPhysicsAddExternalForce* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_KawaiiPhysicsAddExternalForce>();
	}
};

// Class KawaiiPhysics.AnimNotify_KawaiiPhysicsAddExternalForce
// 0x0038 (0x0070 - 0x0038)
class UAnimNotify_KawaiiPhysicsAddExternalForce final : public UAnimNotify
{
public:
	TArray<struct FInstancedStruct>               AdditionalExternalForces;                          // 0x0038(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  FilterTags;                                        // 0x0048(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                          bFilterExactMatch;                                 // 0x0068(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D36[0x7];                                     // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotify_KawaiiPhysicsAddExternalForce">();
	}
	static class UAnimNotify_KawaiiPhysicsAddExternalForce* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_KawaiiPhysicsAddExternalForce>();
	}
};

// Class KawaiiPhysics.KawaiiPhysicsBoneConstraintsDataAsset
// 0x0018 (0x0048 - 0x0030)
class UKawaiiPhysicsBoneConstraintsDataAsset final : public UDataAsset
{
public:
	uint8                                         Pad_4D37[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FModifyBoneConstraintData>      BoneConstraintsData;                               // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KawaiiPhysicsBoneConstraintsDataAsset">();
	}
	static class UKawaiiPhysicsBoneConstraintsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKawaiiPhysicsBoneConstraintsDataAsset>();
	}
};

// Class KawaiiPhysics.KawaiiPhysics_CustomExternalForce
// 0x0008 (0x0030 - 0x0028)
class UKawaiiPhysics_CustomExternalForce final : public UObject
{
public:
	bool                                          bIsEnabled;                                        // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDrawDebug;                                        // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D38[0x6];                                     // 0x002A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Apply(struct FAnimNode_KawaiiPhysics& Node, int32 ModifyBoneIndex, const class USkeletalMeshComponent* SkelComp, const struct FTransform& BoneTransform);
	bool IsDebugEnabled();
	void PreApply(struct FAnimNode_KawaiiPhysics& Node, const class USkeletalMeshComponent* SkelComp);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KawaiiPhysics_CustomExternalForce">();
	}
	static class UKawaiiPhysics_CustomExternalForce* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKawaiiPhysics_CustomExternalForce>();
	}
};

// Class KawaiiPhysics.KawaiiPhysicsLibrary
// 0x0000 (0x0028 - 0x0028)
class UKawaiiPhysicsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool AddExternalForce(const struct FKawaiiPhysicsReference& KawaiiPhysics, struct FInstancedStruct* ExternalForce, class UObject* Owner, bool bIsOneShot);
	static bool AddExternalForcesToComponent(class USkeletalMeshComponent* MeshComp, TArray<struct FInstancedStruct>& ExternalForces, class UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot);
	static struct FKawaiiPhysicsReference AddExternalForceWithExecResult(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, struct FInstancedStruct* ExternalForce, class UObject* Owner);
	static struct FKawaiiPhysicsReference ConvertToKawaiiPhysics(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
	static void ConvertToKawaiiPhysicsPure(const struct FAnimNodeReference& Node, struct FKawaiiPhysicsReference* KawaiiPhysics, bool* Result);
	static bool GetAllowWorldCollision(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static float GetDummyBoneLength(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static bool GetEnableWind(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static TArray<class FName> GetExcludeBoneNames(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static bool GetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName);
	static float GetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName);
	static int32 GetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName);
	static struct FRotator GetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName);
	static struct FTransform GetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName);
	static struct FVector GetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName);
	static void GetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName, int32* Value);
	static struct FVector GetGravity(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static class UKawaiiPhysicsLimitsDataAsset* GetLimitsDataAsset(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static bool GetNeedWarmUp(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static struct FKawaiiPhysicsSettings GetPhysicsSettings(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static class FName GetRootBoneName(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static float GetTeleportDistanceThreshold(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static float GetTeleportRotationThreshold(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static float GetWindScale(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static bool RemoveExternalForcesFromComponent(class USkeletalMeshComponent* MeshComp, class UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch);
	static struct FKawaiiPhysicsReference ResetDynamics(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static struct FKawaiiPhysicsReference SetAllowWorldCollision(const struct FKawaiiPhysicsReference& KawaiiPhysics, bool bAllowWorldCollision);
	static struct FKawaiiPhysicsReference SetDummyBoneLength(const struct FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength);
	static struct FKawaiiPhysicsReference SetEnableWind(const struct FKawaiiPhysicsReference& KawaiiPhysics, bool bEnableWind);
	static struct FKawaiiPhysicsReference SetExcludeBoneNames(const struct FKawaiiPhysicsReference& KawaiiPhysics, TArray<class FName>& ExcludeBoneNames);
	static struct FKawaiiPhysicsReference SetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName, bool Value);
	static struct FKawaiiPhysicsReference SetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName, float Value);
	static struct FKawaiiPhysicsReference SetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName, int32 Value);
	static struct FKawaiiPhysicsReference SetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName, const struct FRotator& Value);
	static struct FKawaiiPhysicsReference SetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName, const struct FTransform& Value);
	static struct FKawaiiPhysicsReference SetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName, const struct FVector& Value);
	static void SetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult* ExecResult, const struct FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, class FName PropertyName, const int32& Value);
	static struct FKawaiiPhysicsReference SetGravity(const struct FKawaiiPhysicsReference& KawaiiPhysics, const struct FVector& Gravity);
	static struct FKawaiiPhysicsReference SetLimitsDataAsset(const struct FKawaiiPhysicsReference& KawaiiPhysics, class UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset);
	static struct FKawaiiPhysicsReference SetNeedWarmUp(const struct FKawaiiPhysicsReference& KawaiiPhysics, bool bNeedWarmUp);
	static struct FKawaiiPhysicsReference SetPhysicsSettings(const struct FKawaiiPhysicsReference& KawaiiPhysics, struct FKawaiiPhysicsSettings& PhysicsSettings);
	static struct FKawaiiPhysicsReference SetRootBoneName(const struct FKawaiiPhysicsReference& KawaiiPhysics, class FName& RootBoneName);
	static struct FKawaiiPhysicsReference SetTeleportDistanceThreshold(const struct FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold);
	static struct FKawaiiPhysicsReference SetTeleportRotationThreshold(const struct FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold);
	static struct FKawaiiPhysicsReference SetWindScale(const struct FKawaiiPhysicsReference& KawaiiPhysics, float WindScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KawaiiPhysicsLibrary">();
	}
	static class UKawaiiPhysicsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKawaiiPhysicsLibrary>();
	}
};

// Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
// 0x0048 (0x0078 - 0x0030)
class UKawaiiPhysicsLimitsDataAsset final : public UDataAsset
{
public:
	uint8                                         Pad_4D65[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSphericalLimit>                SphericalLimits;                                   // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                  CapsuleLimits;                                     // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoxLimit>                      BoxLimits;                                         // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                   PlanarLimits;                                      // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KawaiiPhysicsLimitsDataAsset">();
	}
	static class UKawaiiPhysicsLimitsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKawaiiPhysicsLimitsDataAsset>();
	}
};

}
