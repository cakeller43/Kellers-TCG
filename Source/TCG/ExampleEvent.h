// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#ifndef EXAMPLEEVENT_H
#define EXAMPLEEVENT_H

#include "EventType.h"
/**
 * 
 */
class TCG_API ExampleEvent : public EventType
{
	bool requiresPlayerInput;
public:
	ExampleEvent();
	~ExampleEvent();
	bool getRequiresPlayerInput() const override;
	void ExecuteEvent(TArray<AActor*>, TArray<int32>) override;
};

#endif