// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ASPlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameplayTagContainer.h"
#include "InputAction.h"
#include "EnhancedInputSubsystems.h"
#include "Component/Input/ASInputComponent.h"
#include "PlayerState/ASPlayerState.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/ASAbilitySystemComponent.h"
#include "DataAssests/Input/DataAsset_InputConfig.h"
#include "DataAssests/StartUp/DataAsset_StartUpBase.h"
#include "DataAssests/StartUp/DataAsset_StartUpPlayer.h"
#include "ASType/ASStructType.h"
#include "ASType/ASEnumType.h"
#include "ASGameplayTag.h"
#include "DebugHelper.h"

AASPlayerCharacter::AASPlayerCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetCapsuleComponent());
	CameraBoom->TargetArmLength = 200.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 55.0f, 65.0f);
	CameraBoom->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.0f;
}

void AASPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AASPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(InputConfigDataAsset);

	TObjectPtr<ULocalPlayer> LocalPlayer = GetController<APlayerController>()->GetLocalPlayer();

	TObjectPtr<UEnhancedInputLocalPlayerSubsystem> InputSubsystems = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);

	check(InputSubsystems);

	InputSubsystems->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0);

	TObjectPtr<UASInputComponent> ASInputComponent = CastChecked<UASInputComponent>(PlayerInputComponent);

	// 移动
	ASInputComponent->BindNativeInputAction(
		InputConfigDataAsset,
		ASGameplayTags::InputTag_Move,
		ETriggerEvent::Triggered,
		this,
		&ThisClass::Input_Move
	);
	// 朝向
	ASInputComponent->BindNativeInputAction(
		InputConfigDataAsset,
		ASGameplayTags::InputTag_Look,
		ETriggerEvent::Triggered,
		this,
		&ThisClass::Input_Look
	);

	//英雄行为
	ASInputComponent->BindAbilityInputAction(
		InputConfigDataAsset,
		this,
		&ThisClass::Input_AbilityInputPressed,
		&ThisClass::Input_AbilityInputReleased
	);
}

void AASPlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AASPlayerState* AactionShooterPlayerState = GetPlayerState<AASPlayerState>();
	check(AactionShooterPlayerState);
	AactionShooterPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(AactionShooterPlayerState, this);

	CharacterASC = AactionShooterPlayerState->GetASAbilitySystemComponent();
	CharacterAttributeSet = AactionShooterPlayerState->GetASAttributeSet();

	if (!CharacterStartUpData.IsNull())
	{
		if (UDataAsset_StartUpBase* LoadedData = CharacterStartUpData.LoadSynchronous())
		{
			LoadedData->GiveToASAbilitySystemComponent(CharacterASC);
		}
	}
}

void AASPlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();


}

void AASPlayerCharacter::Input_Move(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();

	const FRotator MovementRotation(0.0f, GetControlRotation().Yaw, 0.0f);

	if (MovementVector.X != 0.0f)
	{
		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(ForwardDirection, MovementVector.X);
	}
	if (MovementVector.Y != 0.0f)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightDirection, MovementVector.Y);
	}
}

void AASPlayerCharacter::Input_Look(const FInputActionValue& InputActionValue)
{
	const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();

	if (LookAxisVector.X != 0.0f)
	{
		AddControllerYawInput(LookAxisVector.X * 2);
	}

	if (LookAxisVector.Y != 0.0f)
	{
		AddControllerPitchInput(LookAxisVector.Y * 2);
	}
}

void AASPlayerCharacter::Input_AbilityInputPressed(FGameplayTag InInputTag)
{
	CharacterASC->OnAbilityInputPressed(InInputTag);
}

void AASPlayerCharacter::Input_AbilityInputReleased(FGameplayTag InInputTag)
{
	CharacterASC->OnAbilityInputReleased(InInputTag);
}
