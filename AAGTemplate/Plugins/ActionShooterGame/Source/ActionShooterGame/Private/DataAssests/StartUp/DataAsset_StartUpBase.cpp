// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssests/StartUp/DataAsset_StartUpBase.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "GameplayEffect.h"
#include "DebugHelper.h"

void UDataAsset_StartUpBase::GiveToASAbilitySystemComponent(UASAbilitySystemComponent* InASASCToGive, int32 ApplyLevel)
{
	check(InASASCToGive);

	GrantAbilities(ActivateOnGiveAbilities, InASASCToGive, ApplyLevel);
	GrantAbilities(ReactiveAbilities, InASASCToGive, ApplyLevel);

	if (!StartUpGameplayEffects.IsEmpty())
	{
		for (const TSubclassOf<UGameplayEffect>& EffectClass : StartUpGameplayEffects)
		{
			if (!EffectClass) { continue; }

			UGameplayEffect* EffectCDO = EffectClass->GetDefaultObject< UGameplayEffect>();

			InASASCToGive->ApplyGameplayEffectToSelf(
				EffectCDO,
				ApplyLevel,
				InASASCToGive->MakeEffectContext()
			);
		}
	}
}

void UDataAsset_StartUpBase::GrantAbilities(const TArray<TSubclassOf<UASGameplayAbility>>& InAbilitiesToGive, UASAbilitySystemComponent* InASASCToGive, int32 ApplyLevel)
{
	if (InAbilitiesToGive.IsEmpty())
	{
		return;
	}

	for (const TSubclassOf<UASGameplayAbility>& Ability : InAbilitiesToGive)
	{
		if (!Ability) { continue; }
		
		FString Msg = FString::Printf(
			TEXT("On Give Base Start Up Data %s"),
			*Ability->GetName()
		);
		LogScreen(Msg, 10.f, FLinearColor::Red);

		FGameplayAbilitySpec AbilitySpec(Ability);
		AbilitySpec.SourceObject = InASASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;

		InASASCToGive->GiveAbility(AbilitySpec);
	}
}
