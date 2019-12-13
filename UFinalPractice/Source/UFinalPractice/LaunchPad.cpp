// Fill out your copyright notice in the Description page of Project Settings.


#include "LaunchPad.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/actor.h"
#include "UFinalPracticeCharacter.h"
#include "Engine.h"

// Sets default values
ALaunchPad::ALaunchPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	SetRootComponent(StaticMeshComponent);
	StaticMeshComponent->SetCollisionProfileName("OverlapAll");

	SetActorScale3D(FVector(1.0f, 1.0f, 0.1f));
}

// Called when the game starts or when spawned
void ALaunchPad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaunchPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALaunchPad::NotifyActorBeginOverlap(AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("HEALING !!!"));
	auto actor = Cast<AUFinalPracticeCharacter>(OtherActor);
	if (actor != nullptr)
	{
		FVector impulse = actor->GetActorForwardVector() * forwardForce + actor->GetActorUpVector() + upForce;
		actor->GetCharacterMovement()->AddImpulse(impulse);
	}
}


