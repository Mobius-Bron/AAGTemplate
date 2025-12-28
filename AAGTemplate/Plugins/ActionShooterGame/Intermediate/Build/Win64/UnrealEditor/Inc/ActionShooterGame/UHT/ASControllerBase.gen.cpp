// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controller/ASControllerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeASControllerBase() {}

// ********** Begin Cross Module References ********************************************************
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASControllerBase();
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_AASControllerBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_ActionShooterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AASControllerBase ********************************************************
void AASControllerBase::StaticRegisterNativesAASControllerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AASControllerBase;
UClass* AASControllerBase::GetPrivateStaticClass()
{
	using TClass = AASControllerBase;
	if (!Z_Registration_Info_UClass_AASControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ASControllerBase"),
			Z_Registration_Info_UClass_AASControllerBase.InnerSingleton,
			StaticRegisterNativesAASControllerBase,
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
	return Z_Registration_Info_UClass_AASControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AASControllerBase_NoRegister()
{
	return AASControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AASControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/ASControllerBase.h" },
		{ "ModuleRelativePath", "Public/Controller/ASControllerBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AASControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ActionShooterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AASControllerBase_Statics::ClassParams = {
	&AASControllerBase::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AASControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AASControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AASControllerBase()
{
	if (!Z_Registration_Info_UClass_AASControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASControllerBase.OuterSingleton, Z_Construct_UClass_AASControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AASControllerBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AASControllerBase);
AASControllerBase::~AASControllerBase() {}
// ********** End Class AASControllerBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h__Script_ActionShooterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AASControllerBase, AASControllerBase::StaticClass, TEXT("AASControllerBase"), &Z_Registration_Info_UClass_AASControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASControllerBase), 1649854589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h__Script_ActionShooterGame_2791742490(TEXT("/Script/ActionShooterGame"),
	Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h__Script_ActionShooterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Controller_ASControllerBase_h__Script_ActionShooterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
