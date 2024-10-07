// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityInputSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
#ifdef TPPROJECT_AbilityInputSubsystem_generated_h
#error "AbilityInputSubsystem.generated.h already included, missing '#pragma once' in AbilityInputSubsystem.h"
#endif
#define TPPROJECT_AbilityInputSubsystem_generated_h

#define FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInputCompletedAbility); \
	DECLARE_FUNCTION(execInputTriggerAbility); \
	DECLARE_FUNCTION(execGetAbilityInputID);


#define FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityInputSubsystem(); \
	friend struct Z_Construct_UClass_UAbilityInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAbilityInputSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TPProject"), NO_API) \
	DECLARE_SERIALIZER(UAbilityInputSubsystem)


#define FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityInputSubsystem(UAbilityInputSubsystem&&); \
	UAbilityInputSubsystem(const UAbilityInputSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityInputSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityInputSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityInputSubsystem) \
	NO_API virtual ~UAbilityInputSubsystem();


#define FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_13_PROLOG
#define FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPPROJECT_API UClass* StaticClass<class UAbilityInputSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dim_Documents_GitHub_rd_ue_thirdperson_TPProject_Source_TPProject_AbilityInputSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
