// Fill out your copyright notice in the Description page of Project Settings.

#include "TCG.h"
#include "ExampleEvent.h"

#include "Engine.h"
ExampleEvent::ExampleEvent()
{
	//specify if targeting is necessary
	requiresPlayerInput = false;
}

ExampleEvent::~ExampleEvent()
{
}

bool ExampleEvent::getRequiresPlayerInput() const
{
	return requiresPlayerInput;
}

/*
 specify order of args values.
*/
void ExampleEvent::ExecuteEvent(TArray<AActor*> targets_p, TArray<int32> args_p)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Running Event"));
	}

}