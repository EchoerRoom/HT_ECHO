#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vision_RainMan_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Vision_RainMan_01.Vision_RainMan_01_C
// 0x0010 (0x0CB0 - 0x0CA0)
class AVision_RainMan_01_C final : public AHTPockmonActor
{
public:
	uint8                                         Pad_27F5[0x8];                                     // 0x0C98(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0CA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0CA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void Complete_Vision();
	void ExecuteUbergraph_Vision_RainMan_01(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Vision_RainMan_01_C">();
	}
	static class AVision_RainMan_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVision_RainMan_01_C>();
	}
};

}
