// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "DataAssests/Input/DataAsset_InputConfig.h"
#include "ASType/ASStructType.h"
#include "ASInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UASInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	template<class UserObject, typename CallbackFunc>
	void BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, CallbackFunc Func)
	{
		checkf(InInputConfig, TEXT("Input config data asset is null, cannot proceed with binding"));

		if (const UInputAction* FoundAction = InInputConfig->FindNativeInputActionByTag(InputTag))
		{
			BindAction(FoundAction, TriggerEvent, ContextObject, Func);
		}
	}

	template<class UserObject, typename CallbackFunc>
	void BindAbilityInputAction(const UDataAsset_InputConfig* InInputConfig, UserObject* ContextObject, CallbackFunc InputPressedFunc, CallbackFunc InputReleasedFunc)
	{
		checkf(InInputConfig, TEXT("Input config data asset is null, cannot proceed with binding"));

		for (const FASInputActionConfig& AbilityInputActionConfig : InInputConfig->AbilityInputActions)
		{
			if (!AbilityInputActionConfig.IsValid()) continue;

			BindAction(AbilityInputActionConfig.InputAction, ETriggerEvent::Started, ContextObject, InputPressedFunc, AbilityInputActionConfig.InputTag);
			BindAction(AbilityInputActionConfig.InputAction, ETriggerEvent::Completed, ContextObject, InputReleasedFunc, AbilityInputActionConfig.InputTag);
		}
	}
};
