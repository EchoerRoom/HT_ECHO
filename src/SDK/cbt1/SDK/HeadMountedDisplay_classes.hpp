#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeadMountedDisplay

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "HeadMountedDisplay_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Class HeadMountedDisplay.MotionControllerComponent
// 0x0140 (0x0660 - 0x0520)
class UMotionControllerComponent final : public UPrimitiveComponent
{
public:
	int32                                         PlayerIndex;                                       // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MotionSource;                                      // 0x0524(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDisableLowLatencyUpdate : 1;                      // 0x052C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_13DB[0x3];                                     // 0x052D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ETrackingStatus                               CurrentTrackingStatus;                             // 0x0530(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13DC[0x12F];                                   // 0x0531(0x012F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FVector GetHandJointPosition(int32 JointIndex, bool* bValueFound);
	float GetParameterValue(class FName InName, bool* bValueFound);
	void OnMotionControllerUpdated();
	void SetAssociatedPlayerIndex(const int32 NewPlayer);
	void SetTrackingMotionSource(const class FName NewSource);
	void SetTrackingSource(const EControllerHand NewSource);

	bool GetAngularVelocity(struct FRotator* OutAngularVelocity) const;
	bool GetLinearAcceleration(struct FVector* OutLinearAcceleration) const;
	bool GetLinearVelocity(struct FVector* OutLinearVelocity) const;
	EControllerHand GetTrackingSource() const;
	bool IsTracked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionControllerComponent">();
	}
	static class UMotionControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionControllerComponent>();
	}
};

// Class HeadMountedDisplay.HandKeypointConversion
// 0x0000 (0x0028 - 0x0028)
class UHandKeypointConversion final : public UBlueprintFunctionLibrary
{
public:
	static int32 Conv_HandKeypointToInt32(EHandKeypoint Input);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HandKeypointConversion">();
	}
	static class UHandKeypointConversion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHandKeypointConversion>();
	}
};

}
