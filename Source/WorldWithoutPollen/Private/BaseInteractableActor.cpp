// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseInteractableActor.h"

#include "InteractionInterface.h"

#include "Components/SphereComponent.h"


// Sets default values
ABaseInteractableActor::ABaseInteractableActor() : Name("DefaultName")
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	BoxCollider->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ABaseInteractableActor::BeginOverlap);


}

// Called when the game starts or when spawned
void ABaseInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseInteractableActor::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr) 
	{
		//UE_LOG(LogTemp, Warning, TEXT("Hit Actor"));

		if (OtherActor->Implements<UInteractionInterface>())
		{
			IInteractionInterface::Execute_Open(OtherActor, this, true);
		}
	}
}

