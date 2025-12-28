// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/Input/ASInputComponent.h"

#ifdef ACTIONSHOOTERGAME_ASInputComponent_generated_h
#error "ASInputComponent.generated.h already included, missing '#pragma once' in ASInputComponent.h"
#endif
#define ACTIONSHOOTERGAME_ASInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UASInputComponent ********************************************************
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_UASInputComponent_NoRegister();

#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUASInputComponent(); \
	friend struct Z_Construct_UClass_UASInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_UASInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UASInputComponent, UEnhancedInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionShooterGame"), Z_Construct_UClass_UASInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UASInputComponent)


#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UASInputComponent(UASInputComponent&&) = delete; \
	UASInputComponent(const UASInputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASInputComponent) \
	NO_API virtual ~UASInputComponent();


#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h_12_PROLOG
#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UASInputComponent;

// ********** End Class UASInputComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
