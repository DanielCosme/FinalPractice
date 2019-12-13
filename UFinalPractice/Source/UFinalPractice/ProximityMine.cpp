// Fill out your copyright notice in the Description page of Project Settings.


#include "ProximityMine.h"
#include "Components/StaticMeshComponent.h"
#include "UFinalPracticeCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"
#include "TimerManager.h"

// Sets default values
AProximityMine::AProximityMine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(StaticMeshComponent);
	SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));

	//particleSystem = CreateDefaultSubobject<UParticleSystem>(TEXT("Particle System"));
}

// Called when the game starts or when spawned
void AProximityMine::BeginPlay()
{
	Super::BeginPlay();
	player = Cast<AUFinalPracticeCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	material = StaticMeshComponent->CreateDynamicMaterialInstance(0);
}

void AProximityMine::explode()
{
	if (FVector::Distance(player->GetActorLocation(), this->GetActorLocation()) < Distance)
	{
		player->SetHP(-0.5f);
	}
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), particleSystem, GetActorLocation());
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Black, TEXT("BOOM!"));
	Destroy();
}


// Called every frame
void AProximityMine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (player != nullptr)
	{
		if (!activated && FVector::Distance(player->GetActorLocation(), this->GetActorLocation()) < Distance)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Black, TEXT("Activated!"));
			activated = true;
			material->SetScalarParameterValue(FName("Param"), 1.f);
			GetWorldTimerManager().SetTimer(MineTimeHandler, this, &AProximityMine::explode, 1.f,true, Delay);
		}
	}
}

void AProximityMine::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Destroy();
}
