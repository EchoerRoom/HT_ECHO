#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Oceanology_Plugin

#include "Basic.hpp"

#include "Oceanology_Plugin_classes.hpp"
#include "Oceanology_Plugin_parameters.hpp"


namespace SDK
{

// Function Oceanology_Plugin.Oceanology_PluginBPLibrary.Oceanology_PluginSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Param                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UOceanology_PluginBPLibrary::Oceanology_PluginSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Oceanology_PluginBPLibrary", "Oceanology_PluginSampleFunction");

	Params::Oceanology_PluginBPLibrary_Oceanology_PluginSampleFunction Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Oceanology_Plugin.QuadTree.Procedural
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHierarchicalInstancedStaticMeshComponent*HISMC                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   GridSize                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   GridTiles                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   CellSize                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AQuadTree::Procedural(class UHierarchicalInstancedStaticMeshComponent* HISMC, float GridSize, int32 GridTiles, float CellSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuadTree", "Procedural");

	Params::QuadTree_Procedural Parms{};

	Parms.HISMC = HISMC;
	Parms.GridSize = GridSize;
	Parms.GridTiles = GridTiles;
	Parms.CellSize = CellSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Oceanology_Plugin.QuadTree.SetEditorTickEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AQuadTree::SetEditorTickEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuadTree", "SetEditorTickEnabled");

	Params::QuadTree_SetEditorTickEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
