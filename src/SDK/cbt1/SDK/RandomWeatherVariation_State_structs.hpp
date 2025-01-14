#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RandomWeatherVariation_State

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct RandomWeatherVariation_State.RandomWeatherVariation_State
// 0x0020 (0x0020 - 0x0000)
struct FRandomWeatherVariation_State final
{
public:
	class UUDS_Weather_Settings_C*                TargetRandomWeatherType_22_BBFDBC5E46C25F1DFB0037A44AB6D268; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUDS_Weather_Settings_C*                LastRandomWeatherType_24_4367B1AC4E64A2564E3960B3ED6E25D8; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

