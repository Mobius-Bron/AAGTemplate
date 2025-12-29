// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "ASAbilitySystemComponent.generated.h"

//struct FASPlayerAbilitySet;
//struct FASPlayerWeaponData;

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UASAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	void OnAbilityInputPressed(const FGameplayTag& InInputTag);
	void OnAbilityInputReleased(const FGameplayTag& InInputTag);

	//UFUNCTION(BlueprintCallable, Category = "Action|Ability", meta = (ApplayLevel = "1"))
	//void GrantHeroWeaponAbilities(const TArray<FASPlayerAbilitySet>& InDefaultWeaponAbility, int32 ApplyLevel, TArray<FGameplayAbilitySpecHandle>& OutGrantAbilitiesSpecHandle);

	UFUNCTION(BlueprintCallable, Category = "Action|Ability")
	void RemoveHeroWeaponAbilities(UPARAM(ref) const TArray<FGameplayAbilitySpecHandle>& InSpecHandlesToRemove);

	UFUNCTION(BlueprintCallable, Category = "Action|Ability")
	bool TryActivateAbilityByTag(FGameplayTag AbilityTagToActivate);
};
