// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameplayPC.generated.h"

/**
 * 
 */

class UFiringComponent;

UCLASS()
class STEAMPROTOTYPE_API AGameplayPC : public APlayerController
{
	GENERATED_BODY()


		AGameplayPC();
		virtual void BeginPlay() override;
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Setup")
	UFiringComponent* FiringComponent;

};


