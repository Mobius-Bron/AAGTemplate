// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssests/StartUp/DataAsset_StartUpAI.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystem/Abilities/ASGameplayAbility.h"
#include "AbilitySystem/Abilities/ASAIGameplayAbility.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "ASType/ASStructType.h"

void UDataAsset_StartUpAI::GiveToASAbilitySystemComponent(UASAbilitySystemComponent* InActionASCToGive, int32 ApplyLevel)
{
	Super::GiveToASAbilitySystemComponent(InActionASCToGive, ApplyLevel);

	for (const TSubclassOf<UASGameplayAbility>& AIAbilityToGrant : AIStartUpAbilitySets)
	{
		if (!AIAbilityToGrant) continue;

		FGameplayAbilitySpec AbilitySpec(AIAbilityToGrant);
		AbilitySpec.SourceObject = InActionASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;

		InActionASCToGive->GiveAbility(AbilitySpec);
	}
}
