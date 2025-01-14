#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniMapIconAnimation_Hide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HTGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MiniMapIconAnimation_Hide.MiniMapIconAnimation_Hide_C
// 0x0008 (0x0068 - 0x0060)
class UMiniMapIconAnimation_Hide_C final : public UHTMiniMapIconAnimation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0060(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BP_PlayAnimation();
	void BP_Tick(float InDeltaTime);
	void ExecuteUbergraph_MiniMapIconAnimation_Hide(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconAnimation_Hide_C">();
	}
	static class UMiniMapIconAnimation_Hide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconAnimation_Hide_C>();
	}
};

}

