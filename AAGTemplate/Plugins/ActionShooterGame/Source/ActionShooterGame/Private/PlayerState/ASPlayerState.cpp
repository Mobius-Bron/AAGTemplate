// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerState/ASPlayerState.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "AbilitySystem/ASAttributeSet.h"

AASPlayerState::AASPlayerState()
{
	bReplicates = true;
	SetNetUpdateFrequency(100.0f);

	CharacterASC = CreateDefaultSubobject<UASAbilitySystemComponent>(TEXT("CharacterASC"));
	CharacterASC->SetIsReplicated(true);
	CharacterASC->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	CharacterAttributeSet = CreateDefaultSubobject<UASAttributeSet>(TEXT("CharacterAttributeSet"));
}

UAbilitySystemComponent* AASPlayerState::GetAbilitySystemComponent() const
{
	return GetASAbilitySystemComponent();
}
