//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "LV_WP_Pistol_Type01.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Particles/ParticleSystemComponent.h"
#include "GM_Sounds.h"

// Sets default values
ALV_WP_Pistol_Type01::ALV_WP_Pistol_Type01() : LV_WP_PistolClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_Pistol(TEXT("SkeletalMesh'/Game/SciFi_Weapons/Game/Weapons/Pistol/Mesh/Pistol'"));
	//static ConstructorHelpers::FObjectFinder<UAnimMontage> FireAnimMontage(TEXT("/Game/SciFi_Weapons/Game/Weapons/Pistol/Animations/Pistol/Pistol_Montage.Pistol_Montage"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> FireAnimSeq(TEXT("AnimSequence'/Game/SciFi_Weapons/Game/Weapons/Pistol/Animations/Pistol/Pistol_Fire.Pistol_Fire'"));

	LV_WeaponClass::weapon_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("pistolMesh"));
	LV_WP_PistolClass::muzzlePoint = CreateDefaultSubobject<USceneComponent>(TEXT("muzzlePoint"));
	LV_WP_PistolClass::ejectPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ejectPoint"));

	RootComponent = LV_WP_PistolClass::weapon_Mesh;

	if (SK_Pistol.Succeeded())
	{
		LV_WeaponClass::weapon_Mesh->SetSkeletalMesh(SK_Pistol.Object);
	}

	LV_WP_PistolClass::pistolShotAnimSequence = FireAnimSeq.Object;

	LV_WeaponClass::weapon_Mesh->SetCollisionProfileName("Weapons");
	LV_WeaponClass::weapon_Mesh->SetSimulatePhysics(true);
	LV_WeaponClass::weapon_Mesh->SetNotifyRigidBodyCollision(true);
	LV_WeaponClass::weapon_Mesh->SetGenerateOverlapEvents(true);

	LV_WeaponClass::weapon_Mesh->CastShadow = false;

	Tags.Add(FName("Pistol_Type01"));

	LV_WP_PistolClass::muzzlePoint->SetupAttachment(LV_WeaponClass::weapon_Mesh);
	LV_WP_PistolClass::muzzlePoint->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	LV_WP_PistolClass::muzzlePoint->SetRelativeLocation(FVector(0.0f, 23.0f, 9.0f));



	LV_WP_PistolClass::muzzleFlash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash"));
	LV_WP_PistolClass::muzzleFlash->SetupAttachment(LV_WP_PistolClass::muzzlePoint);
	LV_WP_PistolClass::muzzleFlash->SetWorldScale3D(FVector(0.3f, 0.3f, 0.3f));
	LV_WP_PistolClass::muzzleFlash->bAutoActivate = false;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/Muzzles/Particles/P_MuzzleFlash21"));
	if (ParticleAsset.Succeeded())
	{
		LV_WP_PistolClass::muzzleFlash->SetTemplate(ParticleAsset.Object);
	}


	LV_WP_PistolClass::ejectPoint->SetupAttachment(LV_WeaponClass::weapon_Mesh);
	LV_WP_PistolClass::ejectPoint->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	LV_WP_PistolClass::ejectPoint->SetRelativeLocation(FVector(0.0f, 8.0f, 9.0f));

	LV_WP_PistolClass::bulletEject = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("bulletEject"));
	LV_WP_PistolClass::bulletEject->SetupAttachment(ejectPoint);
	LV_WP_PistolClass::bulletEject->SetWorldScale3D(FVector(0.4f, 0.6f, 0.6f));
	LV_WP_PistolClass::bulletEject->bAutoActivate = false;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset2(TEXT("/Game/bulletvfx/Particles/VFX_Eject_bullet"));
	if (ParticleAsset2.Succeeded())
	{
		LV_WP_PistolClass::bulletEject->SetTemplate(ParticleAsset2.Object);
	}
}

// Called when the game starts or when spawned
void ALV_WP_Pistol_Type01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALV_WP_Pistol_Type01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_WP_Pistol_Type01::PlayPistolFireAction(bool isLeft)
{
	if (isLeft)
	{
		LV_WP_PistolClass::ejectPoint->SetRelativeRotation(FRotator(-45.0f, 0.0f, -45.0f));
	}
	else
	{
		LV_WP_PistolClass::ejectPoint->SetRelativeRotation(FRotator(90.0f, 0.0f, -45.0f));
	}

	LV_WP_PistolClass::bulletEject->ActivateSystem(true);

	LV_WP_PistolClass::muzzleFlash->ActivateSystem(true);
	AGM_Sounds::instance->PlayFireSound();
	LV_WeaponClass::weapon_Mesh->PlayAnimation(LV_WP_PistolClass::pistolShotAnimSequence, false);
}

void ALV_WP_Pistol_Type01::Pickup_Implementation(USceneComponent* AttachTo)
{
	LV_WeaponClass::weapon_Mesh->SetSimulatePhysics(false);

	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::KeepWorld, false);
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);
}

void ALV_WP_Pistol_Type01::Drop_Implementation()
{
	LV_WeaponClass::weapon_Mesh->SetSimulatePhysics(true);

	FDetachmentTransformRules DetatchmentTransformRules(EDetachmentRule::KeepWorld, true);
	DetachFromActor(DetatchmentTransformRules);
}