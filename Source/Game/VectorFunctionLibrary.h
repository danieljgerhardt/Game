// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VectorFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GAME_API UVectorFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category="Vector Math")
	static float getDistance(const FVector a, const FVector b);

	UFUNCTION(BlueprintPure, Category = "Vector Math")
	static FVector getPointAtLookDistance(const FVector lookDirection, const FVector lookLocation, const float holderToObjectDistance, const FVector objectLocation);
	
};
