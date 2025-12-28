// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "InputAction.h"
#include "DataAsset_InputConfig.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FASInputActionConfig
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UInputAction> InputAction;

	bool IsValid() const { return InputTag.IsValid() && InputAction; }
};

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UDataAsset_InputConfig : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UInputMappingContext>  DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputAction"))
	TArray<FASInputActionConfig> NativeInputActions;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (TitleProperty = "InputAction"))
	TArray<FASInputActionConfig> AbilityInputActions;

	TObjectPtr<UInputAction> FindNativeInputActionByTag(const FGameplayTag& InInputTag) const;
};
