// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/ASGameplayAbility.h"
#include "ASPlayerGameplayAbility.generated.h"

class AASPlayerCharacter;
class AASControllerBase;

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UASPlayerGameplayAbility : public UASGameplayAbility
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Action|Ability")
	AASPlayerCharacter* GetPlayerCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Action|Ability")
	AASControllerBase* GetPlayerControllerFromActorInfo();

private:
	TWeakObjectPtr<AASPlayerCharacter> ASPlayerCharacter;
	TWeakObjectPtr<AASControllerBase> ASPlayerController;
};
