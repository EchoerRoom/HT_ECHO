#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Fadia_UltraSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_SkillBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Fadia_UltraSkill.GA_Fadia_UltraSkill_C
// 0x0010 (0x0A70 - 0x0A60)
class UGA_Fadia_UltraSkill_C final : public UGA_SkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Fadia_UltraSkill_C;              // 0x0A60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Fadia_UltraSkill(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Fadia_UltraSkill_C">();
	}
	static class UGA_Fadia_UltraSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Fadia_UltraSkill_C>();
	}
};

}
