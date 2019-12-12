// Fill out your copyright notice in the Description page of Project Settings.


#include "Caltrop.h"
#include "Components/StaticMeshComponent.h"
#include "UFinalPracticeCharacter.h"

// Sets default values
ACaltrop::ACaltrop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	SetRootComponent(MeshComponent);
	MeshComponent->SetSimulatePhysics(true);
	SetActorScale3D(FVector(0.25f, 0.25f, 0.25f));
}

// Called when the game starts or when spawned
void ACaltrop::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACaltrop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACaltrop::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	auto actor = Cast<AUFinalPracticeCharacter>(Other);
	if (actor != nullptr)
	{
		actor->HP -= Damage;
		Destroy();
	}
}

