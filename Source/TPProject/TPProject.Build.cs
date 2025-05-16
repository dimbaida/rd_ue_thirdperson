// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPProject : ModuleRules
{
	public TPProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",
			"UnrealEd"
		});
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore",
			"EnhancedInput",
			"RenderCore",
			"UMG"
		});
	}
}