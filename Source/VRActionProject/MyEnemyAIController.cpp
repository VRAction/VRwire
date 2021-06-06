// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEnemyAIController.h"

void VRACTIONPROJECT_API AMyEnemyAIController::GetActorEyesViewPoint(FVector& out_Location, FRotator& out_Rotation) const
{
	GetHeadLocRot(out_Location, out_Rotation);
}