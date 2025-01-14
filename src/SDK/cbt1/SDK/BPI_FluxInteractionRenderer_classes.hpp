#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_FluxInteractionRenderer

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_FluxInteractionRenderer_C final : public IInterface
{
public:
	void CanRenderInteractions(bool* CanRender);
	void GetCoastlineState(class UPDA_FluxCoastlineState_C** State);
	void GetSimulationState(class UPDA_FluxSimulationState_C** State);
	void SetInteractionsArea(const struct FLinearColor& Area);
	void SetInteractionsAreaVehicle(const struct FLinearColor& Area);
	void SetInteractionsTexture(class UTextureRenderTarget2D* Texture);
	void SetInteractionsTextureVehicle(class UTextureRenderTarget2D* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_FluxInteractionRenderer_C">();
	}
	static class IBPI_FluxInteractionRenderer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_FluxInteractionRenderer_C>();
	}
};

}

