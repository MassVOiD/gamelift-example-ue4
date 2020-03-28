// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameLiftTutorialPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GAMELIFTTUTORIAL_API AGameLiftTutorialPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	FString PlayerSessionId;
	FString PlayerId;

	UPROPERTY(Replicated, BlueprintReadWrite)
	FString Team;
};
