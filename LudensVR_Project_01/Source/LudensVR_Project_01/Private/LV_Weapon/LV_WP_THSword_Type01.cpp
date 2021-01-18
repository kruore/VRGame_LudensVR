// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "LV_WP_THSword_Type01.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "TP_Enemy_Type01.h"
#include "TP_MotionController.h"
#include "Particles/ParticleSystemComponent.h"
#include "LV_SparkActor.h"
#include "GM_Sounds.h"

// Sets default values
ALV_WP_THSword_Type01::ALV_WP_THSword_Type01() : LV_WP_SwordClass()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Sword_Type01(TEXT("/Game/Sci-fi_Swords_Pack_1/SM_Sci-fi_Frozen_Sword_Sword"));

	LV_WP_SwordClass::weapon_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("weapon_Mesh"));

	RootComponent = LV_WP_SwordClass::weapon_Mesh;

	if (SM_Sword_Type01.Succeeded())
	{
		LV_WP_SwordClass::weapon_Mesh->SetStaticMesh(SM_Sword_Type01.Object);
	}

	Tags.Add(FName("Sword_Type01"));

	LV_WP_SwordClass::weapon_Mesh->SetWorldScale3D(FVector(0.75f, 0.75f, 0.75f));

	LV_WP_SwordClass::weapon_Mesh->SetCollisionProfileName(TEXT("Weapons"));
	LV_WP_SwordClass::weapon_Mesh->SetGenerateOverlapEvents(true);
	LV_WP_SwordClass::weapon_Mesh->OnComponentBeginOverlap.AddUniqueDynamic(this, &ALV_WP_THSword_Type01::SwordBeginsOverlap);
	LV_WP_SwordClass::weapon_Mesh->OnComponentEndOverlap.AddUniqueDynamic(this, &ALV_WP_THSword_Type01::SwordEndsOverlap);

	LV_WeaponClass::parentHand = nullptr;
}

// Called when the game starts or when spawned
void ALV_WP_THSword_Type01::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALV_WP_THSword_Type01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_WP_THSword_Type01::Pickup_Implementation(USceneComponent* AttachTo)
{
	LV_WP_SwordClass::weapon_Mesh->SetSimulatePhysics(false);

	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::KeepWorld, false);
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);
}

void ALV_WP_THSword_Type01::Drop_Implementation()
{
	LV_WP_SwordClass::weapon_Mesh->SetSimulatePhysics(true);

	FDetachmentTransformRules DetatchmentTransformRules(EDetachmentRule::KeepWorld, true);
	DetachFromActor(DetatchmentTransformRules);
}

void ALV_WP_THSword_Type01::SwordBeginsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (LV_WeaponClass::parentHand != nullptr) {
		LV_WeaponClass::parentHand->RumbleController(1.0f);

		AGM_Sounds::instance->PlaySoundByIndex(2);

		//if (SweepResult.IsValidBlockingHit()) {
		//	ALV_SparkActor* sparkParticle = (ALV_SparkActor*)GetWorld()->SpawnActor(ALV_SparkActor::StaticClass());
		//	sparkParticle->SetActorLocation(SweepResult.Location);
		//}
	}
}

void ALV_WP_THSword_Type01::SwordEndsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}