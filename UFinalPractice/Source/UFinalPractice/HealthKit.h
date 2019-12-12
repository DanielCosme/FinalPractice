// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealthKit.generated.h"

UCLASS()
class UFINALPRACTICE_API AHealthKit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealthKit();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere) class USoundBase* HealSound;

	UPROPERTY(EditAnywhere) float Duration = 5.f;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
