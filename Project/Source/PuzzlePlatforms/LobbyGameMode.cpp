// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

void ALobbyGameMode::PostLogin(APlayerController* Player)
{
	Super::PostLogin(Player);
	
	++NumOfPlayers;

	if (NumOfPlayers >= 3)
	{
		UWorld* World = GetWorld();
		if(!ensure(World != nullptr)) return;

		World->ServerTravel("/Game/PuzzlePlatforms/Maps/Game?listen");
	}
}

void ALobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	
	--NumOfPlayers;
}
