// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomSpringArmComponent.h"

void UCustomSpringArmComponent::UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag, float DeltaTime)
{
	USpringArmComponent::UpdateDesiredArmLocation(bDoTrace, bDoLocationLag, bDoRotationLag, DeltaTime);
	currentLength = (RelativeSocketLocation - (GetComponentLocation() + TargetOffset)).Size();
}


