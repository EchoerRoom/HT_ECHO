#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GamepadMainForm

#include "Basic.hpp"

#include "UINavigation_structs.hpp"
#include "HTGame_structs.hpp"


namespace SDK::Params
{

// Function WB_GamepadMainForm.WB_GamepadMainForm_C.BP_OnInputTypeChanged
// 0x0002 (0x0002 - 0x0000)
struct WB_GamepadMainForm_C_BP_OnInputTypeChanged final
{
public:
	EUINavigationInputType                        OldInputType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUINavigationInputType                        NewInputType;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_GamepadMainForm.WB_GamepadMainForm_C.ExecuteUbergraph_WB_GamepadMainForm
// 0x000C (0x000C - 0x0000)
struct WB_GamepadMainForm_C_ExecuteUbergraph_WB_GamepadMainForm final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHTPlatformType                               CallFunc_SwitchPlatform_OutPlatformType;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUINavigationInputType                        K2Node_Event_OldInputType;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUINavigationInputType                        K2Node_Event_NewInputType;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

