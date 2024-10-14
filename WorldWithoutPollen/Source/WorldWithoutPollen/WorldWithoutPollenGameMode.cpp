// Copyright Epic Games, Inc. All Rights Reserved.

#include "WorldWithoutPollenGameMode.h"
#include "WorldWithoutPollenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWorldWithoutPollenGameMode::AWorldWithoutPollenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
