#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Xiupa_ABP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GlidingBase_ABP_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Xiupa_ABP.Xiupa_ABP_C
// 0x0010 (0x0A40 - 0x0A30)
class UXiupa_ABP_C final : public UGlidingBase_ABP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Xiupa_ABP_C;                        // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Xiupa_ABP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Xiupa_ABP_C">();
	}
	static class UXiupa_ABP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXiupa_ABP_C>();
	}
};

}

