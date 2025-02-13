// Fill out your copyright notice in the Description page of Project Settings.


#include "SpartaGameState.h"
#include "Kismet/GameplayStatics.h"
#include "SpawnVolume.h"
#include "CoinItem.h"
#include "SpartaGameInstance.h"
#include "SpartaPlayerController.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"

ASpartaGameState::ASpartaGameState()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	LevelDuration = 30.f;
	CurrentLevelIndex = 0;
	MaxLevelIndex = 3;
}

int32 ASpartaGameState::GetScore()
{
	return Score;
}

void ASpartaGameState::AddScore(int32 Amount)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		USpartaGameInstance* SpartaGameInstance = Cast<USpartaGameInstance>(GameInstance);
		if(SpartaGameInstance)
		{
			SpartaGameInstance->AddToScore(Amount);
		}
	}
}

void ASpartaGameState::BeginPlay()
{
	Super::BeginPlay();

	StartLevel();

	GetWorldTimerManager().SetTimer(
		HUDUpdateTimerHandle,
		this,
		&ASpartaGameState::UpdateHUD,
		0.1f,
		true
	);
}

void ASpartaGameState::StartLevel()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (ASpartaPlayerController* SpartaPlayercontroller = Cast<ASpartaPlayerController>(PlayerController))
		{
			SpartaPlayercontroller->ShowGameHUD();
		}
	}

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		USpartaGameInstance* SpartaGameInstance = Cast<USpartaGameInstance>(GameInstance);
		if (SpartaGameInstance)
		{
			CurrentLevelIndex = SpartaGameInstance->CurrentLevelIndex;
		}
	}

	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundVolumes);
	
	const int32 ItemToSpawn = 40;

	for (int32 i = 0; i < ItemToSpawn; i++)
	{
		if (FoundVolumes.Num() > 0)
		{
			ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[0]);
			if (SpawnVolume)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				if (SpawnedActor && SpawnedActor->IsA(ACoinItem::StaticClass()))
				{
					SpawnedCoinCount++;
				}
			}
		}
	}

	GetWorldTimerManager().SetTimer(
		LevelTimerHandle,
		this,
		&ASpartaGameState::OnLevelTimeUP,
		LevelDuration,
		false
	);
}

void ASpartaGameState::OnLevelTimeUP()
{
	EndLevel();
}

void ASpartaGameState::EndLevel()
{
	GetWorldTimerManager().ClearTimer(LevelTimerHandle); // 타이머 초기화

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		USpartaGameInstance* SpartaGameInstance = Cast<USpartaGameInstance>(GameInstance);
		if (SpartaGameInstance)
		{
			AddScore(Score);
			CurrentLevelIndex++;
			SpartaGameInstance->CurrentLevelIndex = CurrentLevelIndex;
		}
	}

	if (CurrentLevelIndex > MaxLevelIndex)
	{
		OnGameOver();
		return;
	}
	
	if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
	{
		UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
	}
	else
	{
		OnGameOver();
	}
}

void ASpartaGameState::OnGameOver()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (ASpartaPlayerController* SpartaPlayercontroller = Cast<ASpartaPlayerController>(PlayerController))
		{
			SpartaPlayercontroller->ShowMainMenu(true);
		}
	}
}

void ASpartaGameState::OnCoinCollected()
{
	CollectedCoinCount++;
	UE_LOG(LogTemp, Warning, TEXT("Coin Collected: %d / %d"),
		CollectedCoinCount,
		SpawnedCoinCount);

	if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
	{
		EndLevel();
	}
}

void ASpartaGameState::UpdateHUD()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	if(ASpartaPlayerController* SpartaPlayerController = Cast<ASpartaPlayerController>(PlayerController))
	{
		if (UUserWidget* HUDWidget = SpartaPlayerController->GetHUDWidget())
		{
			if (UTextBlock* TimeText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Time"))))
			{
				float RemaingTime = GetWorldTimerManager().GetTimerRemaining(LevelTimerHandle);
				TimeText->SetText(FText::FromString(FString::Printf(TEXT("Time: %.1f"), RemaingTime)));
			}

			if (UTextBlock* ScoreText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Score"))))
			{
				if (UGameInstance* GameInstance = GetGameInstance())
				{
					USpartaGameInstance* SpartaGameInstance = Cast<USpartaGameInstance>(GameInstance);
					if (SpartaGameInstance)
					{
						ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), SpartaGameInstance->TotalScore)));
					}
				}				
			}

			if (UTextBlock* LevelText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Level"))))
			{
				if (UGameInstance* GameInstance = GetGameInstance())
				{
					USpartaGameInstance* SpartaGameInstance = Cast<USpartaGameInstance>(GameInstance);
					if (SpartaGameInstance)
					{
						LevelText->SetText(FText::FromString(FString::Printf(TEXT("Level: %d"), SpartaGameInstance->CurrentLevelIndex + 1)));
					}
				}
			}
		}
	}
}
