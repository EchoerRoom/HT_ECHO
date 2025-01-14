#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonLoadingScreen

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class CommonLoadingScreen.LoadingProcessInterface
// 0x0000 (0x0028 - 0x0028)
class ILoadingProcessInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingProcessInterface">();
	}
	static class ILoadingProcessInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ILoadingProcessInterface>();
	}
};

// Class CommonLoadingScreen.CommonLoadingScreenSettings
// 0x0038 (0x0070 - 0x0038)
class UCommonLoadingScreenSettings final : public UDeveloperSettingsBackedByCVars
{
public:
	struct FSoftClassPath                         LoadingScreenWidget;                               // 0x0038(0x0020)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LoadingScreenZOrder;                               // 0x0058(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HoldLoadingScreenAdditionalSecs;                   // 0x005C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LoadingScreenHeartbeatHangDuration;                // 0x0060(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LogLoadingScreenHeartbeatInterval;                 // 0x0064(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          LogLoadingScreenReasonEveryFrame;                  // 0x0068(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForceLoadingScreenVisible;                         // 0x0069(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HoldLoadingScreenAdditionalSecsEvenInEditor;       // 0x006A(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForceTickLoadingScreenEvenInEditor;                // 0x006B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31CB[0x4];                                     // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonLoadingScreenSettings">();
	}
	static class UCommonLoadingScreenSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonLoadingScreenSettings>();
	}
};

// Class CommonLoadingScreen.LoadingScreenManager
// 0x0088 (0x00B8 - 0x0030)
class ULoadingScreenManager final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_31CC[0x88];                                    // 0x0030(0x0088)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString GetDebugReasonForShowingOrHidingLoadingScreen() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingScreenManager">();
	}
	static class ULoadingScreenManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingScreenManager>();
	}
};

// Class CommonLoadingScreen.LoadingProcessTask
// 0x0018 (0x0040 - 0x0028)
class ULoadingProcessTask final : public UObject
{
public:
	uint8                                         Pad_31CD[0x18];                                    // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULoadingProcessTask* CreateLoadingScreenProcessTask(class UObject* WorldContextObject, const class FString& ShowLoadingScreenReason);

	void SetShowLoadingScreenReason(const class FString& InReason);
	void Unregister();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingProcessTask">();
	}
	static class ULoadingProcessTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingProcessTask>();
	}
};

}

