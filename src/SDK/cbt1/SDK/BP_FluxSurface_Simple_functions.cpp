#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluxSurface_Simple

#include "Basic.hpp"

#include "BP_FluxSurface_Simple_classes.hpp"
#include "BP_FluxSurface_Simple_parameters.hpp"


namespace SDK
{

// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.AddToUnderSurfaceList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Item                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::AddToUnderSurfaceList(const class USceneComponent*& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "AddToUnderSurfaceList");

	Params::BP_FluxSurface_Simple_C_AddToUnderSurfaceList Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ApplyColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::ApplyColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ApplyColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ApplyColorProfiles
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::ApplyColorProfiles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ApplyColorProfiles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ApplyMask
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::ApplyMask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ApplyMask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ApplyMaterialData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> Materials                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FluxSurface_Simple_C::ApplyMaterialData(TArray<class UMaterialInstanceDynamic*>& Materials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ApplyMaterialData");

	Params::BP_FluxSurface_Simple_C_ApplyMaterialData Parms{};

	Parms.Materials = std::move(Materials);

	UObject::ProcessEvent(Func, &Parms);

	Materials = std::move(Parms.Materials);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ApplyPainter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::ApplyPainter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ApplyPainter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ApplySurfaceBoundsZ
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::ApplySurfaceBoundsZ()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ApplySurfaceBoundsZ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ApplySurfaceMaterialData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> Materials                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FluxSurface_Simple_C::ApplySurfaceMaterialData(const TArray<class UMaterialInstanceDynamic*>& Materials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ApplySurfaceMaterialData");

	Params::BP_FluxSurface_Simple_C_ApplySurfaceMaterialData Parms{};

	Parms.Materials = std::move(Materials);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ApplySurfaceNiagaraData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                ParticleSystem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    RequiredGround                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    RequiredWave                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::ApplySurfaceNiagaraData(class UNiagaraComponent* ParticleSystem, bool RequiredGround, bool RequiredWave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ApplySurfaceNiagaraData");

	Params::BP_FluxSurface_Simple_C_ApplySurfaceNiagaraData Parms{};

	Parms.ParticleSystem = ParticleSystem;
	Parms.RequiredGround = RequiredGround;
	Parms.RequiredWave = RequiredWave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.CanRenderInteractions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanRender                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::CanRenderInteractions(bool* CanRender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "CanRenderInteractions");

	Params::BP_FluxSurface_Simple_C_CanRenderInteractions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanRender != nullptr)
		*CanRender = Parms.CanRender;
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.CanRenderWave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanRender                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::CanRenderWave(bool* CanRender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "CanRenderWave");

	Params::BP_FluxSurface_Simple_C_CanRenderWave Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanRender != nullptr)
		*CanRender = Parms.CanRender;
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ConstructSurfaceMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::ConstructSurfaceMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ConstructSurfaceMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.CreateDynamicWaterBodyMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           WaterBodyActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Material                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::CreateDynamicWaterBodyMaterial(class AActor* WaterBodyActor, class UMaterialInstanceDynamic** Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "CreateDynamicWaterBodyMaterial");

	Params::BP_FluxSurface_Simple_C_CreateDynamicWaterBodyMaterial Parms{};

	Parms.WaterBodyActor = WaterBodyActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Material != nullptr)
		*Material = Parms.Material;
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.CreateMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::CreateMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "CreateMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.CreateMaterialsForMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::CreateMaterialsForMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "CreateMaterialsForMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.DetectCurrentCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::DetectCurrentCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "DetectCurrentCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ExecuteUbergraph_BP_FluxSurface_Simple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::ExecuteUbergraph_BP_FluxSurface_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ExecuteUbergraph_BP_FluxSurface_Simple");

	Params::BP_FluxSurface_Simple_C_ExecuteUbergraph_BP_FluxSurface_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.Generate
// (BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::Generate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "Generate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.GenerateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxSimulationState_C*       State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::GenerateMesh(class UPDA_FluxSimulationState_C* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "GenerateMesh");

	Params::BP_FluxSurface_Simple_C_GenerateMesh Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.GenerateProceduralMeshFromSimulationState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::GenerateProceduralMeshFromSimulationState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "GenerateProceduralMeshFromSimulationState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.Get Surface Height
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  SurfaceHeight                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::Get_Surface_Height(double* SurfaceHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "Get Surface Height");

	Params::BP_FluxSurface_Simple_C_Get_Surface_Height Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SurfaceHeight != nullptr)
		*SurfaceHeight = Parms.SurfaceHeight;
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.GetCoastlineState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxCoastlineState_C*        State                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::GetCoastlineState(class UPDA_FluxCoastlineState_C** State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "GetCoastlineState");

	Params::BP_FluxSurface_Simple_C_GetCoastlineState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.GetSimulationState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxSimulationState_C*       State                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::GetSimulationState(class UPDA_FluxSimulationState_C** State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "GetSimulationState");

	Params::BP_FluxSurface_Simple_C_GetSimulationState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.GetWaveTextureMaterials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> Param_MaterialInstances                                (Parm, OutParm)

void ABP_FluxSurface_Simple_C::GetWaveTextureMaterials(TArray<class UMaterialInstanceDynamic*>* Param_MaterialInstances)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "GetWaveTextureMaterials");

	Params::BP_FluxSurface_Simple_C_GetWaveTextureMaterials Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MaterialInstances != nullptr)
		*Param_MaterialInstances = std::move(Parms.Param_MaterialInstances);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.InitializeAllStates
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::InitializeAllStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "InitializeAllStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.InitializeOvelapingEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::InitializeOvelapingEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "InitializeOvelapingEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.InitializeOverlaping
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::InitializeOverlaping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "InitializeOverlaping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.InitializeStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::InitializeStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "InitializeStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.InitializeSurfaces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          AreaSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::InitializeSurfaces(const struct FVector& AreaSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "InitializeSurfaces");

	Params::BP_FluxSurface_Simple_C_InitializeSurfaces Parms{};

	Parms.AreaSize = std::move(AreaSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.InitializeVolumes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          AreaSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::InitializeVolumes(const struct FVector& AreaSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "InitializeVolumes");

	Params::BP_FluxSurface_Simple_C_InitializeVolumes Parms{};

	Parms.AreaSize = std::move(AreaSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.LoadMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::LoadMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "LoadMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.OffsetWorld
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::OffsetWorld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "OffsetWorld");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FluxSurface_Simple_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "ReceiveTick");

	Params::BP_FluxSurface_Simple_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.RemovePostprocess
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::RemovePostprocess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "RemovePostprocess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetCoastlineState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxCoastlineState_C*        State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetCoastlineState(class UPDA_FluxCoastlineState_C* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetCoastlineState");

	Params::BP_FluxSurface_Simple_C_SetCoastlineState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetInteractionsArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetInteractionsArea(const struct FLinearColor& Area)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetInteractionsArea");

	Params::BP_FluxSurface_Simple_C_SetInteractionsArea Parms{};

	Parms.Area = std::move(Area);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetInteractionsAreaVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetInteractionsAreaVehicle(const struct FLinearColor& Area)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetInteractionsAreaVehicle");

	Params::BP_FluxSurface_Simple_C_SetInteractionsAreaVehicle Parms{};

	Parms.Area = std::move(Area);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetInteractionsTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetInteractionsTexture(class UTextureRenderTarget2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetInteractionsTexture");

	Params::BP_FluxSurface_Simple_C_SetInteractionsTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetInteractionsTextureVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetInteractionsTextureVehicle(class UTextureRenderTarget2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetInteractionsTextureVehicle");

	Params::BP_FluxSurface_Simple_C_SetInteractionsTextureVehicle Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetNiagaraData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                NiagaraSystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    RequiredGround                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    RequiredWave                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetNiagaraData(class UNiagaraComponent* NiagaraSystem, bool& RequiredGround, bool& RequiredWave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetNiagaraData");

	Params::BP_FluxSurface_Simple_C_SetNiagaraData Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.RequiredGround = RequiredGround;
	Parms.RequiredWave = RequiredWave;

	UObject::ProcessEvent(Func, &Parms);

	RequiredGround = Parms.RequiredGround;
	RequiredWave = Parms.RequiredWave;
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetSimulationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxSimulationState_C*       State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetSimulationState(class UPDA_FluxSimulationState_C* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetSimulationState");

	Params::BP_FluxSurface_Simple_C_SetSimulationState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetStateHeightWetMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetStateHeightWetMap(class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetStateHeightWetMap");

	Params::BP_FluxSurface_Simple_C_SetStateHeightWetMap Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetWaveProfile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxWaveProfile_C*           Profile                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetWaveProfile(class UPDA_FluxWaveProfile_C* Profile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetWaveProfile");

	Params::BP_FluxSurface_Simple_C_SetWaveProfile Parms{};

	Parms.Profile = Profile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetWaveTexture
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::SetWaveTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetWaveTexture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SetWaveTextureAndArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SetWaveTextureAndArea(class UTextureRenderTarget2D* Texture, const struct FLinearColor& Area)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SetWaveTextureAndArea");

	Params::BP_FluxSurface_Simple_C_SetWaveTextureAndArea Parms{};

	Parms.Texture = Texture;
	Parms.Area = std::move(Area);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SpawnSplash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBS_FluxSplashData               BS_FluxSplashData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SpawnSplash(const struct FVector& Location, const struct FBS_FluxSplashData& BS_FluxSplashData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SpawnSplash");

	Params::BP_FluxSurface_Simple_C_SpawnSplash Parms{};

	Parms.Location = std::move(Location);
	Parms.BS_FluxSplashData = std::move(BS_FluxSplashData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SpawnSplashAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::SpawnSplashAtLocation(const struct FVector& Location, int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SpawnSplashAtLocation");

	Params::BP_FluxSurface_Simple_C_SpawnSplashAtLocation Parms{};

	Parms.Location = std::move(Location);
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.SwitchUnderFluidVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::SwitchUnderFluidVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "SwitchUnderFluidVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.Update by Platform
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::Update_by_Platform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "Update by Platform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.UpdateCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::UpdateCamera(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "UpdateCamera");

	Params::BP_FluxSurface_Simple_C_UpdateCamera Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.UpdateHeightMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::UpdateHeightMap(class UTexture* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "UpdateHeightMap");

	Params::BP_FluxSurface_Simple_C_UpdateHeightMap Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.WhenFeatureLevelChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FluxSurface_Simple_C::WhenFeatureLevelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "WhenFeatureLevelChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.Get Cut Mask
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector4                         Mask                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::Get_Cut_Mask(struct FVector4* Mask) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "Get Cut Mask");

	Params::BP_FluxSurface_Simple_C_Get_Cut_Mask Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mask != nullptr)
		*Mask = std::move(Parms.Mask);
}


// Function BP_FluxSurface_Simple.BP_FluxSurface_Simple_C.GetVolumeCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*              Volume                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_FluxSurface_Simple_C::GetVolumeCollision(class UPrimitiveComponent** Volume) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxSurface_Simple_C", "GetVolumeCollision");

	Params::BP_FluxSurface_Simple_C_GetVolumeCollision Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;
}

}
