#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Reaction_GuangLingXiang_Charge

#include "Basic.hpp"

#include "BuffBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Reaction_GuangLingXiang_Charge.GE_Reaction_GuangLingXiang_Charge_C
// 0x0008 (0x0C78 - 0x0C70)
class UGE_Reaction_GuangLingXiang_Charge_C final : public UBuffBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GE_Reaction_GuangLingXiang_Charge(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Reaction_GuangLingXiang_Charge_C">();
	}
	static class UGE_Reaction_GuangLingXiang_Charge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Reaction_GuangLingXiang_Charge_C>();
	}
};

}
