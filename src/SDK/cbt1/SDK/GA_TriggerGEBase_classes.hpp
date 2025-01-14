#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TriggerGEBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_HTAbilityBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TriggerGEBase.GA_TriggerGEBase_C
// 0x0020 (0x0A70 - 0x0A50)
class UGA_TriggerGEBase_C : public UGA_HTAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_TriggerGEBase_C;                 // 0x0A48(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FGameplayTag>                   TriggerEventTags;                                  // 0x0A50(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        DelayEndAbility;                                   // 0x0A60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayExecContainer;                                // 0x0A68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CustomEvent(const struct FGameplayTag& TagParam);
	void ExecuteUbergraph_GA_TriggerGEBase(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnFinish_E44B65F545DF26B69D9E58BE9996F973();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TriggerGEBase_C">();
	}
	static class UGA_TriggerGEBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TriggerGEBase_C>();
	}
};

}

