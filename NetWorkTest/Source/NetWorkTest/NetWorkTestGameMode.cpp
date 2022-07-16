// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetWorkTestGameMode.h"
#include "NetWorkTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetWorkTestGameMode::ANetWorkTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
