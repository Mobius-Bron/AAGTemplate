// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "ASPlayerState.generated.h"

class UASAbilitySystemComponent;
class UASAttributeSet;

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API AASPlayerState : 
	public APlayerState, 
	public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AASPlayerState();

	//~ Begin IPawnUiInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~ End IPawnUiInterface

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UASAbilitySystemComponent> CharacterASC;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UASAttributeSet> CharacterAttributeSet;

public:
	FORCEINLINE UASAbilitySystemComponent* GetASAbilitySystemComponent() const { return CharacterASC; }

	FORCEINLINE UASAttributeSet* GetASAttributeSet() const { return CharacterAttributeSet; }
};
