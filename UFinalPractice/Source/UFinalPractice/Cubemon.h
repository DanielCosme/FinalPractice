// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cubemon.generated.h"

UCLASS()
class UFINALPRACTICE_API ACubemon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubemon();

	UPROPERTY(EditAnywhere, BluePrintReadOnly) float HP = 1.f;
	const float MAX_HP = 1.f;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere) class UWidgetComponent* WidgetComponent;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* Body;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* Head;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);

};

struct FSortByHP
{
	FORCEINLINE bool operator()(const ACubemon& cube1, const ACubemon& cube2) const
	{
		return cube1.HP < cube2.HP; //If true go to the front.
	}
};
