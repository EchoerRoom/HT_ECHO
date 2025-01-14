#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HouseB_PCG

#include "Basic.hpp"

#include "BP_House_PCG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HouseB_PCG.BP_HouseB_PCG_C
// 0x0010 (0x03F0 - 0x03E0)
class ABP_HouseB_PCG_C : public ABP_House_PCG_C
{
public:
	bool                                          UseRound;                                          // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_621A[0x2];                                     // 0x03DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TopSeed;                                           // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LockGround;                                        // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseSameFloor;                                      // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void NumToPoint();
	void RoomTopSetting();
	void SeedPlus1();
	void SeedMinus1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HouseB_PCG_C">();
	}
	static class ABP_HouseB_PCG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HouseB_PCG_C>();
	}
};

}

