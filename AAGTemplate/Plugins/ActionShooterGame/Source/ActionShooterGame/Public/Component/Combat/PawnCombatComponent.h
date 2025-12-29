// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Component/PawnExtensionComponentBase.h"
#include "GameplayTagContainer.h"
#include "PawnCombatComponent.generated.h"

class AActionBaseWeapon;

UENUM(BlueprintType)
enum class EquipedWeaponType : uint8
{
	EquippedWeaponFirst,
	EquippedWeaponSecond,
	EquippedWeaponThird
};

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()
	
//public:
//	UFUNCTION(BlueprintCallable, Category = "Action|Combat")
//	void AddWeaponToBag(AActionBaseWeapon* InWeapon, EquipedWeaponType EquipType);
//
//	UPROPERTY(BlueprintReadWrite, Category = "Action|Combat")
//	EquipedWeaponType CurrentEquipWeapon;
};
