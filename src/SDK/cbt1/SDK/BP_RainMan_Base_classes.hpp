#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RainMan_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "HTGame_structs.hpp"
#include "BP_RainManCameraRotator_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RainMan_Base.BP_RainMan_Base_C
// 0x0258 (0x0DD8 - 0x0B80)
class ABP_RainMan_Base_C final : public ABP_RainManCameraRotator_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_RainMan_Base_C;                  // 0x0B80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0B88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Umbrella_003;                                   // 0x0B90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box_LeaveRange;                                    // 0x0B98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Umbrella_001;                                   // 0x0BA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Umbrella_1;                                        // 0x0BA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Umbrella_002;                                   // 0x0BB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    TargetPoint_Level;                                 // 0x0BB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ____0_Blur_7E19DC994E6D66BC48B9FDAECA64BE1D;       // 0x0BC0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ____0_Rain_7E19DC994E6D66BC48B9FDAECA64BE1D;       // 0x0BC4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ____0_LerpReverse_7E19DC994E6D66BC48B9FDAECA64BE1D; // 0x0BC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ____0_ScreenWave_7E19DC994E6D66BC48B9FDAECA64BE1D; // 0x0BCC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ____0__Direction_7E19DC994E6D66BC48B9FDAECA64BE1D; // 0x0BD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A6[0x7];                                     // 0x0BD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     __t_0;                                             // 0x0BD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         ____Drips_80B7D2AF44E8096F99FA0C98A64EE60E;        // 0x0BE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ____Wave_80B7D2AF44E8096F99FA0C98A64EE60E;         // 0x0BE4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ____BlurCureve_80B7D2AF44E8096F99FA0C98A64EE60E;   // 0x0BE8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ____Reverse1_80B7D2AF44E8096F99FA0C98A64EE60E;     // 0x0BEC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _____Direction_80B7D2AF44E8096F99FA0C98A64EE60E;   // 0x0BF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A7[0x7];                                     // 0x0BF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     __t;                                               // 0x0BF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         ____1_Float_E7570C2A4D58A96949342BA76EBF600D;      // 0x0C00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ____1__Direction_E7570C2A4D58A96949342BA76EBF600D; // 0x0C04(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A8[0x3];                                     // 0x0C05(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     __t_1;                                             // 0x0C08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AHTAISpawnManager*                      HTAISpawn;                                         // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AHTVisualSpawnManager*                  HTVisualSpawn;                                     // 0x0C18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_TreasureBox_Base_C*                 TreasureBox;                                       // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AHTMassCrowdHideAndAvoidVolume*         Volume_NPCHide;                                    // 0x0C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale_Black;                                       // 0x0C30(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFloat;                                           // 0x0C48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60A9[0x7];                                     // 0x0C49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 In_Vision_ID;                                      // 0x0C50(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class AVision_RainMan_01_C*                   BP_RainMan_Pockmon;                                // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FTempCustomTimeDilationParams          In_Params;                                         // 0x0C68(0x00E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ULevelStreamingDynamic*                 Level;                                             // 0x0D50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                  Level_RainMan;                                     // 0x0D58(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                Location_Umbrella;                                 // 0x0D80(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLeave;                                           // 0x0D98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInGame;                                          // 0x0D99(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpawnMonster;                                    // 0x0D9A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60AA[0x5];                                     // 0x0D9B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Ak_StartBattle;                                    // 0x0DA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_EndBattle;                                      // 0x0DA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_BlackLake;                                      // 0x0DB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_BlackLake_Stop;                                 // 0x0DB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_Umberlla;                                       // 0x0DC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_Umberlla_Stop;                                  // 0x0DC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFinish;                                          // 0x0DD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60AB[0x3];                                     // 0x0DD1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ResetCameraSpeed;                                  // 0x0DD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_RainMan_Base_Box_LeaveRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_RainMan_Base_Box_LeaveRange_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__NewBlueprint_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BPOnMainRoleLoadFinished(class AHTPlayerState* PlayerState);
	void Event_RecoverScreen();
	void EventOnAIDead(class AHTAISpawnManager* SpawnMgr, class AHTCharacter* OwnerPlayer);
	void ExecuteUbergraph_BP_RainMan_Base(int32 EntryPoint);
	void Manager_ISOverTurn(bool IsOverTurn, bool IsComplete);
	void OnVisualSpawnedEvent___(class AActor* Actor);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void __t_0__FinishedFunc();
	void __t_0__OnReverse__EventFunc();
	void __t_0__UpdateFunc();
	void __t_1__FinishedFunc();
	void __t_1__UpdateFunc();
	void __t__BeReverse__EventFunc();
	void __t__FinishedFunc();
	void __t__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RainMan_Base_C">();
	}
	static class ABP_RainMan_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RainMan_Base_C>();
	}
};

}

