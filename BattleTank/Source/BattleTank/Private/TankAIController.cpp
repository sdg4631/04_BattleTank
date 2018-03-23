// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Engine/World.h"



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

	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Error, TEXT("AIController is not locating a player tank!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController located player: %s !"), *(PlayerTank->GetName()));
	}
}

ATank* ATankAIController::GetAITank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn){ return nullptr; }
	return Cast<ATank>(PlayerPawn);
}