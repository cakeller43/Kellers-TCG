// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameState.h"
#include "MatchGameState.generated.h"

/**
 * 
 */
/*
class MatchStateParent;
class APlayerControllerMatch; */
UCLASS()
class TCG_API AMatchGameState : public AGameState
{
	GENERATED_BODY()
	/*TArray<APlayerControllerMatch*> playerControllers;

	TArray<MatchStateParent*> matchStateStack;
	TMap<FString, MatchStateParent*> allStates;*/

public:
	/*UFUNCTION(BlueprintCallable, Category = "Match Setup")
	void InitializeMatchStateStack();

	void Push(MatchStateParent*);
	MatchStateParent* Pop();
	MatchStateParent* Top() const;*/
	
};
