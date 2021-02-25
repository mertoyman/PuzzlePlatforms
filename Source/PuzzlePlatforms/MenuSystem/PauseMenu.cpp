// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseMenu.h"

bool UPauseMenu::Initialize()
{
	bool Success = Super::Initialize();
	if(!Success) return false;

	return true;
}

void UPauseMenu::Setup()
{
	this->AddToViewport();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;
	APlayerController* PlayerController = World->GetFirstPlayerController();
	if(!ensure(PlayerController != nullptr)) return;

	FInputModeUIOnly InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetWidgetToFocus(this->TakeWidget());
	PlayerController->SetInputMode(InputModeData);
	PlayerController->bShowMouseCursor = true;
}

