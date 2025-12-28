// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssests/Input/DataAsset_InputConfig.h"

TObjectPtr<UInputAction> UDataAsset_InputConfig::FindNativeInputActionByTag(const FGameplayTag& InInputTag) const
{
	for (const FASInputActionConfig& InputActionConfig : NativeInputActions)
	{
		if (InputActionConfig.InputTag == InInputTag && InputActionConfig.InputAction)
		{
			return InputActionConfig.InputAction;
		}
	}

	return nullptr;s
}
