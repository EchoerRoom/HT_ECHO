#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_ActorReaction_1_Damage

#include "Basic.hpp"

#include "GE_DamageBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_ActorReaction_1_Damage.GE_ActorReaction_1_Damage_C
// 0x0008 (0x0C78 - 0x0C70)
class UGE_ActorReaction_1_Damage_C final : public UGE_DamageBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GE_ActorReaction_1_Damage(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ActorReaction_1_Damage_C">();
	}
	static class UGE_ActorReaction_1_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ActorReaction_1_Damage_C>();
	}
};

}

