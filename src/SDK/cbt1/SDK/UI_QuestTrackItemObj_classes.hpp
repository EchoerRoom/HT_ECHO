#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_QuestTrackItemObj

#include "Basic.hpp"

#include "HTGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_QuestTrackItemObj.UI_QuestTrackItemObj_C
// 0x0010 (0x0B20 - 0x0B10)
class UUI_QuestTrackItemObj_C final : public UUI_QuestObjectiveTrackItem
{
public:
	class UImage*                                 Image_93;                                          // 0x0B10(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_QuestTrackItemObj_C">();
	}
	static class UUI_QuestTrackItemObj_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_QuestTrackItemObj_C>();
	}
};

}

