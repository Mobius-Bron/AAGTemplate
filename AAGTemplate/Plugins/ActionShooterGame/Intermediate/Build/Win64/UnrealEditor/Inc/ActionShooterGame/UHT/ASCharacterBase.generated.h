// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ASCharacterBase.h"

#ifdef ACTIONSHOOTERGAME_ASCharacterBase_generated_h
#error "ASCharacterBase.generated.h already included, missing '#pragma once' in ASCharacterBase.h"
#endif
#define ACTIONSHOOTERGAME_ASCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AASCharacterBase *********************************************************
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASCharacterBase_NoRegister();

#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAASCharacterBase(); \
	friend struct Z_Construct_UClass_AASCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AASCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionShooterGame"), Z_Construct_UClass_AASCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(AASCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AASCharacterBase*>(this); }


#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AASCharacterBase(AASCharacterBase&&) = delete; \
	AASCharacterBase(const AASCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AASCharacterBase) \
	NO_API virtual ~AASCharacterBase();


#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h_15_PROLOG
#define FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AASCharacterBase;

// ********** End Class AASCharacterBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
