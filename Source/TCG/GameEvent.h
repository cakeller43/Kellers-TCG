// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UObject.h"
#include "GameEvent.generated.h"

/**
 * 
 */
class EventType;
UCLASS()
class TCG_API UGameEvent : public UObject
{
	GENERATED_BODY()

	TArray<AActor*> targets;
	TArray<int32> args;
	EventType* eventType;
public:
	UGameEvent();
	~UGameEvent();

	TArray<AActor*> getTargets() const;
	TArray<int32> getArgs() const;
	EventType* getEventType() const;
	void setTargets(TArray<AActor*>);
	void setArgs(TArray<int32>);
	void setEventType(EventType*);
	
};
