#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShakeBone_AnimLayerInterface

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ShakeBone_AnimLayerInterface.ShakeBone_AnimLayerInterface_C.ShakeBoneLayer
// 0x0030 (0x0030 - 0x0000)
struct ShakeBone_AnimLayerInterface_C_ShakeBoneLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                        PushScale;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BlendAlpha;                                        // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                              Param_ShakeBoneLayer;                              // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};

}

