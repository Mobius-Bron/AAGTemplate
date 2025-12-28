// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/ASGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeASGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASGameModeBase();
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ActionShooterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AASGameModeBase **********************************************************
void AASGameModeBase::StaticRegisterNativesAASGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AASGameModeBase;
UClass* AASGameModeBase::GetPrivateStaticClass()
{
	using TClass = AASGameModeBase;
	if (!Z_Registration_Info_UClass_AASGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ASGameModeBase"),
			Z_Registration_Info_UClass_AASGameModeBase.InnerSingleton,
			StaticRegisterNativesAASGameModeBase,
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
	return Z_Registration_Info_UClass_AASGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AASGameModeBase_NoRegister()
{
	return AASGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AASGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/ASGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameMode/ASGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AASGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ActionShooterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AASGameModeBase_Statics::ClassParams = {
	&AASGameModeBase::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AASGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AASGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AASGameModeBase()
{
	if (!Z_Registration_Info_UClass_AASGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASGameModeBase.OuterSingleton, Z_Construct_UClass_AASGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AASGameModeBase.OuterSingleton;
}
AASGameModeBase::AASGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AASGameModeBase);
AASGameModeBase::~AASGameModeBase() {}
// ********** End Class AASGameModeBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h__Script_ActionShooterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AASGameModeBase, AASGameModeBase::StaticClass, TEXT("AASGameModeBase"), &Z_Registration_Info_UClass_AASGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASGameModeBase), 2935360695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h__Script_ActionShooterGame_665837125(TEXT("/Script/ActionShooterGame"),
	Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h__Script_ActionShooterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_GameMode_ASGameModeBase_h__Script_ActionShooterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
