// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPProject/TPAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
TPPROJECT_API UClass* Z_Construct_UClass_UTPAttributeSet();
TPPROJECT_API UClass* Z_Construct_UClass_UTPAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPProject();
// End Cross Module References

// Begin Class UTPAttributeSet
void UTPAttributeSet::StaticRegisterNativesUTPAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPAttributeSet);
UClass* Z_Construct_UClass_UTPAttributeSet_NoRegister()
{
	return UTPAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UTPAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TPAttributeSet.h" },
		{ "ModuleRelativePath", "TPAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTPAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_TPProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPAttributeSet_Statics::ClassParams = {
	&UTPAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTPAttributeSet()
{
	if (!Z_Registration_Info_UClass_UTPAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPAttributeSet.OuterSingleton, Z_Construct_UClass_UTPAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTPAttributeSet.OuterSingleton;
}
template<> TPPROJECT_API UClass* StaticClass<UTPAttributeSet>()
{
	return UTPAttributeSet::StaticClass();
}
UTPAttributeSet::UTPAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTPAttributeSet);
UTPAttributeSet::~UTPAttributeSet() {}
// End Class UTPAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTPAttributeSet, UTPAttributeSet::StaticClass, TEXT("UTPAttributeSet"), &Z_Registration_Info_UClass_UTPAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPAttributeSet), 1588669979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPAttributeSet_h_506595294(TEXT("/Script/TPProject"),
	Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
