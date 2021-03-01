// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "MenuSystem/MenuInterface.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"


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
	virtual void Host() override;

	UFUNCTION(Exec)
    virtual void Join(const FString& Address) override;

	virtual void LoadMainMenu() override;
	
private:
	TSubclassOf<class UUserWidget> MenuClass;
	TSubclassOf<class UUserWidget> PauseMenuClass;
	
	class UMainMenu* Menu;

	IOnlineSessionPtr SessionInterface;
	void OnCreateSessionComplete(FName SessionName, bool Success);
};
