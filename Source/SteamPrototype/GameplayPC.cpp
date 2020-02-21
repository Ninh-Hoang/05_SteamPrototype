// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayPC.h"
#include "FiringComponent.h"

AGameplayPC::AGameplayPC() {
	PrimaryActorTick.bCanEverTick = true;
}

void AGameplayPC::BeginPlay(){
	Super::BeginPlay();
	//FiringComponent = GetPawn()->FindComponentByClass<UFiringComponent>();
}