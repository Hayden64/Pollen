// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "BaseInteractableActor.generated.h"

UCLASS()
class WORLDWITHOUTPOLLEN_API ABaseInteractableActor : public AActor
{
	GENERATED_BODY()

	// Collision Box
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* BoxCollider;
	
public:	
	// Sets default values for this actor's properties
	ABaseInteractableActor();

	// Andy showing me what the Catagory bit dones in the code 
	// Dont need it but useful to look at to remind myself
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterProperties|Name")
	FString Name;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Begin Overlap Event
	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult);

	
	

};
