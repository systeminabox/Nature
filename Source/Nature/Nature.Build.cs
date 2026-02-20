// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Nature : ModuleRules
{
	public Nature(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Nature",
			"Nature/Variant_Platforming",
			"Nature/Variant_Platforming/Animation",
			"Nature/Variant_Combat",
			"Nature/Variant_Combat/AI",
			"Nature/Variant_Combat/Animation",
			"Nature/Variant_Combat/Gameplay",
			"Nature/Variant_Combat/Interfaces",
			"Nature/Variant_Combat/UI",
			"Nature/Variant_SideScrolling",
			"Nature/Variant_SideScrolling/AI",
			"Nature/Variant_SideScrolling/Gameplay",
			"Nature/Variant_SideScrolling/Interfaces",
			"Nature/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
