// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "LV_SparkActor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SceneComponent.h"


// Sets default values
ALV_SparkActor::ALV_SparkActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("muzzlePoint"));
	OurParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SparkParticle"));
	RootComponent = RootScene;

	OurParticleSystem->SetupAttachment(RootScene);
	//OurParticleSystem->bAutoActivate = false;
	//OurParticleSystem->SetRelativeLocation(FVector(-20.0f, 0.0f, 20.0f));
	OurParticleSystem->SetWorldScale3D(FVector(0.3f, 0.3f, 0.3f));

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/LudensVR/Particle/P_Explosion.P_Explosion"));
	if (ParticleAsset.Succeeded())
	{
		OurParticleSystem->SetTemplate(ParticleAsset.Object);
	}
}

// Called when the game starts or when spawned
void ALV_SparkActor::BeginPlay()
{
	Super::BeginPlay();

	//OurParticleSystem->ToggleActive();

	SetLifeSpan(3.0f);
}

// Called every frame
void ALV_SparkActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

