// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyEnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class VRACTIONPROJECT_API AMyEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "PerceptionExtended")
		void GetHeadLocRot(FVector& OutLocation, FRotator& OutRotation) const;

	virtual void GetActorEyesViewPoint(FVector& out_Location, FRotator& out_Rotation) const override;
	
};
