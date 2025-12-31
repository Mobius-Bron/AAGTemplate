// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/ASCharacterAnimInstance.h"
#include "Character/ASCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KismetAnimationLibrary.h"
#include "Kismet/KismetMathLibrary.h"

void UASCharacterAnimInstance::NativeInitializeAnimation()
{
	IsFirstUpdate = true;

	OwningCharacter = Cast<AASCharacterBase>(TryGetPawnOwner());

	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

void UASCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	UpdateGroundDistanceData();
}

void UASCharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	UpdateLocationData(DeltaSeconds);
	UpdateRotationData(DeltaSeconds);
	UpdateVelocityData();
	UpdateAccelerationData();
	UpdateCharacterStateData(DeltaSeconds);
	UpdateAimingData();
	UpdateJumpFallData();

	IsFirstUpdate = false;
}

void UASCharacterAnimInstance::UpdateGroundDistanceData()
{
	if (!IsFalling)
	{
		return;
	}

	FHitResult FloorHit;
	FFindFloorResult FindFloorResult;

	OwningMovementComponent->ComputeFloorDist(
		OwningCharacter->GetActorLocation(),
		0.0f,
		100000.0f,
		FindFloorResult,
		1.0f,
		&FloorHit
	);

	if (FloorHit.bBlockingHit)
	{
		GroundDistance = FindFloorResult.FloorDist;
	}
	else {
		GroundDistance = 100000.0f;
	}
}

void UASCharacterAnimInstance::UpdateLocationData(float InDeltaTime)
{
	DisplacementSinceLastUpdate = (OwningCharacter->GetActorLocation() - WorldLocation).Length();

	WorldLocation = OwningCharacter->GetActorLocation();

	DisplacementSpeed = UKismetMathLibrary::SafeDivide(DisplacementSinceLastUpdate, InDeltaTime);

	if (IsFirstUpdate)
	{
		DisplacementSinceLastUpdate = 0.0f;
		DisplacementSpeed = 0.0f;
	}
}

void UASCharacterAnimInstance::UpdateRotationData(float InDeltaTime)
{
	YawDeltaSinceLastUpdate = OwningCharacter->GetActorRotation().Yaw - WorldRotation.Yaw;

	YawDeltaSpeed = UKismetMathLibrary::SafeDivide(YawDeltaSinceLastUpdate, InDeltaTime);

	WorldRotation = OwningCharacter->GetActorRotation();
}

void UASCharacterAnimInstance::UpdateVelocityData()
{
	bool bWasMoveLastUpdate = !LocalVelocity2D.IsZero();

	WorldVelocity = OwningCharacter->GetVelocity();

	WorldVelocity2D = WorldVelocity * FVector(1.0f, 1.0f, 0.0f);

	LocalVelocity2D = WorldRotation.UnrotateVector(WorldVelocity2D);

	LocalVelocityDirectionAngle = UKismetAnimationLibrary::CalculateDirection(
		WorldVelocity2D,
		WorldRotation
	);

	SelectCardinalDirection(LocalVelocityDirectionAngle, CardinalDirectionDeadZone, LocalVelocityDirection, bWasMoveLastUpdate);

	SelectCardinalDirection(LocalVelocityDirectionAngle, CardinalDirectionDeadZone, LocalVelocityDirectionNoOffest, bWasMoveLastUpdate);

	HasVelocity = !FMath::IsNearlyEqual(LocalVelocity2D.Length(), 0.0f, 0.00001f);
}

void UASCharacterAnimInstance::UpdateAccelerationData()
{
	WorldAcceleration = OwningMovementComponent->GetCurrentAcceleration();

	WorldAcceleration2D = WorldAcceleration * FVector(1.0f, 1.0f, 0.0f);

	LocalAcceleration2D = WorldRotation.UnrotateVector(WorldAcceleration2D);

	HasAcceleration = !FMath::IsNearlyEqual(LocalAcceleration2D.Length(), 0.0f, 0.00001f);
}

void UASCharacterAnimInstance::UpdateCharacterStateData(float InDeltaTime)
{
	IsOnGround = OwningMovementComponent->IsMovingOnGround();

	wasCrouchingLastTime = IsCrouching;

	IsCrouching = OwningMovementComponent->IsCrouching();

	IsJumping = false;
	IsFalling = false;

	if (OwningMovementComponent->MovementMode == EMovementMode::MOVE_Falling)
	{
		if (WorldVelocity.Z > 0.0f)
		{
			IsJumping = true;
		}
		else
		{
			IsFalling = true;
		}
	}
}

void UASCharacterAnimInstance::UpdateAimingData()
{
	AimYaw = OwningCharacter->GetBaseAimRotation().Yaw;
	AimPitch = OwningCharacter->GetBaseAimRotation().Pitch;
}

void UASCharacterAnimInstance::UpdateJumpFallData()
{
	if (IsJumping)
	{
		TimeToJumpApex = (-WorldVelocity.Z) / OwningMovementComponent->GetGravityZ();
	}
	else
	{
		TimeToJumpApex = 0.0f;
	}
}

void UASCharacterAnimInstance::SelectCardinalDirection(float Angle, float DeadDone, EAnimEnum_CardinalDirection& CurrentDirection, bool UseCurrentDirection)
{
	float AbsAngle = abs(Angle);

	float FwdDeadDone = DeadDone;
	float BwdDeadDone = DeadDone;

	if (UseCurrentDirection)
	{
		switch (CurrentDirection)
		{
		case EAnimEnum_CardinalDirection::Forward:
			FwdDeadDone *= 2.0f;

		case EAnimEnum_CardinalDirection::Backward:
			BwdDeadDone *= 2.0f;
		}
	}

	if (AbsAngle <= 45.f)
	{
		CurrentDirection = EAnimEnum_CardinalDirection::Forward;
	}
	else if(AbsAngle >= 135.f)
	{
		CurrentDirection = EAnimEnum_CardinalDirection::Backward;
	}
	else
	{
		if (Angle > 0)
		{
			CurrentDirection = EAnimEnum_CardinalDirection::Right;
		}
		else
		{
			CurrentDirection = EAnimEnum_CardinalDirection::Left;
		}
	}
}