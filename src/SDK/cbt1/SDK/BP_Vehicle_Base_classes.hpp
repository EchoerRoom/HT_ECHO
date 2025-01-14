#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Vehicle_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Vehicle_Base.BP_Vehicle_Base_C
// 0x00A0 (0x0970 - 0x08D0)
class ABP_Vehicle_Base_C : public AHTWheeledVehicleDrivable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticCarMesh;                                     // 0x08D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTAIRVOComponent*                      HTAIRVO;                                           // 0x08E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_VehicleEffectComponent_C*           BP_VehicleEffectComponent;                         // 0x08E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WheelRippleEffect_C*                BP_WheelRippleEffectRR;                            // 0x08F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WheelRippleEffect_C*                BP_WheelRippleEffectFL;                            // 0x08F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WheelRippleEffect_C*                BP_WheelRippleEffectFR;                            // 0x0900(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WheelRippleEffect_C*                BP_WheelRippleEffectRL;                            // 0x0908(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    BackLight;                                         // 0x0910(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHTFadeComponent*                       HTFade;                                            // 0x0918(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   FrontLight_R;                                      // 0x0920(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   FrontLight_L;                                      // 0x0928(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_VehicleInteractComponent_C*         BP_VehicleInteractComponent_FL;                    // 0x0930(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_VehicleInteractComponent_C*         BP_VehicleInteractComponent_FR;                    // 0x0938(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVehicleDeformableComponent*            VehicleDeformable;                                 // 0x0940(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentHitInterval;                                // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinHitInterval;                                    // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialParameterCollection*           MPCRainMask;                                       // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_RainDropsRender_C*                  RainDropsRenderActor;                              // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          UseForSequence;                                    // 0x0968(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          SeqHeadLight;                                      // 0x0969(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          SeqRunningLight;                                   // 0x096A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

public:
	void BPCall_CloseDoor();
	void BPCall_OpenDoor();
	void BPCall_OperateDoubleFlash(bool TurnOn);
	void BPCall_OperateFrontLights(bool TurnOn);
	void BPCall_StartEngine();
	void BPCall_StartTireNoise();
	void BPCall_StartTireSkip();
	void BPCall_StopEngine();
	void BPCall_StopTireNoise();
	void BPCall_StopTireSkip();
	void BPCall_SwitchFPP();
	void BPCall_SwitchTPP();
	void BPCall_VehicleMoveGroundChanged(const class FName& GroundTypeName);
	void ExecuteUbergraph_BP_Vehicle_Base(int32 EntryPoint);
	void GetRainDropsActor();
	void HandleHandbrakeStart();
	void HandleHandbrakeStop();
	void HandleOnBrakeStart();
	void HandleOnBrakeStop();
	void HandleOnReverseStart();
	void HandleOnReverseStop();
	void HandleTurnLeftStart();
	void HandleTurnLeftStop();
	void HandleTurnRightStart();
	void HandleTurnRightStop();
	void InitVehicleLights();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SequeceCarLightFunc();
	void UpdateRainDropsEffect();
	void UpdateRainMask();
	void UserConstructionScript();
	void WheelRippleEffectBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Vehicle_Base_C">();
	}
	static class ABP_Vehicle_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Vehicle_Base_C>();
	}
};

}

