// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UFinalPracticeGameMode.h"
#include "UFinalPracticeHUD.h"
#include "UFinalPracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUFinalPracticeGameMode::AUFinalPracticeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUFinalPracticeHUD::StaticClass();
}
