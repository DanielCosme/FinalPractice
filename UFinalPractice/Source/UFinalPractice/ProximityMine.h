// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProximityMine.generated.h"

UCLASS()
class UFINALPRACTICE_API AProximityMine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProximityMine();

	FTimerHandle MineTimeHandler;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere) class AUFinalPracticeCharacter* player;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(EditAnywhere) float Distance = 500.f;
	UPROPERTY(EditAnywhere) float Delay = 5.f;
	UPROPERTY(EditAnywhere) UParticleSystem* particleSystem;

	UMaterialInstanceDynamic* material;
	bool activated = false;

	void explode();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
