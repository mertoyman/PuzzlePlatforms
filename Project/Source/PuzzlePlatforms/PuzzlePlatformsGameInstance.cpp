// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformsGameInstance.h"


#include "OnlineSessionSettings.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "MenuSystem/MainMenu.h"
#include "MenuSystem/PauseMenu.h"

const static FName SESSION_NAME = TEXT("My Session Game");

UPuzzlePlatformsGameInstance::UPuzzlePlatformsGameInstance(const FObjectInitializer& ObjectInitializer)
{
    ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/MenuSystem/WBP_MainMenu"));
    if(!ensure(MenuBPClass.Class != nullptr)) return;
    MenuClass = MenuBPClass.Class;

    ConstructorHelpers::FClassFinder<UUserWidget> PauseMenuBPClass(TEXT("/Game/MenuSystem/WBP_PauseMenu"));
    if(!ensure(PauseMenuBPClass.Class != nullptr)) return;
    PauseMenuClass = PauseMenuBPClass.Class;
}

void UPuzzlePlatformsGameInstance::Init()
{
    IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
    if(OnlineSubsystem == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("No subsystem found"));
    }
    
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OnlineSubsystem->GetSubsystemName().ToString());
    SessionInterface = OnlineSubsystem->GetSessionInterface();
    
    if(SessionInterface.IsValid())
    {
        SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &UPuzzlePlatformsGameInstance::OnCreateSessionComplete);
        SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(this, &UPuzzlePlatformsGameInstance::OnDestroySessionComplete);
        SessionInterface->OnFindSessionsCompleteDelegates.AddUObject(this, &UPuzzlePlatformsGameInstance::OnFindSessionComplete);

        SessionSearch = MakeShareable(new FOnlineSessionSearch());
        if(SessionSearch.IsValid())
        {
            UE_LOG(LogTemp, Warning, TEXT("Starting Find Session"));     
            SessionInterface->FindSessions(0, SessionSearch.ToSharedRef()); 
        }
    }
}

void UPuzzlePlatformsGameInstance::CreateSession()
{
    if(SessionInterface.IsValid())
    {
        FOnlineSessionSettings SessionSettings;
        SessionSettings.bIsLANMatch = true;
        SessionSettings.NumPublicConnections = 2;
        SessionSettings.bShouldAdvertise = true;
        SessionInterface->CreateSession(0, SESSION_NAME, SessionSettings);
    } 
}

void UPuzzlePlatformsGameInstance::OnCreateSessionComplete(FName SessionName, bool Success)
{
    if (!Success)
    {
        UE_LOG(LogTemp, Warning, TEXT("Could not create session"));
        return;
    }
    
    if(Menu != nullptr)
    {
        Menu->TearDown();
    }
    
    UEngine* Engine = GetEngine();
    if (!ensure(Engine != nullptr)) return;

    Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));

    UWorld* World = GetWorld();
    if(!ensure(World != nullptr)) return;

    World->ServerTravel("/Game/ThirdPersonCPP/Maps/ThirdPersonExampleMap?listen");
}

void UPuzzlePlatformsGameInstance::OnFindSessionComplete(bool Success)
{
    if(Success && SessionSearch.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("Finished Find Session"));
   
        for(const FOnlineSessionSearchResult& SearchResult : SessionSearch->SearchResults)
        {
            UE_LOG(LogTemp, Warning, TEXT("Found session names: %s"), *SearchResult.GetSessionIdStr());
            
        }
    }
}

void UPuzzlePlatformsGameInstance::OnDestroySessionComplete(FName SessionName, bool Success)
{
    if(Success)
    {
        CreateSession();
    }
}


void UPuzzlePlatformsGameInstance::Host()
{
    if(SessionInterface.IsValid())
    {
        auto ExistingSession = SessionInterface->GetNamedSession(SESSION_NAME);
        if (ExistingSession != nullptr)
        {
            SessionInterface->DestroySession(SESSION_NAME);    
        }
        else
        {
            CreateSession();
        }
    }   
}

void UPuzzlePlatformsGameInstance::Join(const FString& Address)
{
    if(Menu != nullptr)
    {
        Menu->TearDown();
    }
    
    UEngine* Engine = GetEngine();
    if (!ensure(Engine != nullptr)) return;

    Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, FString::Printf(TEXT("Joining %s"), *Address));

    APlayerController* PlayerController = GetFirstLocalPlayerController();
    if(!ensure(PlayerController != nullptr)) return;

    PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
}

//Run on pause menu
void UPuzzlePlatformsGameInstance::LoadMainMenu()
{
    APlayerController* PlayerController = GetFirstLocalPlayerController();
    if(!ensure(PlayerController != nullptr)) return;
   
    PlayerController->ClientTravel("/Game/MenuSystem/MainMenu", ETravelType::TRAVEL_Absolute);
}


//Run on first launch of application
void UPuzzlePlatformsGameInstance::LoadMenu()
{
    if(!ensure(MenuClass != nullptr)) return;
    
    Menu = CreateWidget<UMainMenu>(this, MenuClass);
    if (!ensure(Menu != nullptr)) return;
    
    Menu->Setup();
    Menu->SetMenuInterface(this);
}

void UPuzzlePlatformsGameInstance::LoadPauseMenu()
{
    if(!ensure(PauseMenuClass != nullptr)) return;

    UMenuWidget* PauseMenu = CreateWidget<UMenuWidget>(this, PauseMenuClass);
    if (!ensure(PauseMenu != nullptr)) return;
    PauseMenu->Setup();
    PauseMenu->SetMenuInterface(this);
}
