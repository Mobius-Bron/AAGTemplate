// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimInstance/ASBaseAnimInstance.h"
#include "ASCharacterAnimInstance.generated.h"

class AASCharacterBase;
class UCharacterMovementComponent;

UENUM()
enum class EAnimEnum_CardinalDirection : uint8 
{
	Forward,
	Backward,
	Right,
	Left
};

/**
 * 
 */
UCLASS()
class ACTIONSHOOTERGAME_API UASCharacterAnimInstance : public UASBaseAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY()
	TObjectPtr<AASCharacterBase> OwningCharacter;

	UPROPERTY()
	TObjectPtr<UCharacterMovementComponent> OwningMovementComponent;

	// Location
	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Location", meta = (BlueprintThreadSafe))
	FVector WorldLocation;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Location", meta = (BlueprintThreadSafe))
	float DisplacementSinceLastUpdate;

	// Rotation
	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Rotation", meta = (BlueprintThreadSafe))
	FRotator WorldRotation;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Rotation", meta = (BlueprintThreadSafe))
	float YawDeltaSinceLastUpdate;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Rotation", meta = (BlueprintThreadSafe))
	float YawDeltaSpeed;

	// Velocity
	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	FVector WorldVelocity;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	FVector WorldVelocity2D;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	FVector LocalVelocity2D;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	float DisplacementSpeed;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	float LocalVelocityDirectionAngle;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	float LocalVelocityDirectionAngleWithOffest;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	EAnimEnum_CardinalDirection LocalVelocityDirection;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	EAnimEnum_CardinalDirection LocalVelocityDirectionNoOffest;

	// Acceleration
	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	FVector WorldAcceleration;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	FVector WorldAcceleration2D;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Velocity", meta = (BlueprintThreadSafe))
	FVector LocalAcceleration2D;

	// Aiming
	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Aiming", meta = (BlueprintThreadSafe))
	float AimYaw;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Aiming", meta = (BlueprintThreadSafe))
	float AimPitch;

	// Character State
	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	bool HasVelocity;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	bool HasAcceleration;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	bool IsOnGround;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	bool IsJumping;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	bool IsFalling;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	bool IsCrouching;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	bool wasCrouchingLastTime;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	float TimeToJumpApex;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	float GroundDistance;

	// Others
	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	bool IsFirstUpdate;

	UPROPERTY(BlueprintReadOnly, Category = "ThreadSafe|Character State", meta = (BlueprintThreadSafe))
	float CardinalDirectionDeadZone = 10.0f;


protected:
	UFUNCTION(BlueprintCallable)
	void UpdateGroundDistanceData();

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void UpdateLocationData(float InDeltaTime);

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void UpdateRotationData(float InDeltaTime);

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void UpdateVelocityData();

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void UpdateAccelerationData();

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void UpdateCharacterStateData(float InDeltaTime);

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void UpdateAimingData();

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void UpdateJumpFallData();

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void SelectCardinalDirection(float Angle, float DeadDone, EAnimEnum_CardinalDirection CurrentDirection, bool UseCurrentDirection);

private:
	float CustomCalculateDirection(const FVector& Velocity, const FRotator& BaseRotation);
};
