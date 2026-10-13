// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EsCharacterBase.generated.h"

UCLASS(Abstract)
class EXTRACTIONSHOOTERS_API AEsCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AEsCharacterBase();

protected:
	virtual void BeginPlay() override;
public:	
};
