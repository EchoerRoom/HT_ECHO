#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FacialAnimation

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class FacialAnimation.AudioCurveSourceComponent
// 0x0040 (0x0C50 - 0x0C10)
class UAudioCurveSourceComponent final : public UAudioComponent
{
public:
	class FName                                   CurveSourceBindingName;                            // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurveSyncOffset;                                   // 0x0C18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E5E[0x34];                                    // 0x0C1C(0x0034)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCurveSourceComponent">();
	}
	static class UAudioCurveSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCurveSourceComponent>();
	}
};

}
