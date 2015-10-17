// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "DeckSelectionHelper.h"
#include "SpellDeck.h"
#include "CardDictionary.h"
#include "TCGGameMode.h"

void UDeckSelectionHelper::getExampleDeckOne(UCardDictionary* cardDictionary , ASpellDeck* spellDeck)
{

	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
}
void UDeckSelectionHelper::getExampleDeckTwo(UCardDictionary* cardDictionary, ASpellDeck* spellDeck)
{
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
}
void UDeckSelectionHelper::getExampleDeckThree(UCardDictionary* cardDictionary, ASpellDeck* spellDeck)
{
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
	spellDeck->PutOnTop(cardDictionary->findCard(FString(TEXT("ExampleCard"))));
}