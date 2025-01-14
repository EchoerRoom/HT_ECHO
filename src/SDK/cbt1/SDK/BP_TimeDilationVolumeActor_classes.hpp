#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeDilationVolumeActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TimeDilationVolumeActor.BP_TimeDilationVolumeActor_C
// 0x0018 (0x0368 - 0x0350)
class ABP_TimeDilationVolumeActor_C : public ATimeDilationVolumeActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TimeDilationVolumeActor(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TimeDilationVolumeActor_C">();
	}
	static class ABP_TimeDilationVolumeActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TimeDilationVolumeActor_C>();
	}
};

}

