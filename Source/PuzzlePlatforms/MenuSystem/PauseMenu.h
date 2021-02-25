// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Chaos/AABBTree.h"
#include "Components/Button.h"


#include "PauseMenu.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UPauseMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	void Setup();
	//void TearDown();
protected:
	virtual bool Initialize();
	
// private:
// 	UPROPERTY(meta = (BindWidget))
// 	UButton* ResumeButton;
//
// 	UPROPERTY(meta = (BindWidget))
// 	UButton* MainMenuButton;
//
	
};
