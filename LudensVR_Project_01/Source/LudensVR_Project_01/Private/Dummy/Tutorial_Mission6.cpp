#include "Tutorial_Mission6.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Components/TextRenderComponent.h"



// Sets default values
ATutorial_Mission6::ATutorial_Mission6()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_LV_Normal_GUISTONE(TEXT("StaticMesh'/Game/Sci_fi_laboratory/Meshes/SM_ceiling_01.SM_ceiling_01'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_LV_Normal_GUI(TEXT("/Game/LudensVR/Mesh/LV_Normal_GUI"));


	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));
	Mesh->SetWorldScale3D(FVector(5.0f, 5.0f, 1.0f));
	Mesh->AddWorldRotation(FRotator(-90.0f, 0.0f, 0.0f));


	RootComponent = Mesh;


	//SG_Mesh->SetRelativeScale3D(FVector(0.1f, 2.0f, 2.0f));


	if (SM_LV_Normal_GUI.Succeeded())
	{
		Mesh->SetStaticMesh(SM_LV_Normal_GUI.Object);
	}

	BottomMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BottomMesh"));
	BottomMesh->SetWorldScale3D(FVector(0.05f, 0.25f, 1.0f));
	BottomMesh->AddWorldRotation(FRotator(0.0f, -180.0f, 0.0f));
	BottomMesh->SetupAttachment(RootComponent);
	BottomMesh->AddRelativeLocation(FVector(48.0f, 0.0f, -44.0f));

	if (SM_LV_Normal_GUISTONE.Succeeded())
	{
		BottomMesh->SetStaticMesh(SM_LV_Normal_GUISTONE.Object);
	}

	Mesh->SetCollisionProfileName(TEXT("TutorialLevel06"));
	Tags.Add(FName("Tutorial Level6"));

	_text = CreateDefaultSubobject<UTextRenderComponent>("TextComponent");
	_text->SetTextRenderColor(FColor::White);
	_text->SetText("Congratulation!\nStand in front of here!");
	_text->SetupAttachment(RootComponent);
	_text->SetWorldScale3D(FVector(1.3f, 1.3f, 1.3f));
	_text->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	_text->AddRelativeLocation(FVector(0.0f, 42.0f, 1.0f));

	//ST_Mesh->SetGenerateOverlapEvents(true);
	//ST_Mesh->OnComponentBeginOverlap.AddUniqueDynamic(this, &AGame3DMenu_StartTutorial::OnMeuHit);


}

// Called when the game starts or when spawned
void ATutorial_Mission6::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATutorial_Mission6::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}