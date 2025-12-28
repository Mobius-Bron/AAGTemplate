// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Component/Input/ASInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeASInputComponent() {}

// ********** Begin Cross Module References ********************************************************
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_UASInputComponent();
ACTIONSHOOTERGAME_API UClass* Z_Construct_UClass_UASInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
UPackage* Z_Construct_UPackage__Script_ActionShooterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UASInputComponent ********************************************************
void UASInputComponent::StaticRegisterNativesUASInputComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UASInputComponent;
UClass* UASInputComponent::GetPrivateStaticClass()
{
	using TClass = UASInputComponent;
	if (!Z_Registration_Info_UClass_UASInputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ASInputComponent"),
			Z_Registration_Info_UClass_UASInputComponent.InnerSingleton,
			StaticRegisterNativesUASInputComponent,
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
	return Z_Registration_Info_UClass_UASInputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UASInputComponent_NoRegister()
{
	return UASInputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UASInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Component/Input/ASInputComponent.h" },
		{ "ModuleRelativePath", "Public/Component/Input/ASInputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UASInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ActionShooterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UASInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UASInputComponent_Statics::ClassParams = {
	&UASInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UASInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UASInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UASInputComponent()
{
	if (!Z_Registration_Info_UClass_UASInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UASInputComponent.OuterSingleton, Z_Construct_UClass_UASInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UASInputComponent.OuterSingleton;
}
UASInputComponent::UASInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UASInputComponent);
UASInputComponent::~UASInputComponent() {}
// ********** End Class UASInputComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h__Script_ActionShooterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UASInputComponent, UASInputComponent::StaticClass, TEXT("UASInputComponent"), &Z_Registration_Info_UClass_UASInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UASInputComponent), 3505755151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h__Script_ActionShooterGame_3869748439(TEXT("/Script/ActionShooterGame"),
	Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h__Script_ActionShooterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_5_6_project_AAGTemplate_AAGTemplate_Plugins_ActionShooterGame_Source_ActionShooterGame_Public_Component_Input_ASInputComponent_h__Script_ActionShooterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
