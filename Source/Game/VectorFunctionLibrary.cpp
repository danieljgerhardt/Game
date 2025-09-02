// Fill out your copyright notice in the Description page of Project Settings.


#include "VectorFunctionLibrary.h"

float UVectorFunctionLibrary::getDistance(const FVector a, const FVector b)
{
	return (a - b).Length();
}

FVector UVectorFunctionLibrary::getPointAtLookDistance(const FVector lookDirection, const FVector lookLocation, const float holderToObjectDistance, const FVector objectLocation)
{
	FVector desiredPosition = lookDirection * holderToObjectDistance + lookLocation;
	FVector movementDirection = (desiredPosition - objectLocation);
	float movementDistance = movementDirection.Length();
	movementDirection.Normalize();
	FVector scaledNewLocation = movementDirection * movementDistance * 0.1f + objectLocation;
	
	return scaledNewLocation;
}
