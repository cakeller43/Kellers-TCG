// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MatchStateParent.h"
/**
 * 
 */
class APlayerControllerMatch;
class TCG_API BeginMatchState : public MatchStateParent 
{
	TArray<APlayerControllerMatch*> playerControllers;
public:

	BeginMatchState(TArray<APlayerControllerMatch*>);
	~BeginMatchState();

	void WhenActive() override;

	void WhenPopped() override;
};
