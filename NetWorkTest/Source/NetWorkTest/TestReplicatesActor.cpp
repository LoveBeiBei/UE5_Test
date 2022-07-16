// Fill out your copyright notice in the Description page of Project Settings.


#include "TestReplicatesActor.h"

#include "Net/UnrealNetwork.h"

// Sets default values
ATestReplicatesActor::ATestReplicatesActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
}

void ATestReplicatesActor::GetLifetimeReplicatedProps( TArray< class FLifetimeProperty > & OutLifetimeProps ) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ATestReplicatesActor,Health);
}

// Called when the game starts or when spawned
void ATestReplicatesActor::BeginPlay()
{
	Super::BeginPlay();
	if (HasAuthority())
	{
		Health = 500.f;
	}
}

// Called every frame
void ATestReplicatesActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (HasAuthority())
	{
		// UE_LOG(LogTemp,Warning,TEXT("Server Health:%f"),Health);
	}
	else
	{
		// UE_LOG(LogTemp,Warning,TEXT("Client Health:%f"),Health);
	}
}

