// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "LV_EnemyNeck.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "TP_Enemy_Type01.h"
#include "TP_Enemy_Type02.h"

// Sets default values
ALV_EnemyNeck::ALV_EnemyNeck()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	NeckOverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("NeckOverlapVolume"));

	NeckOverlapVolume->SetCollisionProfileName(TEXT("EnemyNeck"));
	NeckOverlapVolume->SetGenerateOverlapEvents(true);
	NeckOverlapVolume->OnComponentBeginOverlap.AddUniqueDynamic(this, &ALV_EnemyNeck::NeckBeginsOverlap);

	Parent01 = nullptr;
	Parent02 = nullptr;
}

// Called when the game starts or when spawned
void ALV_EnemyNeck::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALV_EnemyNeck::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_EnemyNeck::NeckBeginsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (Parent01 != nullptr) {
		Parent01->Action_Dead();
	}

	if (Parent02 != nullptr) {
		Parent02->Action_Dead();
	}


	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, OtherActor->GetName());
}

