#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StoreBrandHeadLogoActor_1002

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_StoreBrandHeadLogoActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StoreBrandHeadLogoActor_1002.BP_StoreBrandHeadLogoActor_1002_C
// 0x0058 (0x0BB8 - 0x0B60)
class ABP_StoreBrandHeadLogoActor_1002_C final : public ABP_StoreBrandHeadLogoActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0B68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0B70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_4Slight_ZYF;                                    // 0x0B78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_4Slight_ZYF2;                                   // 0x0B80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Store_brand_light;                                 // 0x0B88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight2;                                        // 0x0B90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight1;                                        // 0x0B98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0BA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0BA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0BB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BP_LoadStoreBrandHeadLogo();
	void BP_UnLoadStoreBrandHeadLogo();
	void ExecuteUbergraph_BP_StoreBrandHeadLogoActor_1002(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StoreBrandHeadLogoActor_1002_C">();
	}
	static class ABP_StoreBrandHeadLogoActor_1002_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StoreBrandHeadLogoActor_1002_C>();
	}
};

}
