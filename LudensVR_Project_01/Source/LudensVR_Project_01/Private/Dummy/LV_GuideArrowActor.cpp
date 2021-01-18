// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "LV_GuideArrowActor.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ALV_GuideArrowActor::ALV_GuideArrowActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	arrow_Quad = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("arrow_Quad"));
	RootComponent = arrow_Quad;
	arrow_Quad->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_arrow_Quad_GUI(TEXT("/Game/LudensVR/Mesh/SM_Plane_01"));

	if (SM_arrow_Quad_GUI.Succeeded())
	{
		arrow_Quad->SetStaticMesh(SM_arrow_Quad_GUI.Object);
	}
}

// Called when the game starts or when spawned
void ALV_GuideArrowActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALV_GuideArrowActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

