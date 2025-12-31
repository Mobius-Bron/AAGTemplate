// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ASCharacterBase.h"
#include "ASAICharacter.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API AASAICharacter : public AASCharacterBase
{
	GENERATED_BODY()
	
public:
	AASAICharacter();

protected:
	//~ Begin APawn Interface.
	virtual void BeginPlay() override;
	//~ End APawn Interface
};
