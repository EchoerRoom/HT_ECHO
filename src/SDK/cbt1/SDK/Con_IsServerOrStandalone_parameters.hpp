#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Con_IsServerOrStandalone

#include "Basic.hpp"


namespace SDK::Params
{

// Function Con_IsServerOrStandalone.Con_IsServerOrStandalone_C.ExecuteUbergraph_Con_IsServerOrStandalone
// 0x0004 (0x0004 - 0x0000)
struct Con_IsServerOrStandalone_C_ExecuteUbergraph_Con_IsServerOrStandalone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Con_IsServerOrStandalone.Con_IsServerOrStandalone_C.CanApplyGameplayEffectContent
// 0x0028 (0x0028 - 0x0000)
struct Con_IsServerOrStandalone_C_CanApplyGameplayEffectContent final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InstigatorActor;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UGameplayEffect*                  GameplayEffect;                                    // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServerOrStandalone_ReturnValue;         // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

