// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController.h"
#include "Kismet/GameplayStatics.h"

void AMyAIController::BeginPlay()
{
	Super::BeginPlay();

	APawn* PlayerPawn =  UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	SetFocus(PlayerPawn);
}
