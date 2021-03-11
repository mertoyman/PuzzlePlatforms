// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"
#include "PuzzlePlatformsGameInstance.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	++NumOfPlayers;

	if (NumOfPlayers >= 3)
	{
		
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ALobbyGameMode::StartGame, 10);	
	}
}

void ALobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	
	--NumOfPlayers;
}

void ALobbyGameMode::StartGame()
{
	auto GameInstance = Cast<UPuzzlePlatformsGameInstance>(GetGameInstance());

	if (GameInstance == nullptr) return;

	GameInstance->StartSession();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;
	
	bUseSeamlessTravel = true;
	
	World->ServerTravel("/Game/PuzzlePlatforms/Maps/Game?listen");

}
