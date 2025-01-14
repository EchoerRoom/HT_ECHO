#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreenSpaceFogScattering

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ScreenSpaceFogScattering.ScreenSpaceFogScatteringSubsystem
// 0x0010 (0x0040 - 0x0030)
class UScreenSpaceFogScatteringSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_4D66[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScreenSpaceFogScatteringSubsystem">();
	}
	static class UScreenSpaceFogScatteringSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScreenSpaceFogScatteringSubsystem>();
	}
};

}

