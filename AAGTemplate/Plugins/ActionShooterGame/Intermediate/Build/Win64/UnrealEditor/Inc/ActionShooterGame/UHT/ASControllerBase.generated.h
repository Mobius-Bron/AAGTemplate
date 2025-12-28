// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/ASControllerBase.h"

#ifdef ACTIONSHOOTERGAME_ASControllerBase_generated_h
#error "ASControllerBase.generated.h already included, missing '#pragma once' in ASControllerBase.h"
#endif
#define ACTIONSHOOTERGAME_ASControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AASControllerBase ********************************************************
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASControllerBase_NoRegister();

#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAASControllerBase(); \
	friend struct Z_Construct_UClass_AASControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AASControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionShooterGame"), Z_Construct_UClass_AASControllerBase_NoRegister) \
	DECLARE_SERIALIZER(AASControllerBase)


#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AASControllerBase(AASControllerBase&&) = delete; \
	AASControllerBase(const AASControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AASControllerBase) \
	NO_API virtual ~AASControllerBase();


#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h_12_PROLOG
#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AASControllerBase;

// ********** End Class AASControllerBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
