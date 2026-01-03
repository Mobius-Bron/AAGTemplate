// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ASItemBase.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class UWidgetComponent;

UCLASS()
class ACTIONSHOOTERGAME_API AASItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AASItemBase();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
	UStaticMeshComponent* ItemMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
	UBoxComponent* ItemCollisionBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ui")
	UWidgetComponent* PickUpWidgetComponent;

	UFUNCTION(BlueprintCallable, Category = "Ui")
	void HidePickUpUi();

	UFUNCTION(BlueprintCallable, Category = "Ui")
	void ShowPickUpUi();

protected:
	virtual void BeginPlay() override;


};
