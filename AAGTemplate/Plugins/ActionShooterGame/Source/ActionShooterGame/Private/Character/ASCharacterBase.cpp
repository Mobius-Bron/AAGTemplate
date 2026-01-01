// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ASCharacterBase.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "AbilitySystem/ASAttributeSet.h"
#include "DataAssests/StartUp/DataAsset_StartUpBase.h"

AASCharacterBase::AASCharacterBase()
{
	bReplicates = true;

	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;
}

UAbilitySystemComponent* AASCharacterBase::GetAbilitySystemComponent() const
{
	return GetASAbilitySystemComponent();
}

