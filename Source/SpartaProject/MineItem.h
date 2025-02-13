// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "MineItem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAPROJECT_API AMineItem : public ABaseItem
{
	GENERATED_BODY()
public:
	AMineItem();

public:
	FTimerHandle ExplosionTimerHandle;

	// Æø¹ß ¹üÀ§ collider
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item|Component")
	USphereComponent* ExplosionRangeCheckComp;
public:
	virtual void ActivateItem(AActor* Activator) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Item")
	float ExplosionDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float ExplosionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 ExplosionDamage;

	void Explode();
};
