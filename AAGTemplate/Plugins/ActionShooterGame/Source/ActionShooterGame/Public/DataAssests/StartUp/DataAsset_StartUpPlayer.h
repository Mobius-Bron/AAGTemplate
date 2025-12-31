// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssests/StartUp/DataAsset_StartUpBase.h"
#include "DataAsset_StartUpPlayer.generated.h"

class UASAbilitySystemComponent;
struct FASPlayerAbilitySet;

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UDataAsset_StartUpPlayer : public UDataAsset_StartUpBase
{
	GENERATED_BODY()
protected:
	virtual void GiveToASAbilitySystemComponent(UASAbilitySystemComponent* InActionASCToGive, int32 ApplyLevel = 1) override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData", meta = (TitleProperty = "InputTag"))
	TArray<FASPlayerAbilitySet> PlayerStartUpAbilitySets;
};
