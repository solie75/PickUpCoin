// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItem.h"
#include "Components/SphereComponent.h"

// Sets default values
ABaseItem::ABaseItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 컴포넌트 초기화
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	// 충돌 프로파일 설정.
	Collider->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Collider->SetupAttachment(Scene);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(Collider);

	// 충돌 이벤트 에 충돌 콜백 함수 바인딩.
	Collider->OnComponentBeginOverlap.AddDynamic(this, &ABaseItem::OnItemBeginOverlap);
	Collider->OnComponentEndOverlap.AddDynamic(this, &ABaseItem::OnItemEndOverlap);
}

// Called when the game starts or when spawned
void ABaseItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseItem::OnItemBeginOverlap(UPrimitiveComponent* OwnOverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherOverlappedComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor->ActorHasTag("Player"))
	{
		ActivateItem(OtherActor);
	}
}

void ABaseItem::OnItemEndOverlap(UPrimitiveComponent* OwnOverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherOverlappedComp, int32 OtherBodyIndex)
{
}

void ABaseItem::ActivateItem(AActor* Activator)
{
	Destroy();
}

FName ABaseItem::GetItemType() const
{
	return FName();
}

void ABaseItem::DestroyItem()
{
	Destroy();
}

