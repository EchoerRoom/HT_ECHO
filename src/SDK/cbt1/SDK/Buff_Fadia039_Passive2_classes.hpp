#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_Fadia039_Passive2

#include "Basic.hpp"

#include "BuffBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buff_Fadia039_Passive2.Buff_Fadia039_Passive2_C
// 0x0008 (0x0C78 - 0x0C70)
class UBuff_Fadia039_Passive2_C final : public UBuffBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Buff_Fadia039_Passive2(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buff_Fadia039_Passive2_C">();
	}
	static class UBuff_Fadia039_Passive2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuff_Fadia039_Passive2_C>();
	}
};

}

