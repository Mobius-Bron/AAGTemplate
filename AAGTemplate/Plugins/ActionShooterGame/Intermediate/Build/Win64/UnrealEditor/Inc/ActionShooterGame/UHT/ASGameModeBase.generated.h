// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/ASGameModeBase.h"

#ifdef ACTIONSHOOTERGAME_ASGameModeBase_generated_h
#error "ASGameModeBase.generated.h already included, missing '#pragma once' in ASGameModeBase.h"
#endif
#define ACTIONSHOOTERGAME_ASGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AASGameModeBase **********************************************************
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASGameModeBase_NoRegister();

#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAASGameModeBase(); \
	friend struct Z_Construct_UClass_AASGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AASGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionShooterGame"), Z_Construct_UClass_AASGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AASGameModeBase)


#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AASGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AASGameModeBase(AASGameModeBase&&) = delete; \
	AASGameModeBase(const AASGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AASGameModeBase) \
	NO_API virtual ~AASGameModeBase();


#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h_12_PROLOG
#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AASGameModeBase;

// ********** End Class AASGameModeBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
