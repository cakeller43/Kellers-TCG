// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "UObject/UObject.h"
#include "EventManager.generated.h"
/**
 * 
 */
class UGameEvent;
UCLASS()
class TCG_API UEventManager : public UObject
{
	GENERATED_BODY()
public:
	UEventManager();
	~UEventManager();

	void ExecuteEvents(TArray<UGameEvent*>);
};
