// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "LV_TutorialTriggers.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "GM_Tutorial.h"


// Sets default values
ALV_TutorialTriggers::ALV_TutorialTriggers()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapVolume"));
	RootComponent = OverlapVolume;

	OverlapVolume->SetCollisionProfileName(TEXT("TutorialTrigger"));
	OverlapVolume->SetGenerateOverlapEvents(true);
	OverlapVolume->OnComponentBeginOverlap.AddUniqueDynamic(this, &ALV_TutorialTriggers::TriggerBoxBeginsOverlap);
	OverlapVolume->OnComponentEndOverlap.AddUniqueDynamic(this, &ALV_TutorialTriggers::TriggerBoxEndsOverlap);
}

// Called when the game starts or when spawned
void ALV_TutorialTriggers::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALV_TutorialTriggers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_TutorialTriggers::TriggerBoxBeginsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	if (OtherActor == (AActor*)MyCharacter)
	{
		AGM_Tutorial::instance->SetTutorialPhase(triggerTagNum);

	}
}

void ALV_TutorialTriggers::TriggerBoxEndsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	if (OtherActor == (AActor*)MyCharacter)
	{

	}
}

