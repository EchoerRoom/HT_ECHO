#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UDS_PlayerOcclusion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UDS_Occlusion_Mode_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass UDS_PlayerOcclusion.UDS_PlayerOcclusion_C
// 0x00A8 (0x0150 - 0x00A8)
class UUDS_PlayerOcclusion_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EUDS_Occlusion_Mode                           Occlusion_Mode;                                    // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B82[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Occlusion_Location;                                // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Max_Interior_Occlusion_Distance;                   // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETraceTypeQuery                               Occlusion_Trace_Channel;                           // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B83[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<double>                                Target_Occlusion_Profile;                          // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        Occlusion_Update_Period;                           // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                Current_Occlusion_Profile;                         // 0x00F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                Rain_Velocity;                                     // 0x0108(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Calculate_Rain_Occlusion;                          // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Running;                                           // 0x0121(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Acquire_Camera_Location;                           // 0x0122(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B84[0x5];                                     // 0x0123(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Inverted_Global_Occlusion;                         // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Full_Occluded_Percent;                             // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Not_Occluded_Percent;                              // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Water_Level;                                       // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Water_Level;                                   // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Force_Full_Occlusion;                              // 0x0149(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Weather;                                           // 0x014A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               Show_Trace_Debugs;                                 // 0x014B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UDS_PlayerOcclusion(int32 EntryPoint);
	void Get_Occlusion_Location();
	void Get_Starting_Occlusion_Profile();
	void Initialize();
	void ReceiveTick(float DeltaSeconds);
	void Set_Target_Fully_Occluded();
	void Set_Target_Fully_Unoccluded();
	void Test_Point_for_Occlusion(TArray<class AActor*>& Actors_to_Ignore, const struct FVector& Test_Location, TArray<double>* Occlusion_Profile, double* Overall_Occlusion);
	void Update_Current_Occlusion_Profile();
	void Update_Target_Occlusion_Profile();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UDS_PlayerOcclusion_C">();
	}
	static class UUDS_PlayerOcclusion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUDS_PlayerOcclusion_C>();
	}
};

}

