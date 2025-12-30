// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
#include "Engine/Texture2DDynamic.h"
#include "Animation/AnimSequence.h"
#include "ASStructType.generated.h"


class UASPlayerLinkedAnimLayer;
class UInputMappingContext;
class UASGameplayAbility;
struct FGameplayTag;


USTRUCT(BlueprintType)
struct FAnimStruct_CardinalDirection
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* ForwardAnim;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* BackwardAnim;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* RightAnim;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* LeftAnim;
};

USTRUCT(BlueprintType)
struct FASPlayerAbilitySet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag InputTag;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UASGameplayAbility> AbilityToGrant;

	bool IsValid() const { return InputTag.IsValid() && AbilityToGrant; }
};

USTRUCT(BlueprintType)
struct FASPlayerWeaponData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UASPlayerLinkedAnimLayer> WeaponAnimLayerToLink;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputMappingContext* WeaponInputMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FASPlayerAbilitySet> DefualtWeaponAbilities;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FScalableFloat WeaponBaseAttackPower;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> SoftWeaponIconTexture;
};
