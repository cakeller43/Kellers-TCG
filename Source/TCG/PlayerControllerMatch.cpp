// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "PlayerControllerMatch.h"
#include "SpellDeck.h"
#include "ActionCard.h"
#include "PlayerHand.h"
#include "DeckSelectionHelper.h"
#include "CardDictionary.h"
#include "TCGGameMode.h"
void APlayerControllerMatch::BeginPlay()
{
	UWorld* const World = GetWorld();
	
	if (World)
	{		
		if (!spellDeck)
		{
			spellDeck = World->SpawnActor<ASpellDeck>();
		}
		if (!playerHand)
		{
			playerHand = World->SpawnActor<APlayerHand>();
		}
	}
	this->bShowMouseCursor = true;
	this->bEnableClickEvents = true;
	this->bEnableMouseOverEvents = true;
}

ASpellDeck* APlayerControllerMatch::getSpellDeck() const
{
	return spellDeck;
}

APlayerHand* APlayerControllerMatch::getPlayerHand() const
{
	return playerHand;
}

void APlayerControllerMatch::setSpellDeck(ASpellDeck* newSpellDeck_p)
{
	spellDeck = newSpellDeck_p;
}

void APlayerControllerMatch::setPlayerHand(APlayerHand* newPlayerHand_p)
{
	playerHand = newPlayerHand_p;
}

void APlayerControllerMatch::ChooseDeck(int32 deckChoice_p)
{
	UWorld* const World = GetWorld();
	if (!cardDictionary)
	{
		cardDictionary = World->GetAuthGameMode<ATCGGameMode>()->getCardDictionary();
	}

	spellDeck->getSpellDeck().Empty();
	switch (deckChoice_p)
	{
		case 1:
			UDeckSelectionHelper::getExampleDeckOne(cardDictionary,spellDeck);
			break;
		case 2:
			UDeckSelectionHelper::getExampleDeckTwo(cardDictionary,spellDeck);
			break;
		case 3:
			UDeckSelectionHelper::getExampleDeckThree(cardDictionary,spellDeck);
			break;
		default:
			//custom deck?
			break;
	}
}

void APlayerControllerMatch::DrawStartingHand()
{
	TArray<UActionCard*> drawnCards = spellDeck->DrawX(startingHandSize);
	playerHand->AddToPlayerHand(drawnCards);
}

void APlayerControllerMatch::DrawForTurn()
{
	TArray<UActionCard*> drawnCards = spellDeck->DrawX(cardsDrawnPerTurn);
	playerHand->AddToPlayerHand(drawnCards);
}

void APlayerControllerMatch::ShuffleSpellDeck()
{
	spellDeck->Shuffle();
}