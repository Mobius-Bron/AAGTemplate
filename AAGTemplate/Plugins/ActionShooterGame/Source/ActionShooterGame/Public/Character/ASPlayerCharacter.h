// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ASCharacterBase.h"
#include "AbilitySystemInterface.h"
#include "ASPlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UDataAsset_InputConfig;
struct FInputActionValue;
struct FGameplayTag;

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API AASPlayerCharacter : public AASCharacterBase
{
	GENERATED_BODY()
	
public:
	AASPlayerCharacter();

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	//~ End APawn Interface

private:

#pragma region Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> Camera;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UPlayerCombatComponent> HeroCombatComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ui", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UPlayerUiComponent> HeroUiComponent;*/
#pragma endregion

#pragma region Inputs
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UDataAsset_InputConfig> InputConfigDataAsset;

	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_Look(const FInputActionValue& InputActionValue);

	void Input_AbilityInputPressed(FGameplayTag InInputTag);
	void Input_AbilityInputReleased(FGameplayTag InInputTag);
#pragma endregion

private:
	inline void SetCharacterASCFromPlayerState();

};
