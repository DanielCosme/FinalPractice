// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthKit.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include <UFinalPractice\UFinalPracticeCharacter.h>
#include "Engine.h"

// Sets default values
AHealthKit::AHealthKit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	SetRootComponent(MeshComponent);
	MeshComponent->SetCollisionProfileName("OverlapAll");
	SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
}

// Called when the game starts or when spawned
void AHealthKit::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AHealthKit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorWorldRotation(FRotator(0, 90.f * DeltaTime, 0));

}

void AHealthKit::NotifyActorBeginOverlap(AActor* OtherActor)
{
	auto actor = Cast<AUFinalPracticeCharacter>(OtherActor);
	if (actor != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("HEALING !!!"));
		actor->Heal(Duration);
	
		if (HealSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), HealSound, GetActorLocation());
		}
		Destroy();
	}
}




