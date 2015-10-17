// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "DeckSelectionHelper.generated.h"

/**
 * 
 */
class UCardDictionary;
class ASpellDeck;
UCLASS()
class TCG_API UDeckSelectionHelper : public UObject
{
	
	GENERATED_BODY()

		public:
			static void getExampleDeckOne(UCardDictionary*,ASpellDeck*);
			static void getExampleDeckTwo(UCardDictionary*, ASpellDeck*);
			static void getExampleDeckThree(UCardDictionary*, ASpellDeck*);

	
};
