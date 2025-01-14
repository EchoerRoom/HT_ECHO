#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MyHTSelfieActivityVolume_s110613

#include "Basic.hpp"

#include "HTGame_structs.hpp"


namespace SDK::Params
{

// Function BP_MyHTSelfieActivityVolume_s110613.BP_MyHTSelfieActivityVolume_s110613_C.BPCanActiveFunc
// 0x0038 (0x0038 - 0x0000)
struct BP_MyHTSelfieActivityVolume_s110613_C_BPCanActiveFunc final
{
public:
	class AHTPlayerState*                         PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C14[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHTPlayerCharacter*                     CallFunc_GetClientPlayerCharacter_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHTPlayerController*                    CallFunc_GetHTPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHTPlayerState*                         CallFunc_GetClientPlayerState_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsQuestInProgress_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MyHTSelfieActivityVolume_s110613.BP_MyHTSelfieActivityVolume_s110613_C.ExecuteUbergraph_BP_MyHTSelfieActivityVolume_s110613
// 0x0030 (0x0030 - 0x0000)
struct BP_MyHTSelfieActivityVolume_s110613_C_ExecuteUbergraph_BP_MyHTSelfieActivityVolume_s110613 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C15[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSelfieCheckTargetState>        K2Node_Event_GainFlagActors;                       // 0x0010(0x0010)(ConstParm, ReferenceParm)
	class AHTPlayerState*                         CallFunc_GetClientPlayerState_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsQuestInProgress_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateQuestProgress_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MyHTSelfieActivityVolume_s110613.BP_MyHTSelfieActivityVolume_s110613_C.OnTakePhotoClickedEvent
// 0x0010 (0x0010 - 0x0000)
struct BP_MyHTSelfieActivityVolume_s110613_C_OnTakePhotoClickedEvent final
{
public:
	TArray<struct FSelfieCheckTargetState>        GainFlagActors;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MyHTSelfieActivityVolume_s110613.BP_MyHTSelfieActivityVolume_s110613_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_MyHTSelfieActivityVolume_s110613_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

