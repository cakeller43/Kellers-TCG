// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "TCGGameMode.h"
#include "Engine.h"
#include "CardDictionary.h"
#include "EventManager.h"
#include "PlayerControllerMatch.h"
#include "MatchGameState.h"
#include "MatchStateParent.h"

#include "BeginMatchState.h"
void ATCGGameMode::StartPlay()
{
	Super::StartPlay();

	StartMatch();

	PlayerControllerClass = APlayerControllerMatch::StaticClass();
	GameStateClass = AMatchGameState::StaticClass();

	if (!eventManager)
	{
		eventManager = NewObject<UEventManager>();
	}

	if (!cardDictionary)
	{
		cardDictionary = NewObject<UCardDictionary>();
	}

}



UEventManager* ATCGGameMode::getEventManager() const
{
	return eventManager;
}


UCardDictionary* ATCGGameMode::getCardDictionary() const
{
	return cardDictionary;
}


void ATCGGameMode::InitializeMatchStateStack()
{
	//initialize each state and push
	FString key;

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("InitializeMatchStateStack"));

	for (auto Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		playerControllers.Add(Cast<APlayerControllerMatch>(*Iterator));
	}


	MatchStateParent* beginMatch = new BeginMatchState(playerControllers);
	key = TEXT("BeginMatch");
	allStates.Add(key, beginMatch);
	Push(beginMatch);//this will be the active state
}

void ATCGGameMode::Push(MatchStateParent* newState_p)
{
	matchStateStack.Push(newState_p);
	newState_p->WhenActive();
}
MatchStateParent* ATCGGameMode::Pop()
{
	matchStateStack.Top()->WhenPopped();
	MatchStateParent* popped = matchStateStack.Pop();
	matchStateStack.Top()->WhenActive();
	return popped;
}
MatchStateParent* ATCGGameMode::Top() const
{
	return matchStateStack.Top();
}
