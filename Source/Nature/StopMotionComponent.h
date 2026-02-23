// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StopMotionComponent.generated.h"


UCLASS(Blueprintable,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class NATURE_API UStopMotionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UStopMotionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnSteppedTick(float StepDeltaTime);
	
private:
	float StepInterval = 1.0f / 12.0f;
	float AccumulatedTime = 0.0f;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
