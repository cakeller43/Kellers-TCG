// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SpellDeck.generated.h"

class UActionCard;

UCLASS()
class TCG_API ASpellDeck : public AActor
{
	GENERATED_BODY()

	TArray<UActionCard*> spellDeck;
	 
public:	
	// Sets default values for this actor's properties
	ASpellDeck();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	TArray<UActionCard*> getSpellDeck() const;

	UActionCard* Draw();

	TArray<UActionCard*> DrawX(int32);

	void Shuffle();
	
	TArray<UActionCard*> PeekX(int32) const;	

	void PutOnTop(UActionCard*);

	void PutOnTop(TArray<UActionCard*>);

	bool isValid() const;
	
};
