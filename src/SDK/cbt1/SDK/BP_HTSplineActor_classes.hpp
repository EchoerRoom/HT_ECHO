#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HTSplineActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HTSplineActor.BP_HTSplineActor_C
// 0x0040 (0x0420 - 0x03E0)
class ABP_HTSplineActor_C final : public AHTSplineActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   HTAIMovePoint;                                     // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   PointName;                                         // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisaplayBox;                                       // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60ED[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Tips;                                              // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BPOutOfRange(class AHTPlayerController* ByPC);
	void ExecuteUbergraph_BP_HTSplineActor(int32 EntryPoint);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HTSplineActor_C">();
	}
	static class ABP_HTSplineActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HTSplineActor_C>();
	}
};

}

