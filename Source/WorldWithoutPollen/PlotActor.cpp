// Fill out your copyright notice in the Description page of Project Settings.


#include "PlotActor.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "WorldWithoutPollenCharacter.h"
#include "Engine/World.h"



// Sets default values
APlotActor::APlotActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Collision Box
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	CollisionBox->SetBoxExtent(FVector(60.f, 60.f, 60.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;
	//Static Mesh
	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	VisualMesh->SetupAttachment(RootComponent);
	 
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/LevelPrototyping/Meshes/SM_Cube"));

	if (CubeVisualAsset.Succeeded()) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Mesh Found");
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(2.0f, 2.0f, 2.0f));
		//VisualMesh->SetVisibility(false);

	}

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APlotActor::OnActorBeginOverlap);


}

// Called when the game starts or when spawned
void APlotActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlotActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlotActor::OnActorBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFronSweep, const FHitResult& SweepResult)
{

	if (AWorldWithoutPollenCharacter* OtherCharacter = Cast<AWorldWithoutPollenCharacter>(OtherActor)) {

		

	}


}

