#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ultra_Dynamic_Weather_Interface

#include "Basic.hpp"

#include "UDS_Project_Mode_structs.hpp"
#include "Engine_structs.hpp"
#include "UDS_and_UDW_State_structs.hpp"


namespace SDK::Params
{

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State
// 0x0178 (0x0178 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Apply_State final
{
public:
	struct FUDS_and_UDW_State                     State;                                             // 0x0000(0x0178)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Destroy Close Thunder Component
// 0x0008 (0x0008 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Destroy_Close_Thunder_Component final
{
public:
	class USceneComponent*                        Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Close Thunder Sound Occlusion
// 0x0010 (0x0010 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Get_Close_Thunder_Sound_Occlusion final
{
public:
	double                                        Volume;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LPF;                                               // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
// 0x0008 (0x0008 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Direction final
{
public:
	double                                        Intended_Cloud_Direction;                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
// 0x0008 (0x0008 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Speed final
{
public:
	double                                        Intended_Cloud_Speed;                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Water Level
// 0x0010 (0x0010 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Get_Intended_Water_Level final
{
public:
	bool                                          Using_Water_Level;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52DD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Water_Level;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving
// 0x0178 (0x0178 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Get_State_for_Saving final
{
public:
	struct FUDS_and_UDW_State                     UDW_State;                                         // 0x0000(0x0178)(Parm, OutParm, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Weather Particle Collision Channel
// 0x0001 (0x0001 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Get_Weather_Particle_Collision_Channel final
{
public:
	ECollisionChannel                             Channel;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Project Mode
// 0x0001 (0x0001 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Set_Project_Mode final
{
public:
	EUDS_Project_Mode                             Mode;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Weather Settings from UDS
// 0x0018 (0x0018 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Update_Weather_Settings_from_UDS final
{
public:
	double                                        Cloud_Coverage;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fog;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Dust;                                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Rainbow MID
// 0x0010 (0x0010 - 0x0000)
struct Ultra_Dynamic_Weather_Interface_C_Get_Rainbow_MID final
{
public:
	bool                                          Rainbow_Enabled;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52DE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
