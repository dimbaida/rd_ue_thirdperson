// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPProject/AbilityInputSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityInputSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
TPPROJECT_API UClass* Z_Construct_UClass_UAbilityInputSubsystem();
TPPROJECT_API UClass* Z_Construct_UClass_UAbilityInputSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPProject();
// End Cross Module References

// Begin Class UAbilityInputSubsystem Function GetAbilityInputID
struct Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics
{
	struct AbilityInputSubsystem_eventGetAbilityInputID_Parms
	{
		UInputAction* InputAction;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilityInputSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityInputSubsystem_eventGetAbilityInputID_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityInputSubsystem_eventGetAbilityInputID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityInputSubsystem, nullptr, "GetAbilityInputID", nullptr, nullptr, Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::AbilityInputSubsystem_eventGetAbilityInputID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::AbilityInputSubsystem_eventGetAbilityInputID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityInputSubsystem::execGetAbilityInputID)
{
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityInputID(Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UAbilityInputSubsystem Function GetAbilityInputID

// Begin Class UAbilityInputSubsystem Function InputCompletedAbility
struct Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics
{
	struct AbilityInputSubsystem_eventInputCompletedAbility_Parms
	{
		int32 InputID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilityInputSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityInputSubsystem_eventInputCompletedAbility_Parms, InputID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::NewProp_InputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityInputSubsystem, nullptr, "InputCompletedAbility", nullptr, nullptr, Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::AbilityInputSubsystem_eventInputCompletedAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::AbilityInputSubsystem_eventInputCompletedAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityInputSubsystem::execInputCompletedAbility)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InputID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InputCompletedAbility(Z_Param_InputID);
	P_NATIVE_END;
}
// End Class UAbilityInputSubsystem Function InputCompletedAbility

// Begin Class UAbilityInputSubsystem Function InputTriggerAbility
struct Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics
{
	struct AbilityInputSubsystem_eventInputTriggerAbility_Parms
	{
		int32 InputID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilityInputSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityInputSubsystem_eventInputTriggerAbility_Parms, InputID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::NewProp_InputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityInputSubsystem, nullptr, "InputTriggerAbility", nullptr, nullptr, Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::AbilityInputSubsystem_eventInputTriggerAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::AbilityInputSubsystem_eventInputTriggerAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityInputSubsystem::execInputTriggerAbility)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InputID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InputTriggerAbility(Z_Param_InputID);
	P_NATIVE_END;
}
// End Class UAbilityInputSubsystem Function InputTriggerAbility

// Begin Class UAbilityInputSubsystem
void UAbilityInputSubsystem::StaticRegisterNativesUAbilityInputSubsystem()
{
	UClass* Class = UAbilityInputSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilityInputID", &UAbilityInputSubsystem::execGetAbilityInputID },
		{ "InputCompletedAbility", &UAbilityInputSubsystem::execInputCompletedAbility },
		{ "InputTriggerAbility", &UAbilityInputSubsystem::execInputTriggerAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityInputSubsystem);
UClass* Z_Construct_UClass_UAbilityInputSubsystem_NoRegister()
{
	return UAbilityInputSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAbilityInputSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilityInputSubsystem.h" },
		{ "ModuleRelativePath", "AbilityInputSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "ModuleRelativePath", "AbilityInputSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputMapping_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityInputSubsystem_GetAbilityInputID, "GetAbilityInputID" }, // 2311649602
		{ &Z_Construct_UFunction_UAbilityInputSubsystem_InputCompletedAbility, "InputCompletedAbility" }, // 2593433043
		{ &Z_Construct_UFunction_UAbilityInputSubsystem_InputTriggerAbility, "InputTriggerAbility" }, // 206131039
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityInputSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilityInputSubsystem_Statics::NewProp_InputMapping_ValueProp = { "InputMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityInputSubsystem_Statics::NewProp_InputMapping_Key_KeyProp = { "InputMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAbilityInputSubsystem_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityInputSubsystem, InputMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityInputSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityInputSubsystem_Statics::NewProp_InputMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityInputSubsystem_Statics::NewProp_InputMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityInputSubsystem_Statics::NewProp_InputMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInputSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityInputSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TPProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInputSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityInputSubsystem_Statics::ClassParams = {
	&UAbilityInputSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityInputSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInputSubsystem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInputSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityInputSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityInputSubsystem()
{
	if (!Z_Registration_Info_UClass_UAbilityInputSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityInputSubsystem.OuterSingleton, Z_Construct_UClass_UAbilityInputSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityInputSubsystem.OuterSingleton;
}
template<> TPPROJECT_API UClass* StaticClass<UAbilityInputSubsystem>()
{
	return UAbilityInputSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityInputSubsystem);
UAbilityInputSubsystem::~UAbilityInputSubsystem() {}
// End Class UAbilityInputSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityInputSubsystem, UAbilityInputSubsystem::StaticClass, TEXT("UAbilityInputSubsystem"), &Z_Registration_Info_UClass_UAbilityInputSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityInputSubsystem), 3035963967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_2668913746(TEXT("/Script/TPProject"),
	Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
