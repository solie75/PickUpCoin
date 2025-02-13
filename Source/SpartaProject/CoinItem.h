// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "CoinItem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAPROJECT_API ACoinItem : public ABaseItem
{
	GENERATED_BODY()
	
public:
	ACoinItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Value")
	int32 PointValue;

public:
	virtual void ActivateItem(AActor* Activator) override;
};
