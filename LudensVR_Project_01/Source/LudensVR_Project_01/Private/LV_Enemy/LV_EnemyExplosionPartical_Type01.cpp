// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "LV_EnemyExplosionPartical_Type01.h"
#include "Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SceneComponent.h"

// Sets default values
ALV_EnemyExplosionPartical_Type01::ALV_EnemyExplosionPartical_Type01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("muzzlePoint"));
	ParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SparkParticle"));
	RootComponent = RootScene;

	ParticleEffect->SetupAttachment(RootScene);
	//OurParticleSystem->bAutoActivate = false;
	//OurParticleSystem->SetRelativeLocation(FVector(-20.0f, 0.0f, 20.0f));
	ParticleEffect->SetWorldScale3D(FVector(0.6f, 0.3f, 0.3f));

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/Portals/Particles/P_Portal6.P_Portal6'"));
	if (ParticleAsset.Succeeded())
	{
		ParticleEffect->SetTemplate(ParticleAsset.Object);
	}

}

// Called when the game starts or when spawned
void ALV_EnemyExplosionPartical_Type01::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(1.0f);
	
}

// Called every frame
void ALV_EnemyExplosionPartical_Type01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

