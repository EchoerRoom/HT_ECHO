#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_ExtremeEvade_Dir

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Buff_Share_DirBlur_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buff_ExtremeEvade_Dir.Buff_ExtremeEvade_Dir_C
// 0x0008 (0x0C78 - 0x0C70)
class UBuff_ExtremeEvade_Dir_C final : public UBuff_Share_DirBlur_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Buff_ExtremeEvade_Dir(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buff_ExtremeEvade_Dir_C">();
	}
	static class UBuff_ExtremeEvade_Dir_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuff_ExtremeEvade_Dir_C>();
	}
};

}
