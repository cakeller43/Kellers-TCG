// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "PlayerHand.h"


// Sets default values
APlayerHand::APlayerHand()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerHand::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerHand::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

TArray<UActionCard*> APlayerHand::getPlayerHand() const
{
	return playerHand;
}

void APlayerHand::setPlayerHand(TArray<UActionCard*> newPlayerHand_p)
{
	playerHand = newPlayerHand_p;
}

void APlayerHand::AddToPlayerHand(TArray<UActionCard*> newCards_p)
{
	//spawn cards for player on screen here? so other players cant see them.
	for (auto card : newCards_p)
	{
		playerHand.Add(card);
	}
}

void APlayerHand::RemoveFromPlayerHand(int32 index)
{
	playerHand.RemoveAt(index);
}