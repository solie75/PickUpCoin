// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "SpartaGameState.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAPROJECT_API ASpartaGameState : public AGameState
{
	GENERATED_BODY()
public:
	ASpartaGameState();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score")
	int32 Score;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	int32 SpawnedCoinCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	int32 CollectedCoinCount;

	FTimerHandle LevelTimerHandle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level")
	float LevelDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level")
	int32 CurrentLevelIndex;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level")
	int32 MaxLevelIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Level")
	TArray<FName>LevelMapNames;

	FTimerHandle HUDUpdateTimerHandle;

public:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintPure, Category = "Score")
	int32 GetScore();

	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Amount);


	void StartLevel();

	void OnLevelTimeUP();

	void EndLevel();

	UFUNCTION(BlueprintCallable, Category = "Level")
	void OnGameOver();

	void OnCoinCollected();

	void UpdateHUD();
};