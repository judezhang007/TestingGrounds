// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorPool.h"

// Sets default values
UActorPool::UActorPool()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;

}


AActor* UActorPool::Checkout()
{
	return nullptr;
}

void UActorPool::Return(AActor* ActorToReturn)
{

}

void UActorPool::Add(AActor* ActorToAdd)
{

}
