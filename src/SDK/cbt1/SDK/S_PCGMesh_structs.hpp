#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_PCGMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_PCGMesh.S_PCGMesh
// 0x0080 (0x0080 - 0x0000)
struct FS_PCGMesh final
{
public:
	class UStaticMesh*                            Mesh_2_2CEE5844430787B17CD303AC0F92831A;           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Weight_6_517F2ADB406823939A1C27820E796702;         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6202[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Tranform_11_4692B27F4E7C5C3149834DB6C9BE7043;      // 0x0010(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RandomScale_14_B5A536DD45DD15037E826A8A6B43AEC9;   // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
