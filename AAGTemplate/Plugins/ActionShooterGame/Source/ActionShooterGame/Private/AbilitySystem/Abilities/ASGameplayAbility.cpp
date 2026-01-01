// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/ASGameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GameplayEffectTypes.h"

UASGameplayAbility::UASGameplayAbility()
{
	bReplicateInputDirectly = true;
	
	// 网络执行策略（最重要！）
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;

	// 网络执行策略选项：
	// LocalPredicted - 客户端预测，服务端验证（最常用）
	// ServerOnly - 只在服务端执行
	// LocalOnly - 只在本地执行（如UI效果）
	// ServerInitiated - 服务端发起，复制到客户端

	// 网络安全策略
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
	// 选项：
	// ClientOrServer - 客户端或服务端都可以触发
	// ServerOnlyExecution - 只在服务端执行
	// ServerOnlyTermination - 只在服务端结束

	// 实例化策略
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	// 选项：
	// InstancedPerActor - 每个Actor一个实例（最常用）
	// InstancedPerExecution - 每次执行一个新实例
	// NonInstanced - 不实例化（静态）
}

void UASGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	if (!ActorInfo->IsNetAuthority()) 
	{
		return;
	}

	if (ActionAbilityActivationPolicy == EASAbilityActivationPolicy::OnGiven)
	{
		if (ActorInfo && !Spec.IsActive())
		{
			ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle);
		}
	}
}

void UASGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (!ActorInfo->IsNetAuthority())
	{
		return;
	}

	if (ActionAbilityActivationPolicy == EASAbilityActivationPolicy::OnGiven)
	{
		if (ActorInfo)
		{
			ActorInfo->AbilitySystemComponent->ClearAbility(Handle);
		}
	}
}

UASAbilitySystemComponent* UASGameplayAbility::GetActionAbilitySystemComponentFromActorInfo() const
{
	return Cast<UASAbilitySystemComponent>(CurrentActorInfo->AbilitySystemComponent);
}

FActiveGameplayEffectHandle UASGameplayAbility::NativeApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHandle)
{
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);

	check(TargetASC && InSpecHandle.IsValid());

	return GetActionAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToTarget(
		*InSpecHandle.Data,
		TargetASC
	);
}

FActiveGameplayEffectHandle UASGameplayAbility::BP_ApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& InSpecHandle, EASSuccessType& OutSuccessType)
{
	FActiveGameplayEffectHandle ActiveGameplayEffectHandle = NativeApplyEffectSpecHandleToTarget(TargetActor, InSpecHandle);

	OutSuccessType = ActiveGameplayEffectHandle.WasSuccessfullyApplied() ? EASSuccessType::Valid : EASSuccessType::InValid;

	return ActiveGameplayEffectHandle;
}
