#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Female_Skill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_SkillBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Female_Skill.GA_Female_Skill_C
// 0x0010 (0x0A70 - 0x0A60)
class UGA_Female_Skill_C final : public UGA_SkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Female_Skill_C;                  // 0x0A60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Female_Skill(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Female_Skill_C">();
	}
	static class UGA_Female_Skill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Female_Skill_C>();
	}
};

}
