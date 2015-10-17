// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "PlayerHand.generated.h"

class UActionCard;
UCLASS()
class TCG_API APlayerHand : public AActor
{
	GENERATED_BODY()

	TArray<UActionCard*> playerHand;
public:	
	// Sets default values for this actor's properties
	APlayerHand();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	TArray<UActionCard*> getPlayerHand() const;
	
	void setPlayerHand(TArray<UActionCard*>);

	void AddToPlayerHand(TArray<UActionCard*>);

	void RemoveFromPlayerHand(int32 index);
};
