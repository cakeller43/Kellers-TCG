// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "BeginMatchState.h"
#include "PlayerControllerMatch.h"

#include "SpellDeck.h"//need a place for players to set their own decks
#include "Engine.h"//remove after printing out for debugging is finished
BeginMatchState::BeginMatchState(TArray<APlayerControllerMatch*> pcs)
{
	playerControllers = pcs;
}

BeginMatchState::~BeginMatchState()
{
}

void BeginMatchState::WhenActive()
{
	//determine players initiative
	//draw players starting hands
		//potentially later determine mulligans
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BeginMatchState::WhenActive"));

	for (auto player : playerControllers)
	{
		if (!player->getSpellDeck()->isValid())
			player->ChooseDeck(1);//initialize their deck to ExampleDeck1
		player->ShuffleSpellDeck();
		player->DrawStartingHand();
		
	}

}

void BeginMatchState::WhenPopped()
{

}