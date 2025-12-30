// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimInstance/ASCharacterAnimInstance.h"
#include "ASPlayerAnimInstance.generated.h"

class AASPlayerCharacter;

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UASPlayerAnimInstance : public UASCharacterAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	AASPlayerCharacter* OwningPlayerCharacter;
};
