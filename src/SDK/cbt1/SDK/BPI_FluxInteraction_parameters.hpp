#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_FluxInteraction

#include "Basic.hpp"

#include "BS_FluxInteractionData_structs.hpp"


namespace SDK::Params
{

// Function BPI_FluxInteraction.BPI_FluxInteraction_C.GetInteractions
// 0x0020 (0x0020 - 0x0000)
struct BPI_FluxInteraction_C_GetInteractions final
{
public:
	double                                        Ratio;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Iteration;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_575D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBS_FluxInteractionData>        Interactions;                                      // 0x0010(0x0010)(Parm, OutParm)
};

}
