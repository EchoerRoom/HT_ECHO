#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RainMan_Lake

#include "Basic.hpp"

#include "BP_RainManLake_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RainMan_Lake.BP_RainMan_Lake_C
// 0x0008 (0x0BE8 - 0x0BE0)
class ABP_RainMan_Lake_C final : public ABP_RainManLake_C
{
public:
	class UStaticMesh*                            StaticMesh;                                        // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RainMan_Lake_C">();
	}
	static class ABP_RainMan_Lake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RainMan_Lake_C>();
	}
};

}

