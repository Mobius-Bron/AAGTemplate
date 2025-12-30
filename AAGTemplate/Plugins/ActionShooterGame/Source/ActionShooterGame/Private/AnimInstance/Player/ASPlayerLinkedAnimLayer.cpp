// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/Player/ASPlayerLinkedAnimLayer.h"
#include "AnimInstance/Player/ASPlayerAnimInstance.h"

UASPlayerAnimInstance* UASPlayerLinkedAnimLayer::GetPlayerAnimInstance()
{
	return Cast<UASPlayerAnimInstance>(GetOwningComponent()->GetAnimInstance());
}