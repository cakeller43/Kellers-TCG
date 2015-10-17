// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "CardDictionary.generated.h"


/**
 * 
 */
class UGameEvent;
class EventType;
class UActionCard;

UCLASS()
class TCG_API UCardDictionary : public UObject
{
	GENERATED_BODY()
		FString cardName;
		UActionCard* newCard;
		UGameEvent* newEvent;
		TArray<UGameEvent*> newCardEvents;
			TArray<int32> args;
			EventType* eventType;
		TMap<FString,UActionCard*> cardDictionary;
	public:
		UCardDictionary();
		~UCardDictionary();

		TMap<FString,UActionCard*> getCardDictionary();

		UActionCard* findCard(FString);
	
};
