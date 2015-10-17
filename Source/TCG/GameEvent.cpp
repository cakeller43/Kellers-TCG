// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "GameEvent.h"

UGameEvent::UGameEvent()
{

}

UGameEvent::~UGameEvent()
{

}


TArray<AActor*> UGameEvent::getTargets() const
{
	return targets;
}

TArray<int32> UGameEvent::getArgs() const
{
	return args;
}

EventType* UGameEvent::getEventType() const
{
	return eventType;
}

void UGameEvent::setTargets(TArray<AActor*> targets_p)
{
	targets = targets_p;
}

void UGameEvent::setArgs(TArray<int32> args_p)
{
	args = args_p;
}

void UGameEvent::setEventType(EventType* eventType_p)
{
	eventType = eventType_p;
}

