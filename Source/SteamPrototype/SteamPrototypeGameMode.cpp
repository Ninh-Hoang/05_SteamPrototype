// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SteamPrototypeGameMode.h"
#include "SteamPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamPrototypeGameMode::ASteamPrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Characters/BP_Base"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
