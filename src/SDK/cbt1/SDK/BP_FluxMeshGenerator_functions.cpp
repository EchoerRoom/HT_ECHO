#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluxMeshGenerator

#include "Basic.hpp"

#include "BP_FluxMeshGenerator_classes.hpp"
#include "BP_FluxMeshGenerator_parameters.hpp"


namespace SDK
{

// Function BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.GenerateMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProceduralMeshComponent*         InitMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPDA_FluxSimulationState_C*       InitState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   LOD                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                                   Padding                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Vetticles                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Polygons                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FluxMeshGenerator_C::GenerateMesh(class UProceduralMeshComponent* InitMesh, class UPDA_FluxSimulationState_C* InitState, int32 LOD, class UMaterialInterface* Material, uint8 Padding, int32* Vetticles, int32* Polygons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxMeshGenerator_C", "GenerateMesh");

	Params::BP_FluxMeshGenerator_C_GenerateMesh Parms{};

	Parms.InitMesh = InitMesh;
	Parms.InitState = InitState;
	Parms.LOD = LOD;
	Parms.Material = Material;
	Parms.Padding = Padding;

	UObject::ProcessEvent(Func, &Parms);

	if (Vetticles != nullptr)
		*Vetticles = Parms.Vetticles;

	if (Polygons != nullptr)
		*Polygons = Parms.Polygons;
}


// Function BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.GetTriangle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   One                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Two                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Three                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FluxMeshGenerator_C::GetTriangle(TArray<int32>& Array, int32 Param_Index, int32* One, int32* Two, int32* Three)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxMeshGenerator_C", "GetTriangle");

	Params::BP_FluxMeshGenerator_C_GetTriangle Parms{};

	Parms.Array = std::move(Array);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (One != nullptr)
		*One = Parms.One;

	if (Two != nullptr)
		*Two = Parms.Two;

	if (Three != nullptr)
		*Three = Parms.Three;
}


// Function BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.InitializeBuffers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxSimulationState_C*       State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                                   EdgePadding                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  FoamScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FluxMeshGenerator_C::InitializeBuffers(class UPDA_FluxSimulationState_C* State, uint8 EdgePadding, double FoamScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxMeshGenerator_C", "InitializeBuffers");

	Params::BP_FluxMeshGenerator_C_InitializeBuffers Parms{};

	Parms.State = State;
	Parms.EdgePadding = EdgePadding;
	Parms.FoamScale = FoamScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.ReadWater
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Uv                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Velocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Water                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Foam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FluxMeshGenerator_C::ReadWater(const struct FVector2D& Uv, struct FVector2D* Velocity, double* Water, double* Foam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxMeshGenerator_C", "ReadWater");

	Params::BP_FluxMeshGenerator_C_ReadWater Parms{};

	Parms.Uv = std::move(Uv);

	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = std::move(Parms.Velocity);

	if (Water != nullptr)
		*Water = Parms.Water;

	if (Foam != nullptr)
		*Foam = Parms.Foam;
}


// Function BP_FluxMeshGenerator.BP_FluxMeshGenerator_C.ReadHeight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector2D                        Uv                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FluxMeshGenerator_C::ReadHeight(struct FVector2D& Uv, double* Height) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluxMeshGenerator_C", "ReadHeight");

	Params::BP_FluxMeshGenerator_C_ReadHeight Parms{};

	Parms.Uv = std::move(Uv);

	UObject::ProcessEvent(Func, &Parms);

	Uv = std::move(Parms.Uv);

	if (Height != nullptr)
		*Height = Parms.Height;
}

}
