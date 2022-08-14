// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	Crosshair = CreateWidget(this, CrosshairClass);
	if (Crosshair != nullptr)
	{
		Crosshair->AddToViewport();
	}
}

void AMyPlayerController::GameHasEnded(class AActor *EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);
	Crosshair->RemoveFromViewport();

	if (bIsWinner)
	{
		UUserWidget *WinScreen = CreateWidget(this, WinScreenClass);
		if (WinScreen != nullptr)
		{
			WinScreen->AddToViewport();
		}
	}
	else
	{
		UUserWidget *LoseScreen = CreateWidget(this, LoseScreenClass);
		if (LoseScreen != nullptr)
		{
			LoseScreen->AddToViewport();
		}
	}

	//UE_LOG(LogTemp, Warning, TEXT("Game has finished")); test - game finishes when player is dead

	GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);
}

