// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseMenu.h"


#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

bool UPauseMenu::Initialize()
{
	bool Success = Super::Initialize();
	if(!Success) return false;

	if (!ensure(ResumeButton != nullptr)) return false;
	ResumeButton->OnClicked.AddDynamic(this, &UPauseMenu::ResumeGame);

	if (!ensure(MainMenuButton != nullptr)) return false;
	MainMenuButton->OnClicked.AddDynamic(this, &UPauseMenu::ReturnToMainMenu);

	return true;
}

void UPauseMenu::ResumeGame()
{
	TearDown();
	UGameplayStatics::SetGamePaused(GetWorld(),false);
}

void UPauseMenu::ReturnToMainMenu()
{
	if(_MenuInterface != nullptr)
	{
		TearDown();
		_MenuInterface->LoadMainMenu();
	}
}
