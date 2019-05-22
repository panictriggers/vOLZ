// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "vOLZGameMode.h"
#include "vOLZCharacter.h"
#include "UObject/ConstructorHelpers.h"

AvOLZGameMode::AvOLZGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/BP/General_Character_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
