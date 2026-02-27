// Fill out your copyright notice in the Description page of Project Settings.


#include "NatureGameInstance.h"


float UNatureGameInstance::GetSteppedDeltaTime() const
{
	return AccumulatedTime;
}

void UNatureGameInstance::Tick(float DeltaTime)
{
	AccumulatedTime += DeltaTime;

	if (AccumulatedTime >= StepInterval)
	{
		OnSteppedTick.Broadcast(AccumulatedTime);
		AccumulatedTime = 0.0f;
	}
}
