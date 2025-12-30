// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimInstance/ASBaseAnimInstance.h"
#include "ASPlayerLinkedAnimLayer.generated.h"

class UASPlayerAnimInstance;

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UASPlayerLinkedAnimLayer : public UASBaseAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	UASPlayerAnimInstance* GetPlayerAnimInstance();
};
