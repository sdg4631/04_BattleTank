// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

// Forward Declarations
class ATank;

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:

private:

	// Called at the beginning of the game
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	ATank* GetAITank() const;

	ATank* GetPlayerTank() const;

	
	
	
	
};
