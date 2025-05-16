// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPProject.h"
#include "Modules/ModuleManager.h"

void FShaderLabModule::StartupModule()
{
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/TPProject", ShaderDirectory);
}

void FShaderLabModule::ShutdownModule()
{
	ResetAllShaderSourceDirectoryMappings();
}

IMPLEMENT_PRIMARY_GAME_MODULE(FShaderLabModule, TPProject, "TPProject");  