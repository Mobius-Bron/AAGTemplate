// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "ASType/ASEnumType.h"
#include "ASGameplayAbility.generated.h"

class UASAbilitySystemComponent;
struct FGameplayEffectSpecHandle;

UENUM(BlueprintType)
enum class EASAbilityActivationPolicy : uint8
{
	OnTriggered,
	OnGiven
};

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UASGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

protected:
	//~ Begin UGameplayAbility Interface.
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~ End UGameplayAbility Interface.

	UFUNCTION(BlueprintPure, Category = "ActionShooter|Ability")
	UASAbilitySystemComponent* GetActionAbilitySystemComponentFromActorInfo() const;

	FActiveGameplayEffectHandle NativeApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHandle);

	UFUNCTION(BlueprintCallable, Category = "ActionShooter|Ability", meta = (Display = "Apply Effect Spec Handle To Target Actor", ExpandEnumAsExecs = "OutSuccessType"))
	FActiveGameplayEffectHandle BP_ApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHandle, EASSuccessType& OutSuccessType);

	UPROPERTY(EditDefaultsOnly, Category = "ActionShooter|Ability")
	EASAbilityActivationPolicy ActionAbilityActivationPolicy = EASAbilityActivationPolicy::OnTriggered;
};
