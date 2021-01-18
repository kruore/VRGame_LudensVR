//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "LV_WP_Dagger_Type01.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "TP_MotionController.h"
#include "GM_Sounds.h"

// Sets default values
ALV_WP_Dagger_Type01::ALV_WP_Dagger_Type01() : LV_WP_SwordClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Dagger_Type01(TEXT("/Game/Assassin_Speed_Blade/SM_Assassin_Speed_Blade_Small"));

	LV_WP_SwordClass::weapon_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("weapon_Mesh"));

	RootComponent = LV_WP_SwordClass::weapon_Mesh;

	if (SM_Dagger_Type01.Succeeded())
	{
		LV_WP_SwordClass::weapon_Mesh->SetStaticMesh(SM_Dagger_Type01.Object);
	}

	Tags.Add(FName("Dagger_Type01"));

	LV_WP_SwordClass::weapon_Mesh->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));

	LV_WP_SwordClass::weapon_Mesh->SetCollisionProfileName(TEXT("Weapons"));
	LV_WP_SwordClass::weapon_Mesh->SetGenerateOverlapEvents(true);
	LV_WP_SwordClass::weapon_Mesh->OnComponentBeginOverlap.AddUniqueDynamic(this, &ALV_WP_Dagger_Type01::SwordBeginsOverlap);
	LV_WP_SwordClass::weapon_Mesh->OnComponentEndOverlap.AddUniqueDynamic(this, &ALV_WP_Dagger_Type01::SwordEndsOverlap);

	LV_WeaponClass::parentHand = nullptr;
}

// Called when the game starts or when spawned
void ALV_WP_Dagger_Type01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALV_WP_Dagger_Type01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_WP_Dagger_Type01::Pickup_Implementation(USceneComponent* AttachTo)
{
	LV_WP_SwordClass::weapon_Mesh->SetSimulatePhysics(false);

	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::KeepWorld, false);
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);
}

void ALV_WP_Dagger_Type01::Drop_Implementation()
{
	LV_WP_SwordClass::weapon_Mesh->SetSimulatePhysics(true);

	FDetachmentTransformRules DetatchmentTransformRules(EDetachmentRule::KeepWorld, true);
	DetachFromActor(DetatchmentTransformRules);
}

void ALV_WP_Dagger_Type01::SwordBeginsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (LV_WeaponClass::parentHand != nullptr) {
		LV_WeaponClass::parentHand->RumbleController(1.0f);

		AGM_Sounds::instance->PlaySoundByIndex(2);

	}
}

void ALV_WP_Dagger_Type01::SwordEndsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}