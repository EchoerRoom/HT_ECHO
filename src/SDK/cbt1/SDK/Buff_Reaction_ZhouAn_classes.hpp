#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_Reaction_ZhouAn

#include "Basic.hpp"

#include "BuffBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buff_Reaction_ZhouAn.Buff_Reaction_ZhouAn_C
// 0x0008 (0x0C78 - 0x0C70)
class UBuff_Reaction_ZhouAn_C final : public UBuffBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Buff_Reaction_ZhouAn(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buff_Reaction_ZhouAn_C">();
	}
	static class UBuff_Reaction_ZhouAn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuff_Reaction_ZhouAn_C>();
	}
};

}

