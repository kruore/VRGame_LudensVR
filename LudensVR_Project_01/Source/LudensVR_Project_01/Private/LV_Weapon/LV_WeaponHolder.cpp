// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "LV_WeaponHolder.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "TP_MotionController.h"
#include "LV_PlayerHand.h"

// Sets default values
ALV_WeaponHolder::ALV_WeaponHolder()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	LeftController = nullptr;
	RightController = nullptr;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Cube(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	WeaponHolderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponHolderMesh"));

	RootComponent = WeaponHolderMesh;

	//WeaponHolderMesh->AddRelativeLocation(FVector(00.0f, 60.0f, -90.0f));
	WeaponHolderMesh->SetRelativeScale3D(FVector(1.0f, 2.0f, 0.25f));
	//WeaponHolder01->AddRelativeLocation(FVector(160.0f, 140.0f, 00.0f));
	if (SM_Cube.Succeeded())
	{
		WeaponHolderMesh->SetStaticMesh(SM_Cube.Object);
	}
	WeaponHolderMesh->bVisible = false;
	WeaponHolderMesh->SetCollisionProfileName(TEXT("WeaponHolder"));
	WeaponHolderMesh->SetGenerateOverlapEvents(true);
	WeaponHolderMesh->OnComponentBeginOverlap.AddUniqueDynamic(this, &ALV_WeaponHolder::WeaponHolderBeginsOverlap);
	WeaponHolderMesh->OnComponentEndOverlap.AddUniqueDynamic(this, &ALV_WeaponHolder::WeaponHolderEndsOverlap);
}

//ALV_WeaponHolder::ALV_WeaponHolder(ATP_MotionController* _LeftController, ATP_MotionController* _RightController) 
//{
//	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//	
//}

// Called when the game starts or when spawned
void ALV_WeaponHolder::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALV_WeaponHolder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_WeaponHolder::WeaponHolderBeginsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor == RightController) {

		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Right Hand Enters In Weapon Holder")));

		RightController->m_playerHand->isInWeaponHolder = true;
		RightController->m_playerHand->currentWeaponHolder = this;
	}
	else if (OtherActor == LeftController) {

		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Left Hand Enters In Weapon Holder")));

		LeftController->m_playerHand->isInWeaponHolder = true;
		LeftController->m_playerHand->currentWeaponHolder = this;
	}
}

void ALV_WeaponHolder::WeaponHolderEndsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == RightController) {

		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Right Hand Gets Out Weapon Holder")));

		RightController->m_playerHand->isInWeaponHolder = false;
		RightController->m_playerHand->currentWeaponHolder = nullptr;
	}
	else if (OtherActor == LeftController) {

		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Left Hand Enters In Weapon Holder")));

		LeftController->m_playerHand->isInWeaponHolder = false;
		LeftController->m_playerHand->currentWeaponHolder = nullptr;
	}
}

void ALV_WeaponHolder::SetHandController(class ATP_MotionController* _LeftController, class ATP_MotionController* _RightController)
{

	LeftController = _LeftController;
	RightController = _RightController;

}

void ALV_WeaponHolder::SetWeaponHolderTag(FName _tag)
{
	Tags.Add(_tag);
}