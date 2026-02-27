// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NatureGameInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteppedTick, float, DeltaTime);

/**
 * 
 */
UCLASS(Blueprintable)
class NATURE_API UNatureGameInstance : public UGameInstance, public FTickableGameObject
{
	GENERATED_BODY()

public:
	
	
	UPROPERTY(BlueprintAssignable)
	FOnSteppedTick OnSteppedTick;

	float GetSteppedDeltaTime() const;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tick", meta = (AllowPrivateAccess = "true"))
	float StepInterval = 1.0f / 12.0f;
	
	float AccumulatedTime = 0.0f;
	
	virtual void Tick(float DeltaTime) override;

	
	
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;
	
};

inline bool UNatureGameInstance::IsTickable() const
{
	return true;
}

inline TStatId UNatureGameInstance::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UNatureGameInstance, STATGROUP_Tickables);
}
