#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralGeneration

#include "Basic.hpp"

#include "ProceduralGeneration_classes.hpp"
#include "ProceduralGeneration_parameters.hpp"


namespace SDK
{

// Function ProceduralGeneration.PBG_DynamicMeshComponent.UpdateDynamicMesh
// (Final, Native, Public, BlueprintCallable)

void UPBG_DynamicMeshComponent::UpdateDynamicMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBG_DynamicMeshComponent", "UpdateDynamicMesh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.PBG_DynamicStaticMeshComponent.CreateDynamicMeshToStaticMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector2D>                PolygonVertices                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPBG_DynamicStaticMeshComponent::CreateDynamicMeshToStaticMesh(const TArray<struct FVector2D>& PolygonVertices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBG_DynamicStaticMeshComponent", "CreateDynamicMeshToStaticMesh");

	Params::PBG_DynamicStaticMeshComponent_CreateDynamicMeshToStaticMesh Parms{};

	Parms.PolygonVertices = std::move(PolygonVertices);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.PBG_DynamicStaticMeshComponent.UpdateDynamicMeshToStaticMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*                 Spline                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   TangentOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   SamplingOffset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DistanceOffset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EPBGDynamicMethod                       Method                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPBG_DynamicStaticMeshComponent::UpdateDynamicMeshToStaticMesh(class USplineComponent* Spline, float TangentOffset, float SamplingOffset, float DistanceOffset, EPBGDynamicMethod Method)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBG_DynamicStaticMeshComponent", "UpdateDynamicMeshToStaticMesh");

	Params::PBG_DynamicStaticMeshComponent_UpdateDynamicMeshToStaticMesh Parms{};

	Parms.Spline = Spline;
	Parms.TangentOffset = TangentOffset;
	Parms.SamplingOffset = SamplingOffset;
	Parms.DistanceOffset = DistanceOffset;
	Parms.Method = Method;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.ProceduralBuildGenerationActor.BuildPBGBuild
// (Final, Native, Public, BlueprintCallable)

void AProceduralBuildGenerationActor::BuildPBGBuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralBuildGenerationActor", "BuildPBGBuild");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.ProceduralBuildGenerationActor.BuildPBGBuildCreate
// (Final, Native, Public, BlueprintCallable)

void AProceduralBuildGenerationActor::BuildPBGBuildCreate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralBuildGenerationActor", "BuildPBGBuildCreate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.ProceduralBuildGenerationActor.ConvertDynamicMeshToStaticMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           AssetPath                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           AssetName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AProceduralBuildGenerationActor::ConvertDynamicMeshToStaticMesh(const class FString& AssetPath, const class FString& AssetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralBuildGenerationActor", "ConvertDynamicMeshToStaticMesh");

	Params::ProceduralBuildGenerationActor_ConvertDynamicMeshToStaticMesh Parms{};

	Parms.AssetPath = std::move(AssetPath);
	Parms.AssetName = std::move(AssetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.ProceduralBuildGenerationActor.CreateSocketMesh
// (Final, Native, Public, BlueprintCallable)

void AProceduralBuildGenerationActor::CreateSocketMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralBuildGenerationActor", "CreateSocketMesh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.ProceduralBuildGenerationActor.PCGPostGenerateFunction
// (Final, Native, Public, BlueprintCallable)

void AProceduralBuildGenerationActor::PCGPostGenerateFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralBuildGenerationActor", "PCGPostGenerateFunction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.ProceduralBuildGenerationActor.SetMobileSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UStaticMesh*>              Meshs                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void AProceduralBuildGenerationActor::SetMobileSetting(const TArray<class UStaticMesh*>& Meshs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralBuildGenerationActor", "SetMobileSetting");

	Params::ProceduralBuildGenerationActor_SetMobileSetting Parms{};

	Parms.Meshs = std::move(Meshs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.ProceduralBuildGenerationActor.UpDatePBGBuild
// (Final, Native, Public, BlueprintCallable)

void AProceduralBuildGenerationActor::UpDatePBGBuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralBuildGenerationActor", "UpDatePBGBuild");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralGeneration.ProceduralBuildGenerationActor.UpDatePBGBuildCreate
// (Final, Native, Public, BlueprintCallable)

void AProceduralBuildGenerationActor::UpDatePBGBuildCreate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralBuildGenerationActor", "UpDatePBGBuildCreate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
