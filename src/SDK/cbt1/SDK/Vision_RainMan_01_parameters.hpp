#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vision_RainMan_01

#include "Basic.hpp"


namespace SDK::Params
{

// Function Vision_RainMan_01.Vision_RainMan_01_C.ExecuteUbergraph_Vision_RainMan_01
// 0x0018 (0x0018 - 0x0000)
struct Vision_RainMan_01_C_ExecuteUbergraph_Vision_RainMan_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27F6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHTPlayerCharacter*                     CallFunc_GetClientPlayerCharacter_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHTPlayerController*                    CallFunc_GetHTPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

