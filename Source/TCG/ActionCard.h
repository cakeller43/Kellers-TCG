// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject.h"
#include "ActionCard.generated.h"

class UGameEvent;

UCLASS()
class TCG_API UActionCard : public UObject
{
	GENERATED_BODY()
	
	FString cardName;
	TArray<UGameEvent*> cardActions;
public:	
	// Sets default values for this actor's properties
	UActionCard();
	~UActionCard();

	FString getCardName() const;

	void setCardActions(TArray<UGameEvent*>);
	void setCardName(FString);
	
	void CastCard();
	
};
