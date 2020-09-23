// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AMovingPlatform::BeginPlay()
{
    Super::BeginPlay();
    
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
        Location += FVector::ForwardVector * Speed * DeltaSeconds;
        SetActorLocation(Location); 
    }
}
