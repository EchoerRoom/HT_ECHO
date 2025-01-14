#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CableLineKit

#include "Basic.hpp"

#include "CableLineKit_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class CableLineKit.CableLineActor
// 0x0030 (0x02D0 - 0x02A0)
class ACableLineActor final : public AActor
{
public:
	class UStaticMeshComponent*                   PoleMesh;                                          // 0x02A0(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                    Billboard;                                         // 0x02A8(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableAutoAttachToGround;                         // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableAutoConnecteToActor;                        // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3041[0x6];                                     // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACableLineActor*                        ConnectedActor;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCablePropertiesGroup>          CablePropertiesGroups;                             // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CableLineActor">();
	}
	static class ACableLineActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACableLineActor>();
	}
};

// Class CableLineKit.CableLineSubsystem
// 0x0060 (0x00A0 - 0x0040)
class UCableLineSubsystem final : public UTickableWorldSubsystem
{
public:
	uint8                                         Pad_3042[0x60];                                    // 0x0040(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CableLineSubsystem">();
	}
	static class UCableLineSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCableLineSubsystem>();
	}
};

// Class CableLineKit.CableLineWorldPartitionActor
// 0x0000 (0x02A0 - 0x02A0)
class ACableLineWorldPartitionActor final : public APartitionActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CableLineWorldPartitionActor">();
	}
	static class ACableLineWorldPartitionActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACableLineWorldPartitionActor>();
	}
};

}

