// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "MatchGameState.h"

/*
#include "MatchStateParent.h"
#include "PlayerControllerMatch.h"

#include "BeginMatchState.h"

#include "Engine.h"//remove after prnting out for debugging is finished

void AMatchGameState::InitializeMatchStateStack()
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

void AMatchGameState::Push(MatchStateParent* newState)
{
	matchStateStack.Push(newState);
	newState->WhenActive();
}
MatchStateParent* AMatchGameState::Pop()
{
	matchStateStack.Top()->WhenPopped();
	MatchStateParent* popped = matchStateStack.Pop();
	matchStateStack.Top()->WhenActive();
	return popped;
}
MatchStateParent* AMatchGameState::Top() const
{
	return matchStateStack.Top();
}
*/

