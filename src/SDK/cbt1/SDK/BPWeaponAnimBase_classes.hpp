#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPWeaponAnimBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "HTGame_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BPWeaponAnimBase.BPWeaponAnimBase_C
// 0x08E0 (0x0C90 - 0x03B0)
class UBPWeaponAnimBase_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03B8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03C0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03C8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x03E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0410(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0438(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0460(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0488(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x04B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x04D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0500(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0528(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0570(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0590(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x05D8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x05F8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0640(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0660(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x06A8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x06C8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0710(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x0730(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x07F8(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0840(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x08C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x08E8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0910(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0938(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0980(0x00F0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0A70(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0A90(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0AB8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0AD8(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0BA0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0BC0(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BPOwnerCharacterStateChange(EOwnerCharacterState NewState, EOwnerCharacterState OldState);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPWeaponAnimBase_AnimGraphNode_TransitionResult_0CEE8C68457757D2A2EF17BE3B25F363();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPWeaponAnimBase_AnimGraphNode_TransitionResult_1A7EF53A47AA2B3E4C44AC81FBC058B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPWeaponAnimBase_AnimGraphNode_TransitionResult_2A67BE1649340A7BF6D7E69DCA568C1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPWeaponAnimBase_AnimGraphNode_TransitionResult_317FDF614AEDC9BCD4E92D85159ABCE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPWeaponAnimBase_AnimGraphNode_TransitionResult_5EFEF7C54BD2058042C5FA95DBD73EC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPWeaponAnimBase_AnimGraphNode_TransitionResult_718F189B403124CEBCBD63AF9B84D842();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPWeaponAnimBase_AnimGraphNode_TransitionResult_8C44C21C4891A84CE5FFF6900BF20811();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPWeaponAnimBase_AnimGraphNode_TransitionResult_B5C3661D4A444ADB78E49CBB7F140040();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPWeaponAnimBase_AnimGraphNode_TransitionResult_DCDA260F4FDADF2D476D57890D73F33F();
	void ExecuteUbergraph_BPWeaponAnimBase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPWeaponAnimBase_C">();
	}
	static class UBPWeaponAnimBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPWeaponAnimBase_C>();
	}
};

}
