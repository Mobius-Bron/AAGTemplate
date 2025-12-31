// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssests/StartUp/DataAsset_StartUpBase.h"
#include "DataAsset_StartUpAI.generated.h"

class UASAbilitySystemComponent;
class UASGameplayAbility;

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UDataAsset_StartUpAI : public UDataAsset_StartUpBase
{
	GENERATED_BODY()

protected:
	virtual void GiveToASAbilitySystemComponent(UASAbilitySystemComponent* InActionASCToGive, int32 ApplyLevel = 1) override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData", meta = (TitleProperty = "InputTag"))
	TArray<TSubclassOf<UASGameplayAbility>> AIStartUpAbilitySets;
};
