// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"




void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto AITank = GetAITank();
	if (!AITank)
	{
		UE_LOG(LogTemp, Error, TEXT("AIController is not possesing a tank!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController is possesing: %s"), *(AITank->GetName()));
	}
}

ATank* ATankAIController::GetAITank() const
{
	return Cast<ATank>(GetPawn());
}