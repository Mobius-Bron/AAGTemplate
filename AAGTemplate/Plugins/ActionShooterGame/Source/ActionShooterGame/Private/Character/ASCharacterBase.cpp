// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ASCharacterBase.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "AbilitySystem/ASAttributeSet.h"

AASCharacterBase::AASCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

	CharacterASC = CreateDefaultSubobject<UASAbilitySystemComponent>(TEXT("CharacterASC"));

	CharacterAttributeSet = CreateDefaultSubobject<UASAttributeSet>(TEXT("CharacterAttributeSet"));
}

UAbilitySystemComponent* AASCharacterBase::GetAbilitySystemComponent() const
{
	return GetASAbilitySystemComponent();
}

