// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Interfaces/PawnUiInterface.h"
#include "DataAssests/StartUp/DataAsset_StartUpBase.h"
#include "ASCharacterBase.generated.h"

class UASAbilitySystemComponent;
class UASAttributeSet;

UCLASS()
class ACTIONSHOOTERGAME_API AASCharacterBase :
	public ACharacter,
	public IAbilitySystemInterface,
	public IPawnUiInterface
{
	GENERATED_BODY()

public:
	AASCharacterBase();

protected:
	//~ Begin IPawnUiInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~ End IPawnUiInterface

	//~ Begin IPawnUiInterface
	
	//~ End IPawnUiInterface

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UASAbilitySystemComponent> CharacterASC;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	TObjectPtr<UASAttributeSet> CharacterAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpBase> CharacterStartUpData;

public:
	FORCEINLINE UASAbilitySystemComponent* GetASAbilitySystemComponent() const { return CharacterASC; }

	FORCEINLINE UASAttributeSet* GetASAttributeSet() const { return CharacterAttributeSet; }
};
