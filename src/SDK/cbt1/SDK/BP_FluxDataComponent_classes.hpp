#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluxDataComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Niagara_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FluxDataComponent.BP_FluxDataComponent_C
// 0x00D8 (0x0180 - 0x00A8)
class UBP_FluxDataComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FVector>                        ReadbackLocations;                                 // 0x00B0(0x0010)(Edit, BlueprintVisible)
	double                                        ReadbackEventInterval;                             // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         CustomReadbackSystem;                              // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          FindWorldSurface;                                  // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAfterReadback;                                   // 0x00D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B51[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FluxFluidHeight;                                   // 0x00D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FluxSurfaceLocation;                               // 0x00E0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FluxFluidVelocity;                                 // 0x00F8(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnReceiveParticleData;                             // 0x0110(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          UseGroundMap;                                      // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseWave;                                           // 0x0121(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B52[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   OwnerComponentTag;                                 // 0x0124(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OwnerSocketName;                                   // 0x012C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B53[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FluxFluidNormal;                                   // 0x0138(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ExportDataInstance;                                // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SurfaceActor;                                      // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DrawDebug;                                         // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B54[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBasicParticleData>             ReadbackData;                                      // 0x0168(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        SampleTime;                                        // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Activation(class UActorComponent* Component, bool bReset);
	void ApplyNiagaraParameters();
	void Deactivation(class UActorComponent* Component);
	void ExecuteUbergraph_BP_FluxDataComponent(int32 EntryPoint);
	void Get_Readback_Indexed_Position(int32 Param_Index, struct FVector* Location, struct FVector* Velocity, double* Height);
	void InitEventListener();
	void OnReceiveParticleData__DelegateSignature(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
	void ReadParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset);
	void ReceiveReadData(const TArray<struct FBasicParticleData>& Data);
	void RemoveEventListener();
	void SetPointData(struct FBasicParticleData& ParticleDataStructure);
	void SetQuadData(TArray<struct FBasicParticleData>& ParticleDataStructure);
	void SetRelativeSamplePoints(TArray<struct FVector>& Points);
	void SetSurfaceActor(const class AActor*& Interface);

	void GetOwnerComponent(class USceneComponent** SceneComponent) const;
	void GetWorldSurface(class AActor** Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluxDataComponent_C">();
	}
	static class UBP_FluxDataComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FluxDataComponent_C>();
	}
};

}
