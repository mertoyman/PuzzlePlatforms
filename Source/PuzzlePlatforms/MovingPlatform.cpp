// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AMovingPlatform::BeginPlay()
{
    Super::BeginPlay();

    SetMobility(EComponentMobility::Movable);
    
    GlobalTargetLocation = GetTransform().TransformPosition(TargetLocation);
    GlobalStartLocation = GetActorLocation();
    
    //If it's server, replicate movement for client to update
    if(HasAuthority())
    {
        SetReplicates(true);
        SetReplicateMovement(true);
    }
    
}

void AMovingPlatform::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if(HasAuthority())                                                
    {
        FVector Location = GetActorLocation();
        float JourneyLength = (GlobalTargetLocation - GlobalStartLocation).Size();
        float JourneyTraveled = (Location - GlobalStartLocation).Size();

        if(JourneyLength < JourneyTraveled)
        {
            GlobalTargetLocation = GlobalStartLocation;
            GlobalStartLocation = GetActorLocation();
        }

        FVector Direction = (GlobalTargetLocation - GlobalStartLocation).GetSafeNormal();
        Location += Direction * Speed * DeltaSeconds;    
        SetActorLocation(Location);
    }                                                                 
}