// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/ASItemBase.h"

AASItemBase::AASItemBase()
{
	PrimaryActorTick.bCanEverTick = true;
	SetReplicates(true);
	SetReplicateMovement(true);
	bNetLoadOnClient = true;
	SetNetUpdateFrequency(20.0f);
}

void AASItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

