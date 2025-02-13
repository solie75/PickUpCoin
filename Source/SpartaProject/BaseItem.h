// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemInterface.h"
#include "BaseItem.generated.h"

class USphereComponent;

UCLASS()
class SPARTAPROJECT_API ABaseItem : public AActor, public IItemInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseItem();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FName ItemType;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item|Component")
	USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item|Component")
	USphereComponent* Collider;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item|Component")
	UStaticMeshComponent* StaticMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void OnItemBeginOverlap(
		UPrimitiveComponent* OwnOverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherOverlappedComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	)  override;
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OwnOverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherOverlappedComp,
		int32 OtherBodyIndex
	) override;
	virtual void ActivateItem(AActor* Activator) override;
	virtual FName GetItemType() const override;

	void DestroyItem();

	
};
