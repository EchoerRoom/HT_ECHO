#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PacketHandler

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UHandlerComponentFactory : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HandlerComponentFactory">();
	}
	static class UHandlerComponentFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHandlerComponentFactory>();
	}
};

// Class PacketHandler.PacketHandlerProfileConfig
// 0x0010 (0x0038 - 0x0028)
class UPacketHandlerProfileConfig final : public UObject
{
public:
	TArray<class FString>                         Components;                                        // 0x0028(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PacketHandlerProfileConfig">();
	}
	static class UPacketHandlerProfileConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPacketHandlerProfileConfig>();
	}
};

}
