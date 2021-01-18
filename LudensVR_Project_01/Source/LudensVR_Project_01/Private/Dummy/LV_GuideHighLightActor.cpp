// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "LV_GuideHighLightActor.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ALV_GuideHighLightActor::ALV_GuideHighLightActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Highlight_Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Highlight_Particle"));
	RootComponent = Highlight_Particle;
	//Highlight_Particle->AddRelativeLocation(FVector(-15.0f, 50.0f, 30.0f));
	Highlight_Particle->SetWorldScale3D(FVector(0.4f, 0.4f, 0.4f));

	Highlight_Particle->bAutoActivate = false;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StylisedCombatFX/Particles/P_Highlight_Ring"));
	if (ParticleAsset.Succeeded())
	{
		Highlight_Particle->SetTemplate(ParticleAsset.Object);
	}

	Highlight_Particle02 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Highlight_Particle02"));
	Highlight_Particle02->SetupAttachment(RootComponent);
	//Highlight_Particle02->AddRelativeLocation(FVector(-15.0f, 50.0f, 30.0f));
	Highlight_Particle02->SetWorldScale3D(FVector(0.8f, 0.8f, 0.8f));

	Highlight_Particle02->bAutoActivate = false;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset02(TEXT("/Game/LudensVR/Particle/P_Highlight1"));
	if (ParticleAsset.Succeeded())
	{
		Highlight_Particle02->SetTemplate(ParticleAsset02.Object);
	}
}

// Called when the game starts or when spawned
void ALV_GuideHighLightActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALV_GuideHighLightActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

