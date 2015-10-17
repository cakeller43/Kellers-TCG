// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "SpellDeck.h"
#include "ActionCard.h"

// Sets default values
ASpellDeck::ASpellDeck()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpellDeck::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpellDeck::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

TArray<UActionCard*> ASpellDeck::getSpellDeck() const
{
	return spellDeck;
}

UActionCard* ASpellDeck::Draw()
{
	return spellDeck.Pop();
}

TArray<UActionCard*> ASpellDeck::DrawX(int32 numToDraw_p)
{
	TArray<UActionCard*> drawnCards;
	for (int32 i = 0; i < numToDraw_p; i++)
	{
		drawnCards.Add(spellDeck.Pop());
	}
	return drawnCards;
}

void ASpellDeck::Shuffle()
{
	int64 DateInSeconds = FDateTime::Now().ToUnixTimestamp();
	FRandomStream SRand = FRandomStream();
	SRand.Initialize(DateInSeconds);

	int32 j;

	for (int32 i = spellDeck.Num() - 1; i > 0; i--)
	{
		j = FMath::FloorToInt(SRand.FRand()*(i + 1));
		UActionCard* temp = spellDeck[i];
		spellDeck[i] = spellDeck[j];
		spellDeck[j] = temp;
	}
}

TArray<UActionCard*> ASpellDeck::PeekX(int32 numToSee_p) const
{
	TArray<UActionCard*> peekedCards;
	while (spellDeck.Num() < numToSee_p)
	{
		numToSee_p--;
	}
	for (int32 i = 0; i < numToSee_p; i++)
	{
		peekedCards.Add(spellDeck.Last(i));
	}
	return peekedCards;
}

void ASpellDeck::PutOnTop(UActionCard* cardToPut_p)
{
	spellDeck.Push(cardToPut_p);
}

void ASpellDeck::PutOnTop(TArray<UActionCard*> cardsToPut_p)
{
	for (auto card : cardsToPut_p)
	{
		spellDeck.Push(cardsToPut_p.Pop());
	}
}

bool ASpellDeck::isValid() const
{

	if (spellDeck.Num() < 1)//need to get this number from GameMode when it is finished.
		return false;
	return true;
}