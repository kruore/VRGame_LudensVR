//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "TP_PlayerMovableArea.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TP_VirtualRealityPawn_Motion.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

// Sets default values
ATP_PlayerMovableArea::ATP_PlayerMovableArea()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapVolume"));
	RootComponent = OverlapVolume;

	OverlapVolume->SetCollisionProfileName(TEXT("PlayerMovableArea"));
	OverlapVolume->SetGenerateOverlapEvents(true);
	OverlapVolume->OnComponentBeginOverlap.AddUniqueDynamic(this, &ATP_PlayerMovableArea::AreaBeginsOverlap);
	OverlapVolume->OnComponentEndOverlap.AddUniqueDynamic(this, &ATP_PlayerMovableArea::AreaEndsOverlap);
}

// Called when the game starts or when spawned
void ATP_PlayerMovableArea::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATP_PlayerMovableArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATP_PlayerMovableArea::AreaBeginsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	if (OtherActor == (AActor*)MyCharacter)
	{
		Cast<ATP_VirtualRealityPawn_Motion>(OtherActor)->SetPlayerMovability(true, this->GetActorLocation());


	}
}

void ATP_PlayerMovableArea::AreaEndsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	if (OtherActor == (AActor*)MyCharacter)
	{
		Cast<ATP_VirtualRealityPawn_Motion>(OtherActor)->SetPlayerMovability(false, this->GetActorLocation());
	}
}

