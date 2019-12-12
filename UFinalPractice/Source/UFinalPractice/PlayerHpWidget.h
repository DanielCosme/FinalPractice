// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHpWidget.generated.h"

/**
 * 
 */
UCLASS()
class UFINALPRACTICE_API UPlayerHpWidget : public UUserWidget
{
	GENERATED_BODY()

	public:
		UPROPERTY(BlueprintReadOnly) class AUFinalPracticeCharacter* player;
	
};
