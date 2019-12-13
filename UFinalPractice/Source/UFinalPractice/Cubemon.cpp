// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubemon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "CubemonWidget.h"
#include "Kismet/GameplayStatics.h"
#include "UFinalPracticeProjectile.h"

// Sets default values
ACubemon::ACubemon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH COMPONENT"));
	Head = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH head"));
	SetRootComponent(Body);
	Head->SetupAttachment(Body);
	Head->SetRelativeScale3D(FVector(0.3f, 0.3f, 0.3f));
	Head->SetRelativeLocation(FVector(0.f, 0.f, 65.f));
	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	WidgetComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	WidgetComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	WidgetComponent->SetRelativeLocation(FVector(0.f, 0.f, 125.f));

}

// Called when the game starts or when spawned
void ACubemon::BeginPlay()
{
	Super::BeginPlay();
	Cast<UCubemonWidget>(WidgetComponent->GetUserWidgetObject())->cubemon = this;
	
}

// Called every frame
void ACubemon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto camera = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	WidgetComponent->SetWorldRotation(camera->GetCameraRotation());
	WidgetComponent->AddLocalRotation(FRotator(0, 180, 0));
}

void ACubemon::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	auto actor = Cast<AUFinalPracticeProjectile>(Other);
	if (actor != nullptr)
	{
		HP -= MAX_HP * 0.1f;
	}
}

