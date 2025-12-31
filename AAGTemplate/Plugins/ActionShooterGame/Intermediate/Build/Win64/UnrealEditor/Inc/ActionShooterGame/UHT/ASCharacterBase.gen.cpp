// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/ASCharacterBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeASCharacterBase() {}

// ********** Begin Cross Module References ********************************************************
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASCharacterBase();
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASCharacterBase_NoRegister();
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_UASAbilitySystemComponent_NoRegister();
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_UASAttributeSet_NoRegister();
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_UDataAsset_StartUpBase_NoRegister();
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_UPawnUiInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ActionShooterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AASCharacterBase *********************************************************
void AASCharacterBase::StaticRegisterNativesAASCharacterBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AASCharacterBase;
UClass* AASCharacterBase::GetPrivateStaticClass()
{
	using TClass = AASCharacterBase;
	if (!Z_Registration_Info_UClass_AASCharacterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ASCharacterBase"),
			Z_Registration_Info_UClass_AASCharacterBase.InnerSingleton,
			StaticRegisterNativesAASCharacterBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AASCharacterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AASCharacterBase_NoRegister()
{
	return AASCharacterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AASCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ASCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/ASCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterASC_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ASCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAttributeSet_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ASCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStartUpData_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Public/Character/ASCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAttributeSet;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CharacterStartUpData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASCharacterBase_Statics::NewProp_CharacterASC = { "CharacterASC", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCharacterBase, CharacterASC), Z_Construct_UClass_UASAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterASC_MetaData), NewProp_CharacterASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASCharacterBase_Statics::NewProp_CharacterAttributeSet = { "CharacterAttributeSet", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCharacterBase, CharacterAttributeSet), Z_Construct_UClass_UASAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAttributeSet_MetaData), NewProp_CharacterAttributeSet_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AASCharacterBase_Statics::NewProp_CharacterStartUpData = { "CharacterStartUpData", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCharacterBase, CharacterStartUpData), Z_Construct_UClass_UDataAsset_StartUpBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStartUpData_MetaData), NewProp_CharacterStartUpData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCharacterBase_Statics::NewProp_CharacterASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCharacterBase_Statics::NewProp_CharacterAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCharacterBase_Statics::NewProp_CharacterStartUpData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AASCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ActionShooterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AASCharacterBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AASCharacterBase, IAbilitySystemInterface), false },  // 1199015870
	{ Z_Construct_UClass_UPawnUiInterface_NoRegister, (int32)VTABLE_OFFSET(AASCharacterBase, IPawnUiInterface), false },  // 3962056540
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AASCharacterBase_Statics::ClassParams = {
	&AASCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AASCharacterBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacterBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AASCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AASCharacterBase()
{
	if (!Z_Registration_Info_UClass_AASCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASCharacterBase.OuterSingleton, Z_Construct_UClass_AASCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AASCharacterBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AASCharacterBase);
AASCharacterBase::~AASCharacterBase() {}
// ********** End Class AASCharacterBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h__Script_ActionShooterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AASCharacterBase, AASCharacterBase::StaticClass, TEXT("AASCharacterBase"), &Z_Registration_Info_UClass_AASCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASCharacterBase), 3789118886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h__Script_ActionShooterGame_3056837646(TEXT("/Script/ActionShooterGame"),
	Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h__Script_ActionShooterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h__Script_ActionShooterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
