#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HTAnimSharing

#include "Basic.hpp"

#include "HTAnimSharing_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class HTAnimSharing.HTAnimationSharingData
// 0x0010 (0x0040 - 0x0030)
class UHTAnimationSharingData final : public UDataAsset
{
public:
	TArray<struct FHTAnimationSharingSkeletonSetup> AnimationSharingSkeletonSetups;                    // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimationSharingData">();
	}
	static class UHTAnimationSharingData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAnimationSharingData>();
	}
};

// Class HTAnimSharing.HTAnimationSharingManager
// 0x00A0 (0x00C8 - 0x0028)
class UHTAnimationSharingManager : public UObject
{
public:
	class UHTAnimationSharingSettings*            HTAnimationSharingSettings;                        // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHTAnimationSharingData*                HTAnimationSharingData;                            // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class USkeleton*, class UHTAnimSharingInstance*> AnimSharingInstanceMap;                            // 0x0038(0x0050)(BlueprintVisible, NativeAccessSpecifierPublic)
	class AHTSharingActor*                        SharingActor;                                      // 0x0088(0x0008)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31ED[0x38];                                    // 0x0090(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USkeletalMeshComponent* GetAdditiveAnimMeshComponent(class AActor* PlayActor);
	static float HTAdditivePlayAnimMontage(class AActor* PlayActor, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName);
	static class UHTAnimSharingAdditiveInstance* HTGetActorAdditiveAnimInstance(class AActor* PlayActor);
	static class UHTAnimationSharingManager* HTGetAnimationSharingManager(class AActor* InActor);
	static class UAnimMontage* HTHasAdditivePlayAnimMontageByGroup(class AActor* PlayActor, class FName InGroupName);
	static float HTSharingPlayAnimMontage(class AActor* PlayActor, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName);

	float AdditivePlayAnimMontage(class AActor* PlayActor, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName);
	void RegisterActor(class AActor* InActor);
	float SharingPlayAnimMontage(class AActor* PlayActor, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName);
	void UnRegisterActor(class AActor* InActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimationSharingManager">();
	}
	static class UHTAnimationSharingManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAnimationSharingManager>();
	}
};

// Class HTAnimSharing.HTAnimationSharingSettings
// 0x0040 (0x0078 - 0x0038)
class UHTAnimationSharingSettings final : public UDeveloperSettings
{
public:
	TSubclassOf<class UHTAnimationSharingManager> HTAnimationSharingManagerClass;                    // 0x0038(0x0008)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UHTAnimationSharingData> HTAnimationSharingDataSP;                          // 0x0040(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHTAnimSharingInstance>     HTAnimSharingInstanceClass;                        // 0x0068(0x0008)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AHTSharingActor>            HTSharingActorClass;                               // 0x0070(0x0008)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimationSharingSettings">();
	}
	static class UHTAnimationSharingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAnimationSharingSettings>();
	}
};

// Class HTAnimSharing.HTAnimationSharingStateProcessor
// 0x0000 (0x0028 - 0x0028)
class UHTAnimationSharingStateProcessor : public UObject
{
public:
	void ProcessActorState(int32* OutState, class AActor* InActor, int32 CurrentState, int32 OnDemandState, bool* bShouldProcess);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimationSharingStateProcessor">();
	}
	static class UHTAnimationSharingStateProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAnimationSharingStateProcessor>();
	}
};

// Class HTAnimSharing.HTAnimationSharingSubsystem
// 0x0018 (0x0048 - 0x0030)
class UHTAnimationSharingSubsystem : public UWorldSubsystem
{
public:
	class UHTAnimationSharingManager*             HTAnimationSharingManager;                         // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHTAnimationSharingSettings*            HTAnimationSharingSettings;                        // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHTAnimationSharingData*                HTAnimationSharingData;                            // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static float PlayAnimMontage(class UAnimInstance* AnimInstance, class UAnimMontage* AnimMontage, float InPlayRate, class FName StartSectionName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimationSharingSubsystem">();
	}
	static class UHTAnimationSharingSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAnimationSharingSubsystem>();
	}
};

// Class HTAnimSharing.HTAnimSharingAdditiveInstance
// 0x0030 (0x03A0 - 0x0370)
#pragma pack(push, 0x1)
class alignas(0x10) UHTAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  BaseComponent;                                     // 0x0368(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHTAnimSharingInstance*                 AnimSharingInstance;                               // 0x0370(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InActor;                                           // 0x0378(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 OwnerComponent;                                    // 0x0380(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsInit;                                           // 0x0388(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsCanLeader;                                      // 0x0389(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31F0[0x2];                                     // 0x038A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RemainingTime;                                     // 0x038C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurRemainingTime;                                  // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsDestroy;                                        // 0x0394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31F1[0x3];                                     // 0x0395(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimSharingAdditiveInstance">();
	}
	static class UHTAnimSharingAdditiveInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAnimSharingAdditiveInstance>();
	}
};
#pragma pack(pop)

// Class HTAnimSharing.HTAnimSharingInstance
// 0x0138 (0x0160 - 0x0028)
class UHTAnimSharingInstance final : public UObject
{
public:
	struct FHTAnimationSharingSkeletonSetup       AnimationSharingSkeletonSetup;                     // 0x0028(0x0038)(BlueprintVisible, NativeAccessSpecifierPublic)
	class UHTAnimationSharingManager*             AnimationSharingManager;                           // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint32, struct FHTAnimationSharingSetup> AnimationSharingSetupMap;                          // 0x0068(0x0050)(NativeAccessSpecifierPublic)
	TMap<uint32, struct FHTAnimationSharingInstanceData> AnimationSharingInstanceDataMap;                   // 0x00B8(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class AActor*, struct FHTAnimationSharingStateInfor> RegisterActorMap;                                  // 0x0108(0x0050)(BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UHTAnimationSharingStateProcessor*      AnimationSharingStateProcessor;                    // 0x0158(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimSharingInstance">();
	}
	static class UHTAnimSharingInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAnimSharingInstance>();
	}
};

// Class HTAnimSharing.HTAnimSharingInterface
// 0x0000 (0x0028 - 0x0028)
class IHTAnimSharingInterface final : public IInterface
{
public:
	void OnSetActorLeaderComp(class USkeletalMeshComponent* TargetComp);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimSharingInterface">();
	}
	static class IHTAnimSharingInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IHTAnimSharingInterface>();
	}
};

// Class HTAnimSharing.HTAnimSharingStateInstance
// 0x0020 (0x0390 - 0x0370)
class UHTAnimSharingStateInstance : public UAnimInstance
{
public:
	class UAnimSequence*                          AnimationToPlay;                                   // 0x0368(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PermutationTimeOffset;                             // 0x0370(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0374(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStateBool;                                        // 0x0378(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31F2[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHTAnimSharingInstance*                 Instance;                                          // 0x0380(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_31F3[0x8];                                     // 0x0388(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetInstancedActors(TArray<class AActor*>* Actors);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimSharingStateInstance">();
	}
	static class UHTAnimSharingStateInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAnimSharingStateInstance>();
	}
};

// Class HTAnimSharing.HTAnimSharingTransitionInstance
// 0x0040 (0x03B0 - 0x0370)
class UHTAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  FromComponent;                                     // 0x0368(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent>  ToComponent;                                       // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendTime;                                         // 0x0378(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RemainingTime;                                     // 0x037C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TransitionTime;                                    // 0x0380(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBlendBool;                                        // 0x0384(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31F4[0x3];                                     // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UHTAnimSharingInstance*                 AnimSharingInstance;                               // 0x0388(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InActor;                                           // 0x0390(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsInit;                                           // 0x0398(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsTransition;                                     // 0x0399(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31F5[0x6];                                     // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 OwnerComponent;                                    // 0x03A0(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31F6[0x8];                                     // 0x03A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTAnimSharingTransitionInstance">();
	}
	static class UHTAnimSharingTransitionInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTAnimSharingTransitionInstance>();
	}
};

// Class HTAnimSharing.HTSharingActor
// 0x0008 (0x02A8 - 0x02A0)
class AHTSharingActor : public AActor
{
public:
	class UCapsuleComponent*                      CapsuleComponent;                                  // 0x02A0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTSharingActor">();
	}
	static class AHTSharingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHTSharingActor>();
	}
};

}

