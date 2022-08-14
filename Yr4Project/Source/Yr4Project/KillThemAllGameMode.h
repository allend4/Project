// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameModeBase.h"
#include "KillThemAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class YR4PROJECT_API AKillThemAllGameMode : public AMyGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void PawnKilled(APawn* PawnKilled) override;

};
