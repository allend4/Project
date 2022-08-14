// Fill out your copyright notice in the Description page of Project Settings.


#include "KillThemAllGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "MyAIController.h"

void AKillThemAllGameMode::PawnKilled(APawn* PawnKilled)
{
	Super::PawnKilled(PawnKilled);

	//UE_LOG(LogTemp, Warning, TEXT("An enemy was killed"));

	APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
	if (PlayerController != nullptr) // check if players dead
	{
		EndGame(false); // player dies
	}

	for (AMyAIController* Controller : TActorRange<AMyAIController>(GetWorld()))
	{
		if (!Controller->IsDead())
		{
			return;
		}
	}
	EndGame(true);
}

void AKillThemAllGameMode::EndGame(bool bIsPlayerWinner)
{
	for (AController* Controller : TActorRange<AController>(GetWorld()))
	{
		bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWinner;
		Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);
	}
}