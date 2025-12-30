// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/Player/ASPlayerAnimInstance.h"
#include "Character/ASPlayerCharacter.h"

void UASPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	OwningPlayerCharacter = Cast<AASPlayerCharacter>(GetOwningActor());
}

void UASPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UASPlayerAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
}