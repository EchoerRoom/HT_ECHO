#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MonsterAnimBP_Base

#include "Basic.hpp"

#include "MonsterAnimBP_Base_classes.hpp"
#include "MonsterAnimBP_Base_parameters.hpp"


namespace SDK
{

// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UMonsterAnimBP_Base_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "AnimGraph");

	Params::MonsterAnimBP_Base_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.BlueprintLinkedAnimationLayersInitialized
// (Event, Public, BlueprintEvent)

void UMonsterAnimBP_Base_C::BlueprintLinkedAnimationLayersInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "BlueprintLinkedAnimationLayersInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterAnimBP_Base_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "BlueprintUpdateAnimation");

	Params::MonsterAnimBP_Base_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_BlendListByBool_E33D4D1D43C26A893E673BBA1F683400
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_BlendListByBool_E33D4D1D43C26A893E673BBA1F683400()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_BlendListByBool_E33D4D1D43C26A893E673BBA1F683400");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_2C254C61403C91A83534E98BB7F76A27
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_2C254C61403C91A83534E98BB7F76A27()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_2C254C61403C91A83534E98BB7F76A27");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_31D5DB774399595449E1158C0DD3B725
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_31D5DB774399595449E1158C0DD3B725()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_31D5DB774399595449E1158C0DD3B725");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_6C166D8A4A59597183DCF591306326DF
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_6C166D8A4A59597183DCF591306326DF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_6C166D8A4A59597183DCF591306326DF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_821629CF48C99E9B5B5B17AA2D79F1E8
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_821629CF48C99E9B5B5B17AA2D79F1E8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_821629CF48C99E9B5B5B17AA2D79F1E8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_84766F0A437356AE11DB1CA5901F7AA7
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_84766F0A437356AE11DB1CA5901F7AA7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_84766F0A437356AE11DB1CA5901F7AA7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_A3FC8B59416F82402F537DB5824AD36D
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_A3FC8B59416F82402F537DB5824AD36D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_A3FC8B59416F82402F537DB5824AD36D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_B1F5290549498CD35A70329B6D6B8DB5
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_B1F5290549498CD35A70329B6D6B8DB5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_B1F5290549498CD35A70329B6D6B8DB5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_B2D60DC14975B97C7068E290D78DEB94
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_B2D60DC14975B97C7068E290D78DEB94()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_B2D60DC14975B97C7068E290D78DEB94");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_BD11DAF2450D4C6F5850FD921A59ED77
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_BD11DAF2450D4C6F5850FD921A59ED77()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_BD11DAF2450D4C6F5850FD921A59ED77");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_C29C56834BA8F13204D27691B6FC45A2
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_C29C56834BA8F13204D27691B6FC45A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_C29C56834BA8F13204D27691B6FC45A2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_DE36D0754AE28F60A0BF79AA184C8AAB
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_DE36D0754AE28F60A0BF79AA184C8AAB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_DE36D0754AE28F60A0BF79AA184C8AAB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_E097FF9B438B92A1299422B0C7375F09
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_E097FF9B438B92A1299422B0C7375F09()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_E097FF9B438B92A1299422B0C7375F09");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_E09D96F84EC6CCA4BD9B76984DD0FA50
// (BlueprintEvent)

void UMonsterAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_E09D96F84EC6CCA4BD9B76984DD0FA50()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MonsterAnimBP_Base_AnimGraphNode_TransitionResult_E09D96F84EC6CCA4BD9B76984DD0FA50");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.ExecuteUbergraph_MonsterAnimBP_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterAnimBP_Base_C::ExecuteUbergraph_MonsterAnimBP_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "ExecuteUbergraph_MonsterAnimBP_Base");

	Params::MonsterAnimBP_Base_C_ExecuteUbergraph_MonsterAnimBP_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.FootControlRig
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_FootControlRig                                   (Parm, OutParm, NoDestructor)

void UMonsterAnimBP_Base_C::FootControlRig(const struct FPoseLink& InPose, struct FPoseLink* Param_FootControlRig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "FootControlRig");

	Params::MonsterAnimBP_Base_C_FootControlRig Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FootControlRig != nullptr)
		*Param_FootControlRig = std::move(Parms.Param_FootControlRig);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.FootIKLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_FootIKLayer                                      (Parm, OutParm, NoDestructor)

void UMonsterAnimBP_Base_C::FootIKLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_FootIKLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "FootIKLayer");

	Params::MonsterAnimBP_Base_C_FootIKLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FootIKLayer != nullptr)
		*Param_FootIKLayer = std::move(Parms.Param_FootIKLayer);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.HTAITurnL_BP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TurnAngle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FPlayRate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterAnimBP_Base_C::HTAITurnL_BP(float TurnAngle, float FPlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "HTAITurnL_BP");

	Params::MonsterAnimBP_Base_C_HTAITurnL_BP Parms{};

	Parms.TurnAngle = TurnAngle;
	Parms.FPlayRate = FPlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.HTAITurnR_BP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TurnAngle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FPlayRate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterAnimBP_Base_C::HTAITurnR_BP(float TurnAngle, float FPlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "HTAITurnR_BP");

	Params::MonsterAnimBP_Base_C_HTAITurnR_BP Parms{};

	Parms.TurnAngle = TurnAngle;
	Parms.FPlayRate = FPlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.MonsterBoneShakeLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                                  Push_Scale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_BlendAlpha                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        Param_MonsterBoneShakeLayer                            (Parm, OutParm, NoDestructor)

void UMonsterAnimBP_Base_C::MonsterBoneShakeLayer(const struct FPoseLink& InPose, double Push_Scale, double Param_BlendAlpha, struct FPoseLink* Param_MonsterBoneShakeLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "MonsterBoneShakeLayer");

	Params::MonsterAnimBP_Base_C_MonsterBoneShakeLayer Parms{};

	Parms.InPose = std::move(InPose);
	Parms.Push_Scale = Push_Scale;
	Parms.Param_BlendAlpha = Param_BlendAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MonsterBoneShakeLayer != nullptr)
		*Param_MonsterBoneShakeLayer = std::move(Parms.Param_MonsterBoneShakeLayer);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.MonsterIKAnimation Layer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                                  PowerIKAlpha                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        Param_MonsterIKAnimation_Layer                         (Parm, OutParm, NoDestructor)

void UMonsterAnimBP_Base_C::MonsterIKAnimation_Layer(const struct FPoseLink& InPose_0, double PowerIKAlpha, struct FPoseLink* Param_MonsterIKAnimation_Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "MonsterIKAnimation Layer");

	Params::MonsterAnimBP_Base_C_MonsterIKAnimation_Layer Parms{};

	Parms.InPose_0 = std::move(InPose_0);
	Parms.PowerIKAlpha = PowerIKAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MonsterIKAnimation_Layer != nullptr)
		*Param_MonsterIKAnimation_Layer = std::move(Parms.Param_MonsterIKAnimation_Layer);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.MoveStateLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_MoveStateLayer                                   (Parm, OutParm, NoDestructor)

void UMonsterAnimBP_Base_C::MoveStateLayer(struct FPoseLink* Param_MoveStateLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "MoveStateLayer");

	Params::MonsterAnimBP_Base_C_MoveStateLayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MoveStateLayer != nullptr)
		*Param_MoveStateLayer = std::move(Parms.Param_MoveStateLayer);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.NPCFootIK
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose_1                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_NPCFootIK                                        (Parm, OutParm, NoDestructor)

void UMonsterAnimBP_Base_C::NPCFootIK(const struct FPoseLink& InPose_1, struct FPoseLink* Param_NPCFootIK)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "NPCFootIK");

	Params::MonsterAnimBP_Base_C_NPCFootIK Parms{};

	Parms.InPose_1 = std::move(InPose_1);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_NPCFootIK != nullptr)
		*Param_NPCFootIK = std::move(Parms.Param_NPCFootIK);
}


// Function MonsterAnimBP_Base.MonsterAnimBP_Base_C.ShakeBoneLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                                  Param_PushScale                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_BlendAlpha                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        Param_ShakeBoneLayer                                   (Parm, OutParm, NoDestructor)

void UMonsterAnimBP_Base_C::ShakeBoneLayer(const struct FPoseLink& InPose, double Param_PushScale, double Param_BlendAlpha, struct FPoseLink* Param_ShakeBoneLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAnimBP_Base_C", "ShakeBoneLayer");

	Params::MonsterAnimBP_Base_C_ShakeBoneLayer Parms{};

	Parms.InPose = std::move(InPose);
	Parms.Param_PushScale = Param_PushScale;
	Parms.Param_BlendAlpha = Param_BlendAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ShakeBoneLayer != nullptr)
		*Param_ShakeBoneLayer = std::move(Parms.Param_ShakeBoneLayer);
}

}
