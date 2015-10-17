// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#ifndef EVENTTYPE_H
#define EVENTTYPE_H

/**
 * 
 */
class TCG_API EventType
{
	bool requiresPlayerInput;
public:
	EventType();
	~EventType();

	virtual bool getRequiresPlayerInput() const = 0;

	virtual void ExecuteEvent(TArray<AActor*> targets, TArray<int32> args) = 0;

	
};

#endif