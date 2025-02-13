// Fill out your copyright notice in the Description page of Project Settings.


#include "MineItem.h"
#include "Components/SphereComponent.h"
#include "Kismet/GamePlayStatics.h"

AMineItem::AMineItem()
	: ABaseItem()
{
	ExplosionDelay = 5.f;
	ExplosionRadius = 300.f;
	ExplosionDamage = 30;

	ItemType = TEXT("Mine");

	ExplosionRangeCheckComp = CreateDefaultSubobject<USphereComponent>(TEXT("ExplosionRangeCheckComp"));
	ExplosionRangeCheckComp->SetupAttachment(Scene);
	ExplosionRangeCheckComp->InitSphereRadius(ExplosionRadius);
	ExplosionRangeCheckComp->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
}

void AMineItem::ActivateItem(AActor* Activator)
{
	GetWorld()->GetTimerManager().SetTimer(
		ExplosionTimerHandle,
		this,
		&AMineItem::Explode,
		ExplosionDelay,
		false // นÝบน x 
	);
}

void AMineItem::Explode()
{
	TArray<AActor*> OverlappingActors;
	ExplosionRangeCheckComp->GetOverlappingActors(OverlappingActors);

	for (AActor* Actor : OverlappingActors)
	{
		if (Actor && Actor->ActorHasTag("Player"))
		{
			UGameplayStatics::ApplyDamage(
				Actor,
				ExplosionDamage,
				nullptr,
				this,
				UDamageType::StaticClass()
			);
			break;
		}
	}

	Destroy();
}
