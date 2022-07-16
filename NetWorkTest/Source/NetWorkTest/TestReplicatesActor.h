// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestReplicatesActor.generated.h"

UCLASS()
class NETWORKTEST_API ATestReplicatesActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestReplicatesActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// variables
	UPROPERTY(Replicated,VisibleAnywhere)
	float Health = 10.f;
};
