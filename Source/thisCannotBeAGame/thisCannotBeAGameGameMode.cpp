// Copyright Epic Games, Inc. All Rights Reserved.

#include "thisCannotBeAGameGameMode.h"
#include "thisCannotBeAGamePlayerController.h"
#include "thisCannotBeAGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AthisCannotBeAGameGameMode::AthisCannotBeAGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AthisCannotBeAGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}