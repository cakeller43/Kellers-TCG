// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "ActionCard.h"
#include "GameEvent.h"

// Sets default values
UActionCard::UActionCard()
{

}
UActionCard::~UActionCard()
{

}

FString UActionCard::getCardName() const
{
	return cardName;
}

void UActionCard::setCardActions(TArray<UGameEvent*> cardActions_p)
{
	cardActions = cardActions_p;
}

void UActionCard::setCardName(FString cardName_p)
{
	cardName = cardName_p;
}


void UActionCard::CastCard()
{
	//for each Event in cardActions assign targets from player input.
	//Event Manager.executeEvents(cardActions)
}

