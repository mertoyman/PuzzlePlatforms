// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "MenuSystem/MenuInterface.h"
#include "Engine/GameInstance.h"

#include "PuzzlePlatformsGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UPuzzlePlatformsGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()

	UPuzzlePlatformsGameInstance(const FObjectInitializer& ObjectInitializer);
 
	virtual void Init();

	UFUNCTION(BlueprintCallable)
	void LoadMenu();

	UFUNCTION(BlueprintCallable)
	void LoadPauseMenu();

	UFUNCTION(Exec)
	void Host();

	UFUNCTION(Exec)
    void Join(const FString& Address);

private:
	TSubclassOf<class UUserWidget> MenuClass;
	TSubclassOf<class UUserWidget> PauseMenuClass;
	
	class UMainMenu* Menu;
	class UPauseMenu* PauseMenu;
	class UInputComponent* InputComponent;
};
