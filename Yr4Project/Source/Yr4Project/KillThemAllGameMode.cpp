// Fill out your copyright notice in the Description page of Project Settings.


#include "KillThemAllGameMode.h"

void AKillThemAllGameMode::PawnKilled(APawn* PawnKilled)
{
	Super::PawnKilled(PawnKilled);

	//UE_LOG(LogTemp, Warning, TEXT("An enemy was killed"));

	APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
	if (PlayerController != nullptr) // check if players dead
	{
		PlayerController->GameHasEnded(nullptr, false); // player dies
	}
}