#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_Mass_Low_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NPC_Mass_Low_Base.BP_NPC_Mass_Low_Base_C.ExecuteUbergraph_BP_NPC_Mass_Low_Base
// 0x0008 (0x0008 - 0x0000)
struct BP_NPC_Mass_Low_Base_C_ExecuteUbergraph_BP_NPC_Mass_Low_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC_Mass_Low_Base.BP_NPC_Mass_Low_Base_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_NPC_Mass_Low_Base_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

