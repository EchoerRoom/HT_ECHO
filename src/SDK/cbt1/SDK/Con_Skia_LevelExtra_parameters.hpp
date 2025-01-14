#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Con_Skia_LevelExtra

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Con_Skia_LevelExtra.Con_Skia_LevelExtra_C.CanApplyGameplayEffectContent
// 0x0058 (0x0058 - 0x0000)
struct Con_Skia_LevelExtra_C_CanApplyGameplayEffectContent final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InstigatorActor;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UGameplayEffect*                  GameplayEffect;                                    // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5811[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   Tags;                                              // 0x0028(0x0010)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	class UHTAbilitySystemComponent*              CallFunc_GetHTAbilitySystemComponent_ReturnValue;  // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HaveGameplayEffectWithClass_ReturnValue; // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

