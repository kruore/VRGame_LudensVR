//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================
#include "GM_Sounds.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "TimerManager.h"
#include "Components/AudioComponent.h"
//#include "Sound\SoundCue.h"
#include "Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

AGM_Sounds* AGM_Sounds::instance = nullptr;

// Sets default values
AGM_Sounds::AGM_Sounds()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//if(instance == nullptr)
	{
		instance = this;
	}

	static ConstructorHelpers::FObjectFinder<USoundBase> BGM_Quake_Loop_Action2(TEXT("/Game/ElectroActionMusic/Wavs/SongLoops/Stomper_Loop_Action1"));
	currentBGM = BGM_Quake_Loop_Action2.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> SMG_Fire_single(TEXT("/Game/SciFi_Weapons/Game/Sounds/Wave/SMG_Fire_Single"));
	Pistol_Type01_FireSound = SMG_Fire_single.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> SMG_SwordColl_single(TEXT("/Game/SwordSounds/07_Sword03_by_lostchocolatelab_Id_1456"));
	SwordCollisionSound = SMG_SwordColl_single.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> SMG_PickUP_Pistol_single(TEXT("/Game/SciFi_Weapons/Game/Sounds/Wave/AmmoPickup"));
	PickUp_Pistol = SMG_PickUP_Pistol_single.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> SMG_PickUP_Sword_single(TEXT("/Game/SwordSounds/Drawing_Sword_by_Mediapaja2009_Id_162560"));
	PickUp_Sword = SMG_PickUP_Sword_single.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> SMG_Player_Walking_single(TEXT("/Game/Footsteps_Ultimate/Concrete/Wav/footsteps_concrete__x12"));
	PlayerWalkingSound = SMG_Player_Walking_single.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> SMG_EnemyDead_single(TEXT("/Game/Glitch_Sound_Effects/wavs/Glitch_156_Wav"));
	EnemyDeadSound = SMG_EnemyDead_single.Object;


	CountdownTime = 1;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

	AudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("currentBGM"));
	AudioComp01 = CreateDefaultSubobject<UAudioComponent>(TEXT("Pistol_Type01_FireSound"));
	AudioComp02 = CreateDefaultSubobject<UAudioComponent>(TEXT("SwordCollisionSound"));
	AudioComp03 = CreateDefaultSubobject<UAudioComponent>(TEXT("PickUp_Pistol"));
	AudioComp04 = CreateDefaultSubobject<UAudioComponent>(TEXT("PickUp_Sword"));
	AudioComp05 = CreateDefaultSubobject<UAudioComponent>(TEXT("PlayerWalkingSound"));
	AudioComp06 = CreateDefaultSubobject<UAudioComponent>(TEXT("EnemyDeadSound"));

	RootComponent = RootScene;
	AudioComp->SetupAttachment(RootComponent);
	AudioComp->bAutoActivate = false;
	AudioComp->bStopWhenOwnerDestroyed = false;

	AudioComp01->SetupAttachment(RootComponent);
	AudioComp01->bAutoActivate = false;
	AudioComp01->bStopWhenOwnerDestroyed = false;

	AudioComp02->SetupAttachment(RootComponent);
	AudioComp02->bAutoActivate = false;
	AudioComp02->bStopWhenOwnerDestroyed = false;

	AudioComp03->SetupAttachment(RootComponent);
	AudioComp03->bAutoActivate = false;
	AudioComp03->bStopWhenOwnerDestroyed = false;

	AudioComp04->SetupAttachment(RootComponent);
	AudioComp04->bAutoActivate = false;
	AudioComp04->bStopWhenOwnerDestroyed = false;

	AudioComp05->SetupAttachment(RootComponent);
	AudioComp05->bAutoActivate = false;
	AudioComp05->bStopWhenOwnerDestroyed = false;

	AudioComp06->SetupAttachment(RootComponent);
	AudioComp06->bAutoActivate = false;
	AudioComp06->bStopWhenOwnerDestroyed = false;

}

// Called when the game starts or when spawned
void AGM_Sounds::BeginPlay()
{
	Super::BeginPlay();
	
	//PlayBackgroundMusic();

	//GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ASoundManagement::DelayPlayingSound, 1.0f, true);
	//PlaySoundByIndex(0);
}

// Called every frame
void AGM_Sounds::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (totalTime > 3.0f) {
	//	PlayBackgroundMusic();
	//}
	//else {
	//	totalTime += DeltaTime;
	//}
}

void AGM_Sounds::DelayPlayingSound() 
{
	--CountdownTime;

	if (CountdownTime == 0) 
	{
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		PlayBackgroundMusic();
	}
}

void AGM_Sounds::PlayBackgroundMusic() 
{
	//UGameplayStatics::PlaySound2D(GetWorld(), currentBGM);
	AudioComp->Activate(true);
	AudioComp->SetVolumeMultiplier(0.6);
	AudioComp->SetSound(currentBGM);
	AudioComp->Play();
}

void AGM_Sounds::PlayFireSound()
{
	//UGameplayStatics::PlaySound2D(GetWorld(), Pistol_Type01_FireSound);

	//ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	//myCharacter->GetActorLocation();
	//UGameplayStatics::PlaySoundAtLocation(this, Pistol_Type01_FireSound, GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation());
	
	AudioComp01->Activate(true);
	AudioComp01->SetSound(Pistol_Type01_FireSound);
	AudioComp01->Play();

	//AudioComp01->Activate(true);
	//AudioComp01->SetSound(Pistol_Type01_FireSound);
	//AudioComp01->Play();

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" dfdfdf!")));
}

void AGM_Sounds::PlaySoundByIndex(int _index)
{
	switch (_index)
	{
	case 0:
		AudioComp->Activate(true);
		AudioComp->SetVolumeMultiplier(0.3f);
		AudioComp->SetSound(currentBGM);
		AudioComp->Play();
		break;

	case 1:
		AudioComp01->Activate(true);
		AudioComp01->SetSound(Pistol_Type01_FireSound);
		AudioComp01->Play();
		break;

	case 2:
		AudioComp02->Activate(true);
		AudioComp02->SetSound(SwordCollisionSound);
		AudioComp02->Play();
		break;

	case 3:
		AudioComp03->Activate(true);
		AudioComp03->SetSound(PickUp_Pistol);
		AudioComp03->Play();
		break;

	case 4:
		AudioComp04->Activate(true);
		AudioComp04->SetSound(PickUp_Sword);
		AudioComp04->Play();
		break;

	case 5:
		AudioComp05->Activate(true);
		AudioComp05->SetSound(PlayerWalkingSound);
		AudioComp05->Play();
		break;

	case 6:
		AudioComp06->Activate(true);
		AudioComp06->SetSound(EnemyDeadSound);
		AudioComp06->Play();
		break;

	default:
		break;
	}
}

void AGM_Sounds::StopSoundByIndex(int _index)
{
	switch (_index)
	{
	case 0:
		
		break;

	case 1:
		
		break;

	case 2:
		
		break;

	case 3:
		
		break;

	case 4:
		
		break;

	case 5:
		AudioComp05->Stop();
		break;

	default:
		break;
	}
}