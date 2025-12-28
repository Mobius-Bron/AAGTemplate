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
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AASCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ActionShooterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AASCharacterBase_Statics::ClassParams = {
	&AASCharacterBase::StaticClass,
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
		{ Z_Construct_UClass_AASCharacterBase, AASCharacterBase::StaticClass, TEXT("AASCharacterBase"), &Z_Registration_Info_UClass_AASCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASCharacterBase), 364937801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h__Script_ActionShooterGame_1612022018(TEXT("/Script/ActionShooterGame"),
	Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h__Script_ActionShooterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Character_ASCharacterBase_h__Script_ActionShooterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
