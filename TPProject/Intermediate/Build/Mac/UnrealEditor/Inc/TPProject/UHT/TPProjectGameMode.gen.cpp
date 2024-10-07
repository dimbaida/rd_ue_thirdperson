// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPProject/TPProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TPPROJECT_API UClass* Z_Construct_UClass_ATPProjectGameMode();
TPPROJECT_API UClass* Z_Construct_UClass_ATPProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPProject();
// End Cross Module References

// Begin Class ATPProjectGameMode
void ATPProjectGameMode::StaticRegisterNativesATPProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPProjectGameMode);
UClass* Z_Construct_UClass_ATPProjectGameMode_NoRegister()
{
	return ATPProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ATPProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPProjectGameMode.h" },
		{ "ModuleRelativePath", "TPProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TPProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPProjectGameMode_Statics::ClassParams = {
	&ATPProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ATPProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPProjectGameMode.OuterSingleton, Z_Construct_UClass_ATPProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPProjectGameMode.OuterSingleton;
}
template<> TPPROJECT_API UClass* StaticClass<ATPProjectGameMode>()
{
	return ATPProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPProjectGameMode);
ATPProjectGameMode::~ATPProjectGameMode() {}
// End Class ATPProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPProjectGameMode, ATPProjectGameMode::StaticClass, TEXT("ATPProjectGameMode"), &Z_Registration_Info_UClass_ATPProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPProjectGameMode), 2059445982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPProjectGameMode_h_944211835(TEXT("/Script/TPProject"),
	Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
