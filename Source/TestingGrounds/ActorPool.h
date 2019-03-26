// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorPool.generated.h"

UCLASS()
class TESTINGGROUNDS_API UActorPool : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UActorPool();

	AActor* Checkout();
	
	void Return(AActor* ActorToReturn);

	void Add(AActor* ActorToAdd);

};
