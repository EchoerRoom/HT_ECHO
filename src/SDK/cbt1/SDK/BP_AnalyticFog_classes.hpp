#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnalyticFog

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "E_AnalyticFogShape_structs.hpp"
#include "HottaUtility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnalyticFog.BP_AnalyticFog_C
// 0x0360 (0x0600 - 0x02A0)
class ABP_AnalyticFog_C final : public AEditorEventActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SceneDissolveComponent_C*           BP_SceneDissolveComponent;                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         EffectTimeline_Opacity_A752A2E844D4913D48C08AAD7A30A1C7; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            EffectTimeline__Direction_A752A2E844D4913D48C08AAD7A30A1C7; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_611E[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     EffectTimeline;                                    // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI;                                               // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_AnalyticFogShape                            FogShape;                                          // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_611F[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ShapeColor;                                        // 0x02DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6120[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ShapeDensity;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TMap<E_AnalyticFogShape, class UMaterialInterface*> FogMaterial;                                       // 0x02F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          UseNearDispplay;                                   // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFarDispplay;                                    // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6121[0x6];                                     // 0x034A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DisplayDistance;                                   // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        TransitionDistance;                                // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PlaneCuttingVector;                                // 0x0360(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        PlaneCuttingValue;                                 // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TMap<E_AnalyticFogShape, class UStaticMesh*>  FogMesh;                                           // 0x0380(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        FogSmooth;                                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        FogSmoothMin;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        FogSmoothMax;                                      // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          UseScaleBySkyTime;                                 // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_6122[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     DensityScale;                                      // 0x03F0(0x0088)(Edit, BlueprintVisible, AdvancedDisplay)
	struct FRuntimeVectorCurve                    ColorScale;                                        // 0x0478(0x0188)(Edit, BlueprintVisible, AdvancedDisplay)

public:
	void BndEvt__BP_AnalyticFog_BP_SceneDissolveComponent_K2Node_ComponentBoundEvent_0_DissolveComponentEffectTriggered__DelegateSignature(bool bReset);
	void EffectTimeline__FinishedFunc();
	void EffectTimeline__UpdateFunc();
	void ExecuteUbergraph_BP_AnalyticFog(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Update();
	void UpdateParameterByTime();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnalyticFog_C">();
	}
	static class ABP_AnalyticFog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AnalyticFog_C>();
	}
};

}

