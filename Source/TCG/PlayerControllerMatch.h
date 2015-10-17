// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "PlayerControllerMatch.generated.h"

/**
 * 
 */
class ASpellDeck;
class APlayerHand;
class UCardDictionary;
UCLASS()
class TCG_API APlayerControllerMatch : public APlayerController
{
	GENERATED_BODY()

	ASpellDeck* spellDeck;
	APlayerHand* playerHand;
	UCardDictionary* cardDictionary;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standard Match Variables")
	int32 startingHandSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standard Match Variables")
	int32 cardsDrawnPerTurn;
		
	virtual void BeginPlay() override;	

	ASpellDeck* getSpellDeck() const;
	APlayerHand* getPlayerHand() const;	

	void setSpellDeck(ASpellDeck*);	
	void setPlayerHand(APlayerHand*);

	UFUNCTION(BlueprintCallable, Category = "Deck Selection")
		void ChooseDeck(int32 deckChoice);

	void DrawStartingHand();

	void DrawForTurn();

	void ShuffleSpellDeck();
};
