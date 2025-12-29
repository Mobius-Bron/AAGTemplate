// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystem/Abilities/ASGameplayAbility.h"

void UASAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid()) { return; }

	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!AbilitySpec.GetDynamicSpecSourceTags().HasTagExact(InInputTag)) { continue; }

		TryActivateAbility(AbilitySpec.Handle);
	}
}

void UASAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid()) { return; }
}

//void UASAbilitySystemComponent::GrantHeroWeaponAbilities(const TArray<FASPlayerAbilitySet>& InDefaultWeaponAbility, int32 ApplyLevel, TArray<FGameplayAbilitySpecHandle>& OutGrantAbilitiesSpecHandle)
//{
//	if (InDefaultWeaponAbility.IsEmpty())
//	{
//		return;
//	}
//
//	for (const FASPlayerAbilitySet& AbilitySet : InDefaultWeaponAbility)
//	{
//		if (!AbilitySet.IsValid()) continue;
//
//		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
//		AbilitySpec.SourceObject = GetAvatarActor();
//		AbilitySpec.Level = ApplyLevel;
//		AbilitySpec.GetDynamicSpecSourceTags().AddTag(AbilitySet.InputTag);
//
//		OutGrantAbilitiesSpecHandle.AddUnique(GiveAbility(AbilitySpec));
//	}
//}

void UASAbilitySystemComponent::RemoveHeroWeaponAbilities(UPARAM(ref) const TArray<FGameplayAbilitySpecHandle>& InSpecHandlesToRemove)
{
	if (InSpecHandlesToRemove.IsEmpty())
	{
		return;
	}

	for (const FGameplayAbilitySpecHandle& AbilitySpecHandle : InSpecHandlesToRemove)
	{
		if (!AbilitySpecHandle.IsValid()) { continue; }

		ClearAbility(AbilitySpecHandle);
	}
}

bool UASAbilitySystemComponent::TryActivateAbilityByTag(FGameplayTag AbilityTagToActivate)
{
	check(AbilityTagToActivate.IsValid());

	TArray<FGameplayAbilitySpec*> FoundAbilitySpec;
	GetActivatableGameplayAbilitySpecsByAllMatchingTags(AbilityTagToActivate.GetSingleTagContainer(), FoundAbilitySpec);

	if (!FoundAbilitySpec.IsEmpty())
	{
		const int32 RandomAbilityIndex = FMath::RandRange(0, FoundAbilitySpec.Num() - 1);
		FGameplayAbilitySpec* SpecToActivate = FoundAbilitySpec[RandomAbilityIndex];

		check(SpecToActivate);

		if (!SpecToActivate->IsActive())
		{
			return TryActivateAbility(SpecToActivate->Handle);
		}
	}

	return false;
}
