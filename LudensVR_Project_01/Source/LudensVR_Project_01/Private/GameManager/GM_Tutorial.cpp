// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "GM_Tutorial.h"
#include "Kismet/GameplayStatics.h"
#include "GM_LevelLoading.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "TP_VirtualRealityPawn_Motion.h"
#include "TimerManager.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "LV_GuideHighLightActor.h"
#include "LV_GuideArrowActor.h"

AGM_Tutorial* AGM_Tutorial::instance = nullptr;

// Sets default values
AGM_Tutorial::AGM_Tutorial()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	instance = this;

	TriggerTags.Add(FName("Enable_WeaponHolder_Waist"));
	TriggerTags.Add(FName("Enable_WeaponHolder_Shoulder"));

	/*Highlight_Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash"));
	Highlight_Particle->AddRelativeLocation(FVector(-15.0f, 50.0f, 30.0f));
	Highlight_Particle->SetWorldScale3D(FVector(0.4f, 0.4f, 0.4f));

	Highlight_Particle->bAutoActivate = false;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StylisedCombatFX/Particles/P_Highlight_Ring"));
	if (ParticleAsset.Succeeded())
	{
		Highlight_Particle->SetTemplate(ParticleAsset.Object);
	}*/
}

// Called when the game starts or when spawned
void AGM_Tutorial::BeginPlay()
{
	Super::BeginPlay();
	
	Highlight_Particle = (ALV_GuideHighLightActor*)GetWorld()->SpawnActor(ALV_GuideHighLightActor::StaticClass());
	Highlight_Particle1 = (ALV_GuideHighLightActor*)GetWorld()->SpawnActor(ALV_GuideHighLightActor::StaticClass());
	Highlight_Particle2 = (ALV_GuideHighLightActor*)GetWorld()->SpawnActor(ALV_GuideHighLightActor::StaticClass());

	arrowActor1 = (ALV_GuideArrowActor*)GetWorld()->SpawnActor(ALV_GuideArrowActor::StaticClass());
	arrowActor2 = (ALV_GuideArrowActor*)GetWorld()->SpawnActor(ALV_GuideArrowActor::StaticClass());
	arrowActor3 = (ALV_GuideArrowActor*)GetWorld()->SpawnActor(ALV_GuideArrowActor::StaticClass());

	GetWorldTimerManager().SetTimer(HighlightThumbTimerHandle, this, &AGM_Tutorial::StartHighlightThumb, 1.0f, false, 2.0f);
}

// Called every frame
void AGM_Tutorial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGM_Tutorial::SetTutorialPhase(int _tagNum)
{
	switch (_tagNum)
	{
	case 0:
		Enable_WeaponHolder_Waist = true;
		StopHighlightThumb();
		GetWorldTimerManager().SetTimer(HighlightThumbTimerHandle, this, &AGM_Tutorial::StartHighlight_WH_PIstol, 1.0f, false, 1.0f);
		break;
	case 1:
		Enable_WeaponHolder_shoulder = true;
		StopHighlight_WH_PIstol();
		GetWorldTimerManager().SetTimer(HighlightThumbTimerHandle, this, &AGM_Tutorial::StartHighlight_WH_Sword, 1.0f, false, 1.0f);
		break;
	case 2:
		AGM_LevelLoading::instance->OnHit_Lobby_3DMenu(FName("Game Lobby"));
		break;
	case 3:
		StopHighlight_WH_Sword();
		break;

	default:
		break;
	}
}

void AGM_Tutorial::StartHighlightThumb()
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	Cast<ATP_VirtualRealityPawn_Motion>(MyCharacter)->HighlightLeftThumb(true, Highlight_Particle);

	//for (size_t i = 0; i < 10; i++)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Left Hand Enters In Weapon Holder")));
	//}
}

void AGM_Tutorial::StopHighlightThumb()
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	Cast<ATP_VirtualRealityPawn_Motion>(MyCharacter)->HighlightLeftThumb(false, Highlight_Particle);
}

void AGM_Tutorial::StartHighlight_WH_PIstol()
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	Cast<ATP_VirtualRealityPawn_Motion>(MyCharacter)->Highlight_WH_Pistol(true, Highlight_Particle1, Highlight_Particle2, arrowActor1, arrowActor2);
}

void AGM_Tutorial::StopHighlight_WH_PIstol()
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	Cast<ATP_VirtualRealityPawn_Motion>(MyCharacter)->Highlight_WH_Pistol(false, Highlight_Particle1, Highlight_Particle2, arrowActor1, arrowActor2);
}

void AGM_Tutorial::StartHighlight_WH_Sword()
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	Cast<ATP_VirtualRealityPawn_Motion>(MyCharacter)->Highlight_WH_Sword(true, Highlight_Particle, arrowActor3);
}

void AGM_Tutorial::StopHighlight_WH_Sword()
{
	APawn* MyCharacter = UGameplayStatics::GetPlayerPawn(this, 0);
	Cast<ATP_VirtualRealityPawn_Motion>(MyCharacter)->Highlight_WH_Sword(false, Highlight_Particle, arrowActor3);
}