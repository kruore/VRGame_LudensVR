//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================
#include "Game3DMenu_StartTutorial.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Components/TextRenderComponent.h"
#include "GM_LevelLoading.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

// Sets default values
AGame3DMenu_StartTutorial::AGame3DMenu_StartTutorial()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Pickup(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Pickup(TEXT("/Game/StarterContent/Shapes/Shape_Plane"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_LV_Normal_GUI(TEXT("/Game/LudensVR/Mesh/LV_Normal_GUI"));

	ST_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));
	ST_Mesh->SetWorldScale3D(FVector(0.7f, 2.0f, 1.0f));
	ST_Mesh->AddWorldRotation(FRotator(-90.0f, 0.0f, 0.0f));


	RootComponent = ST_Mesh;
	//SG_Mesh->SetRelativeScale3D(FVector(0.1f, 2.0f, 2.0f));


	if (SM_LV_Normal_GUI.Succeeded())
	{
		ST_Mesh->SetStaticMesh(SM_LV_Normal_GUI.Object);
	}

	ST_Mesh->SetCollisionProfileName(TEXT("Game3DMenu"));
	Tags.Add(FName("Start Tutorial"));

	_text = CreateDefaultSubobject<UTextRenderComponent>("TextComponent");
	_text->SetTextRenderColor(FColor::White);
	_text->SetText("Start Tutorial");
	_text->SetupAttachment(RootComponent);
	_text->SetWorldScale3D(FVector(1.3f, 1.3f, 1.3f));
	_text->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	_text->AddRelativeLocation(FVector(22.0f, 43.0f, 1.0f));

	//ST_Mesh->SetGenerateOverlapEvents(true);
	//ST_Mesh->OnComponentBeginOverlap.AddUniqueDynamic(this, &AGame3DMenu_StartTutorial::OnMeuHit);

}

// Called when the game starts or when spawned
void AGame3DMenu_StartTutorial::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGame3DMenu_StartTutorial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void AGame3DMenu_StartTutorial::OnMeuHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
//{
//	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" 999999999999999999999999!")));
//	ALevelLoadManagement::instance->LoadNextLevel(TEXT("/Game/LudensVR/Maps/TestMaps/Map01"));
//}