#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_House_PCG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_House_PBG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_House_PCG.BP_House_PCG_C
// 0x00F0 (0x03E0 - 0x02F0)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_House_PCG_C : public ABP_House_PBG_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_House_PCG_C;                     // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPCGMeshSet_C*                          PCGMeshSet;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPCGComponent*                          PCG_House;                                         // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRandom;                                          // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6203[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Length;                                            // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Width;                                             // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Height;                                            // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DoorPos;                                           // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Random;                                            // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableRoomTop;                                     // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6204[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RoomTopLength;                                     // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoomTopWidth;                                      // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoomTopHeight;                                     // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Btn_CleanRegen;                                    // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         EmbankmentSeed;                                    // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoomTopDoorPos;                                    // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoomTopPosX;                                       // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoomTopPosY;                                       // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6205[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             HouseTopTran;                                      // 0x0350(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SignBoard;                                         // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Automatic_generation;                              // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6206[0x6];                                     // 0x03B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WallDensity;                                       // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherFloorNum;                                     // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GroundFloorNum;                                    // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Range;                                             // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetVisable;                                        // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

public:
	void All_PCGCleanRegen();
	void BndEvt__BP_Room_PCG_Btn_CleanRegen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void CleanRegen();
	void DestoryISMC();
	void ExecuteUbergraph_BP_House_PCG(int32 EntryPoint);
	void Fix();
	void FixCollision();
	void Is_Random();
	void Is_Random_Block();
	void NumToPoint();
	void PGF(const struct FPCGDataCollection& Param_PGF);
	void ReceiveBeginPlay();
	void RoomTopSetting();
	void SeedPlus1();
	void SeedMinus1();
	void SetComponentsInvisible();
	void SetComponentsVisible();
	void SetPCGHouseVisable();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_House_PCG_C">();
	}
	static class ABP_House_PCG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_House_PCG_C>();
	}
};
#pragma pack(pop)

}
