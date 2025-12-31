// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/ASPlayerGameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "Character/ASPlayerCharacter.h"
#include "Controller/ASControllerBase.h"
#include "ASGameplayTag.h"

AASPlayerCharacter* UASPlayerGameplayAbility::GetPlayerCharacterFromActorInfo()
{
	if (!ASPlayerCharacter.IsValid())
	{
		ASPlayerCharacter = Cast<AASPlayerCharacter>(CurrentActorInfo->AvatarActor);
	}

	return ASPlayerCharacter.IsValid() ? ASPlayerCharacter.Get() : nullptr;
}

AASControllerBase* UASPlayerGameplayAbility::GetPlayerControllerFromActorInfo()
{
	if (!ASPlayerController.IsValid())
	{
		ASPlayerController = Cast<AASControllerBase>(CurrentActorInfo->AvatarActor);
	}

	return ASPlayerController.IsValid() ? ASPlayerController.Get() : nullptr;
}
