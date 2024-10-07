// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TPProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TPProject()
	{
		if (!Z_Registration_Info_UPackage__Script_TPProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TPProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x06E804E5,
				0x9366003F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TPProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TPProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TPProject(Z_Construct_UPackage__Script_TPProject, TEXT("/Script/TPProject"), Z_Registration_Info_UPackage__Script_TPProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x06E804E5, 0x9366003F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
