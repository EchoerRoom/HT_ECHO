#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Aim_AnimInterface

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Aim_AnimInterface.Aim_AnimInterface_C.AimLayer
// 0x0010 (0x0010 - 0x0000)
struct Aim_AnimInterface_C_AimLayer final
{
public:
	struct FPoseLink                              Param_AimLayer;                                    // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Aim_AnimInterface.Aim_AnimInterface_C.AimOffset
// 0x0020 (0x0020 - 0x0000)
struct Aim_AnimInterface_C_AimOffset final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_AimOffset;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

}
