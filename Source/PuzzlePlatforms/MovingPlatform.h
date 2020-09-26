// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()

	public:
	AMovingPlatform();

	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed = 20;

	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))
	FVector TargetLocation;
	
	FVector StartLocation;

	private:
	UPROPERTY(VisibleAnywhere)
	FVector GlobalTargetLocation;
	UPROPERTY(VisibleAnywhere)
	FVector GlobalStartLocation;
};
