// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class gamedev : ModuleRules
{
	public gamedev(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
