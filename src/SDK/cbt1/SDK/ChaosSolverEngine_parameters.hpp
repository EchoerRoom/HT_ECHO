#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosSolverEngine

#include "Basic.hpp"

#include "ChaosSolverEngine_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// 0x01B8 (0x01B8 - 0x0000)
struct ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult final
{
public:
	struct FChaosPhysicsCollisionInfo             PhysicsCollision;                                  // 0x0000(0x00C0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                             ReturnValue;                                       // 0x00C0(0x00F8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// 0x0001 (0x0001 - 0x0000)
struct ChaosSolverActor_SetSolverActive final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
