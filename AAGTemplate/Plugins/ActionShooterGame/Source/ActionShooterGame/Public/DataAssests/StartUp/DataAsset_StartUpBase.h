// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpBase.generated.h"

class UASAbilitySystemComponent;
class UASGameplayAbility;
class UGameplayEffect;

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UDataAsset_StartUpBase : public UDataAsset
{
	GENERATED_BODY()
	
public:
	virtual void GiveToASAbilitySystemComponent(UASAbilitySystemComponent* InASASCToGive, int32 ApplyLevel = 1);

protected:
	void GrantAbilities(const TArray<TSubclassOf<UASGameplayAbility>>& InAbilitiesToGive, UASAbilitySystemComponent* InASASCToGive, int32 ApplyLevel = 1);

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf<UASGameplayAbility>> ActivateOnGiveAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf<UASGameplayAbility>> ReactiveAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf<UGameplayEffect>> StartUpGameplayEffects;
};
