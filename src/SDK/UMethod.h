#pragma once

#include "Unreal.h"
#include "../Vendors/logger/Logger.h"


using namespace UC;

namespace Cheat {

	UC::FString StringToFString(std::string str);

	std::string FStringToString(UC::FString FString);
	SDK::APlayerController* UGetPlayerController();

	void UShowCursor(bool bShow);
	void ShowGMConsoleUI();
	void  ExecuteConsoleCommand(std::string Command);
	void ShowConsole(bool show);



	SDK::FVector  GetActorLocation(SDK::AActor* Actor);
	//SDK::FQuat  GetActorQuaternion(SDK::AActor* Actor);
	SDK::FRotator  GetActorRotation(SDK::AActor* Actor);

	//自定义实体类
	//class Entity :public SDK::AActor
	//{
	//public:
	//	SDK::AActor* Actor;
	//	SDK::FVector Location;   // 保存位置
	//	SDK::FQuat Quaternion;   // 保存旋转（四元数）
	//	SDK::FRotator Rotation;  // 保存旋转（欧拉角）

	//	Entity(SDK::AActor* Actor) :Actor(Actor), Location(SDK::FVector(0, 0, 0)), Quaternion(SDK::FQuat(0, 0, 0, 0)), Rotation(SDK::FRotator(0, 0, 0))
	//	{
	//		Location = Actor->K2_GetActorLocation();
	//		Quaternion = Actor->K2_GetActorQuaternion();
	//		Rotation = Actor->K2_GetActorRotation();
	//	}

	//};
	//SDK::AActor* GetActor_ById(UC::int32 EntityId);
	//class Entity* GetEntityById(UC::int32 EntityId);
}