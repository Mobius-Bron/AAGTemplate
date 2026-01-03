// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/ASItemBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"

AASItemBase::AASItemBase()
{
	PrimaryActorTick.bCanEverTick = true;
	SetReplicates(true);
	SetReplicateMovement(true);
	bNetLoadOnClient = true;
	SetNetUpdateFrequency(20.0f);

	ItemMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("ItemMeshComponent");
	SetRootComponent(ItemMeshComponent);
	ItemMeshComponent->SetIsReplicated(true);

	ItemCollisionBox = CreateDefaultSubobject<UBoxComponent>("ItemCollisionBox");
	ItemCollisionBox->SetupAttachment(ItemMeshComponent);
	ItemCollisionBox->SetIsReplicated(true);

	PickUpWidgetComponent = CreateDefaultSubobject<UWidgetComponent>("ItemPickUpUI");
	PickUpWidgetComponent->SetupAttachment(ItemMeshComponent);
}

void AASItemBase::HidePickUpUi()
{
	PickUpWidgetComponent->SetHiddenInGame(true, true);
}

void AASItemBase::ShowPickUpUi()
{
	PickUpWidgetComponent->SetHiddenInGame(false, true);
}

void AASItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

