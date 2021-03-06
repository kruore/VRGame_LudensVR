//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "Game3DMenu_QuitGame.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Components/TextRenderComponent.h"

// Sets default values
AGame3DMenu_QuitGame::AGame3DMenu_QuitGame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Pickup(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_LV_Normal_GUI(TEXT("/Game/LudensVR/Mesh/LV_Normal_GUI"));

	QG_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));
	QG_Mesh->SetWorldScale3D(FVector(0.7f, 2.0f, 1.0f));
	QG_Mesh->AddWorldRotation(FRotator(-90.0f, 0.0f, 0.0f));

	RootComponent = QG_Mesh;
	//QG_Mesh->SetRelativeScale3D(FVector(2.0f, 0.1f, 2.0f));

	if (SM_LV_Normal_GUI.Succeeded())
	{
		QG_Mesh->SetStaticMesh(SM_LV_Normal_GUI.Object);
	}

	QG_Mesh->SetCollisionProfileName(TEXT("Game3DMenu"));
	Tags.Add(FName("Exit Game"));

	_text = CreateDefaultSubobject<UTextRenderComponent>("TextComponent");
	_text->SetTextRenderColor(FColor::White);
	_text->SetText("Exit Game");
	_text->SetupAttachment(RootComponent);
	_text->SetWorldScale3D(FVector(1.3f, 1.3f, 1.3f));
	_text->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	_text->AddRelativeLocation(FVector(22.0f, 33.0f, 1.0f));
}

// Called when the game starts or when spawned
void AGame3DMenu_QuitGame::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGame3DMenu_QuitGame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

