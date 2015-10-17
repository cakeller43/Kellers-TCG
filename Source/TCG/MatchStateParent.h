// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class TCG_API MatchStateParent
{
public:
	MatchStateParent();
	~MatchStateParent();

	virtual void WhenActive() = 0;

	virtual void WhenPopped() = 0;
};
