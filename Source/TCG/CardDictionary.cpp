// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "CardDictionary.h"
#include "GameEvent.h"
#include "ActionCard.h"

//include all events for cards
#include "ExampleEvent.h"

UCardDictionary::UCardDictionary()
{
	 
	/*this makes one card.*/
	cardName = FString(TEXT("ExampleCard"));
	args.Add(4);
	eventType = new ExampleEvent();
	newEvent = NewObject<UGameEvent>();
	newEvent->setArgs(args);	
	newEvent->setEventType(eventType);
	newCardEvents.Add(newEvent);

	args.Empty();

	newCard = NewObject<UActionCard>();
	newCard->setCardActions(newCardEvents);
	newCard->setCardName(cardName);
	cardDictionary.Add(cardName, newCard);

	
	newCardEvents.Empty();

	/*end 1st card*/
}

UCardDictionary::~UCardDictionary()
{

}

TMap<FString,UActionCard*> UCardDictionary::getCardDictionary()
{
	return cardDictionary;
}

UActionCard* UCardDictionary::findCard(FString cardName_p)
{
	return cardDictionary[cardName_p];
}