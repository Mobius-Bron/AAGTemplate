// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssests/StartUp/DataAsset_StartUpPlayer.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystem/Abilities/ASGameplayAbility.h"
#include "AbilitySystem/Abilities/ASPlayerGameplayAbility.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "ASType/ASStructType.h"
#include "DebugHelper.h"

void UDataAsset_StartUpPlayer::GiveToASAbilitySystemComponent(UASAbilitySystemComponent* InActionASCToGive, int32 ApplyLevel)
{
	Super::GiveToASAbilitySystemComponent(InActionASCToGive, ApplyLevel);

	for (const FASPlayerAbilitySet& PlayerAbilitySet : PlayerStartUpAbilitySets)
	{
		if (!PlayerAbilitySet.IsValid()) continue;

		FString Msg = FString::Printf(
			TEXT("On Give Player Start Up Data %s"), 
			*PlayerAbilitySet.AbilityToGrant->GetName()
		);
		LogScreen(Msg, 10.f, FLinearColor::Red);

		FGameplayAbilitySpec AbilitySpec(PlayerAbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = InActionASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		AbilitySpec.GetDynamicSpecSourceTags().AddTag(PlayerAbilitySet.InputTag);

		InActionASCToGive->GiveAbility(AbilitySpec);
	}
}
