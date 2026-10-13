// Fill out your copyright notice in the Description page of Project Settings.


#include "EsCharacterBase.h"

// Sets default values
AEsCharacterBase::AEsCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEsCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEsCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEsCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

