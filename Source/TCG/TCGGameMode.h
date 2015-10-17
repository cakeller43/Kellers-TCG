// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "TCGGameMode.generated.h"

/**
 * 
 */
class UEventManager;
class UCardDictionary;

class MatchStateParent;
class APlayerControllerMatch;
UCLASS()
class TCG_API ATCGGameMode : public AGameMode
{
	GENERATED_BODY()

	UEventManager* eventManager;
	UCardDictionary* cardDictionary;
	
	TArray<APlayerControllerMatch*> playerControllers;

	TArray<MatchStateParent*> matchStateStack;
	TMap<FString, MatchStateParent*> allStates;
	
public:

	virtual void StartPlay() override;

	UEventManager* getEventManager() const;
	UCardDictionary* getCardDictionary() const;

	UFUNCTION(BlueprintCallable, Category = "Match Setup")
		void InitializeMatchStateStack();

	void Push(MatchStateParent*);
	MatchStateParent* Pop();
	MatchStateParent* Top() const;
	
};
