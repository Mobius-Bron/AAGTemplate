// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

static inline void Log(const FString& Message)
{
    UE_LOG(LogTemp, Display, TEXT("%s"), *Message);
}

static inline void LogScreen(const FString& Message, float Duration, FLinearColor Color = FLinearColor::White)
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            Duration,
            Color.ToFColor(true),
            Message
        );
    }
}
