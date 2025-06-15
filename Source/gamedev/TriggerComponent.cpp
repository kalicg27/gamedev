// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
	
	//UE_LOG(LogTemp, Display, TEXT("trigger component is Alive"));
	
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	//UE_LOG(LogTemp, Display, TEXT("trigger component is ticking"));

	AActor* Actor= GetAcceptableActor();
	if (Actor != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Unlocking"));
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Relocking"));
	}
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);
	for (AActor* Actor: Actors)
	{
		if (Actor->ActorHasTag(AcceptableActorTag))
		{
			return Actor;
		}
	}
	return nullptr;
}
