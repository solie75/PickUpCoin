// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SpartaCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
struct FInputActionValue;

UCLASS()
class SPARTAPROJECT_API ASpartaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASpartaCharacter();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float CurHealth;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(
		float DamageAmount,
		struct FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;
protected:
	UFUNCTION()
	void Move(const FInputActionValue& _value);

	UFUNCTION()
	void StartJump(const FInputActionValue& _value);

	UFUNCTION()
	void StopJump(const FInputActionValue& _value);

	UFUNCTION()
	void Look(const FInputActionValue& _value);

	UFUNCTION()
	void StartSprint(const FInputActionValue& _value);

	UFUNCTION()
	void StopSprint(const FInputActionValue& _value);

public:
	UFUNCTION(BlueprintPure, Category = "Health") // BlueprintPure 은 블루프린트에서 실행도느(exec 핀)이 없는 함수가 생성된다. 입력 값이 같으면 항상 같은 결과를 반환해야 하며, 상태를 변경하지 않아야 한다.
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void AddHealth(float HealAmount);

	void OnDeath();

private:
	float NormalSpeed;
	float SprintSpeedMultiplier;
	float SprintSpeed;
};
