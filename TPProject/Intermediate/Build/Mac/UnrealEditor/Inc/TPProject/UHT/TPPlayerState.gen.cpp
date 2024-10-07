// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPProject/TPPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
TPPROJECT_API UClass* Z_Construct_UClass_ATPPlayerState();
TPPROJECT_API UClass* Z_Construct_UClass_ATPPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPProject();
// End Cross Module References

// Begin Class ATPPlayerState
void ATPPlayerState::StaticRegisterNativesATPPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPPlayerState);
UClass* Z_Construct_UClass_ATPPlayerState_NoRegister()
{
	return ATPPlayerState::StaticClass();
}
struct Z_Construct_UClass_ATPPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPPlayerState.h" },
		{ "ModuleRelativePath", "TPPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "TPPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TPPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATPPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_TPProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATPPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ATPPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPPlayerState_Statics::ClassParams = {
	&ATPPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATPPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPPlayerState()
{
	if (!Z_Registration_Info_UClass_ATPPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPPlayerState.OuterSingleton, Z_Construct_UClass_ATPPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPPlayerState.OuterSingleton;
}
template<> TPPROJECT_API UClass* StaticClass<ATPPlayerState>()
{
	return ATPPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPPlayerState);
ATPPlayerState::~ATPPlayerState() {}
// End Class ATPPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPPlayerState, ATPPlayerState::StaticClass, TEXT("ATPPlayerState"), &Z_Registration_Info_UClass_ATPPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPPlayerState), 3552875465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPPlayerState_h_2310333121(TEXT("/Script/TPProject"),
	Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_TPPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
