#include "UMethod.h"
#include <windows.h>
#include <iostream>
#include "../Menu/Config/ConfigManager.h"
#include <vector>

using namespace UC;
using namespace SDK;

namespace Cheat
{

	UC::FString StringToFString(std::string str)
	{
		int sizeNeeded = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, NULL, 0);
		wchar_t* wcharArray = new wchar_t[sizeNeeded]; // 动态分配缓冲区
		MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, wcharArray, sizeNeeded); // 转换

		UC::FString result = wcharArray;
		return result;
	}


	std::string FStringToString(UC::FString FString)
	{
		return FString.ToString().c_str();
	}


	SDK::APlayerController* UGetPlayerController() {
		SDK::UWorld* World = SDK::UWorld::GetWorld();
		SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
		return MyController;
	}

	void UShowCursor(bool bShow)
	{
		SDK::UWorld* World = SDK::UWorld::GetWorld();
		SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
		MyController->bShowMouseCursor = (UC::uint8)(bShow ? 1 : 0);
	}

	void  ExecuteConsoleCommand(std::string Command) {
		SDK::UWorld* World = SDK::UWorld::GetWorld();
		SDK::UKismetSystemLibrary::ExecuteConsoleCommand(World, StringToFString(Command), UGetPlayerController());
	}

	void ShowConsole(bool show) {
		try {
			SDK::UEngine* Engine = SDK::UEngine::GetEngine();
			if (!Engine) {
				LOG_ERROR("Engine not found!");
				return;
			}
			SDK::UWorld* World = SDK::UWorld::GetWorld();
			if (!World) {
				LOG_ERROR("World not found!");
				return;
			}
			if (show) {
				if (Engine->GameViewport->ViewportConsole) {
					LOG_WARNING("UConsole is already enabled!");
					return;
				}
				SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName =
					SDK::UKismetStringLibrary::Conv_StringToName(L"F10");
				SDK::UObject* NewConsole = SDK::UGameplayStatics::SpawnObject(
					Engine->ConsoleClass, Engine->GameViewport);

				if (!NewConsole) {
					LOG_ERROR("Failed to spawn UConsole object!");
					return;
				}
				Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewConsole);
				LOG_DEBUG("UConsole enabled!");
			}
			else {
				if (Engine->GameViewport->ViewportConsole) {
					SDK::UConsole* OldConsole = Engine->GameViewport->ViewportConsole;
					Engine->GameViewport->ViewportConsole = nullptr;
					LOG_DEBUG("UConsole disabled and cleaned up!");
				}
				else {
					LOG_WARNING("UConsole is already disabled!");
				}
			}
		}
		catch (const std::exception& e) {
			LOG_ERROR("UConsole: Error: %s", e.what());
		}
	}


	
	void ShowGMConsoleUI() {
		SDK::UHTCheatManager* c = SDK::GetDefaultObjImpl<SDK::UHTCheatManager>();
		c->ShowGMConsoleUI();
	}



	SDK::FVector  GetActorLocation(SDK::AActor* Actor) {
		return Actor->K2_GetActorLocation();
	}
	//SDK::FQuat  GetActorQuaternion(SDK::AActor* Actor) {
	//	return Actor->K2_GetActorQuaternion();
	//}
	SDK::FRotator  GetActorRotation(SDK::AActor* Actor){
		return Actor->K2_GetActorRotation();
	}





}