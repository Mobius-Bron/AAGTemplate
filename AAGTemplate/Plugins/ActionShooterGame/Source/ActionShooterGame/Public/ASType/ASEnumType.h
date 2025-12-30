// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASEnumType.generated.h"


UENUM()
enum class EASConfirmType : uint8
{
	Yes,
	No
};

UENUM()
enum class EASVailidType : uint8
{
	Valid,
	Invalid
};

UENUM()
enum class EASSuccessType : uint8
{
	Valid,
	InValid
};