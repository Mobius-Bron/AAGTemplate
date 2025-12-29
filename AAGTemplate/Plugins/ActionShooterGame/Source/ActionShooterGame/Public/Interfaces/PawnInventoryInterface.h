// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PawnInventoryInterface.generated.h"

class UPawnInventoryComponent;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPawnInventoryInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ACTIONSHOOTERGAME_API IPawnInventoryInterface
{
	GENERATED_BODY()

public:
	virtual UPawnInventoryComponent* GetInventoryComponent() const = 0;
};
