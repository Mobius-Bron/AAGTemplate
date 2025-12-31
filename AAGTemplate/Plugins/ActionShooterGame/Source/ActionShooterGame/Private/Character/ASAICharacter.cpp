// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ASAICharacter.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "AbilitySystem/ASAttributeSet.h"

AASAICharacter::AASAICharacter()
{
	CharacterASC = CreateDefaultSubobject<UASAbilitySystemComponent>(TEXT("CharacterASC"));
	CharacterASC->SetIsReplicated(true);
	CharacterASC->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	CharacterAttributeSet = CreateDefaultSubobject<UASAttributeSet>(TEXT("CharacterAttributeSet"));
}

void AASAICharacter::BeginPlay()
{
	Super::BeginPlay();

	check(CharacterASC);
	CharacterASC->InitAbilityActorInfo(this, this);
}
