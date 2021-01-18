//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "GM_LevelLoading.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SceneComponent.h"
#include "HAL/RunnableThread.h"
#include "LV_Thread_GameLogo.h"
#include "Engine/World.h"

AGM_LevelLoading* AGM_LevelLoading::instance = nullptr;

// Sets default values
AGM_LevelLoading::AGM_LevelLoading()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Logo01(TEXT("/Game/LudensVR/Mesh/LV_Logo"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Logo02(TEXT("/Game/LudensVR/Mesh/LV_Logo_2"));

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

	Logo_Mesh_01 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Logo_Mesh_01"));
	Logo_Mesh_01->SetWorldScale3D(FVector(3.0f, 3.0f, 1.0f));
	Logo_Mesh_01->AddWorldRotation(FRotator(0.0f, 90.0f, 90.0f));
	Logo_Mesh_01->AddWorldOffset(FVector(1000.0f, 0.0f, 100.0f));
	Logo_Mesh_01->bVisible = false;

	Logo_Mesh_02 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Logo_Mesh_02"));
	Logo_Mesh_02->SetWorldScale3D(FVector(10.0f, 3.0f, 1.0f));
	Logo_Mesh_02->AddWorldRotation(FRotator(0.0f, 90.0f, 90.0f));
	Logo_Mesh_02->AddWorldOffset(FVector(1500.0f, 0.0f, 100.0f));
	Logo_Mesh_02->bVisible = false;

	Logo_Mesh_01->SetupAttachment(RootComponent);
	Logo_Mesh_02->SetupAttachment(RootComponent);

	if (Logo01.Succeeded())
	{
		Logo_Mesh_01->SetStaticMesh(Logo01.Object);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" bbbbbbbbbbbbb!")));
	}

	if (Logo02.Succeeded())
	{
		Logo_Mesh_02->SetStaticMesh(Logo02.Object);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" bbbbbbbbbbb!")));
	}
}

// Called when the game starts or when spawned
void AGM_LevelLoading::BeginPlay()
{
	Super::BeginPlay();
	
	instance = this;
	
	LevelPath_map.Add(FName("Start Game"), FName("/Game/LudensVR/Maps/TestMaps/Map01"));
	LevelPath_map.Add(FName("Start Tutorial"), FName("/Game/ProtoLevel/ProtoLevel04_2"));
	LevelPath_map.Add(FName("Game Lobby"), FName("/Game/LudensVR/Maps/TestMaps/GameLobby"));

	Level_PIE_Name_arr.Add(FString("UEDPIE_0_GameLogo"));
	Level_PIE_Name_arr.Add(FString("UEDPIE_0_GameLobby"));
	Level_PIE_Name_arr.Add(FString("UEDPIE_0_Map01"));
	Level_PIE_Name_arr.Add(FString("UEDPIE_0_The_Avenger_VR_Lobby01"));

	//Level_PIE_Name_arr.Add(FString("GameLogo"));
	//Level_PIE_Name_arr.Add(FString("GameLobby"));
	//Level_PIE_Name_arr.Add(FString("Map01"));
	//Level_PIE_Name_arr.Add(FString("ProtoLevel04_2"));

	TheWorld = GetWorld();
	CurrentLevel = TheWorld->GetMapName();

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" aaaaaaaaaaaaaa!")));
	if (CurrentLevel == Level_PIE_Name_arr[0]) 
	{
		StartShowLogos();
	}

}

// Called every frame
void AGM_LevelLoading::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//if (!istemp) {
	//	if (totalTime > 5.0f) {
	//		istemp = true;
	//		Logo_Mesh_01->SetVisibility(true);
	//	}
	//	else {
	//		totalTime += DeltaTime;
	//	}
	//}


}

void AGM_LevelLoading::LoadNextLevel(FName _NextLevelName)
{
	//UWorld* TheWorld = GetWorld();

	//FString CurrentLevel = TheWorld->GetMapName();

	////if (CurrentLevel == "FirstPersonExampleMap_2")
	//if (CurrentLevel == "UEDPIE_0_FirstPersonExampleMap_2")
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" DDDDDDDDDDDDDDDDDD")));
	//	UGameplayStatics::OpenLevel(GetWorld(), "/Game/FirstPersonCPP/Maps/FirstPersonExampleMap_3");
	//}
	////else if (CurrentLevel == "/Game/FirstPersonCPP/Maps/FirstPersonExampleMap")
	//else if (CurrentLevel == "UEDPIE_0_FirstPersonExampleMap")
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" CCCCCCCCCCCC")));
	//	FLatentActionInfo LatentInfo;
	//	UGameplayStatics::LoadStreamLevel(this, NextLevelName, true, true, LatentInfo);
	//}


	if (_NextLevelName != "")
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" Next Level Loaded !")));
		UGameplayStatics::OpenLevel(GetWorld(), _NextLevelName);
	}
}

void AGM_LevelLoading::OnHit_Lobby_3DMenu(FName _MenuName)
{
	for (auto &LevelsNames_key : LevelPath_map)
	{
		if (LevelsNames_key.Key == _MenuName)
		{
			LoadNextLevel(LevelsNames_key.Value);
		}
	}
}

void AGM_LevelLoading::QuitGame()
{
	FGenericPlatformMisc::RequestExit(false);
}

void AGM_LevelLoading::StartShowLogos()
{

	if (CurrentThread != nullptr)
		return;

	if (!CurrentThread && FPlatformProcess::SupportsMultithreading())
	{
		m_LV_Thread_GameLogo = new LV_Thread_GameLogo(Logo_Mesh_01, Logo_Mesh_02);
		CurrentThread = FRunnableThread::Create(m_LV_Thread_GameLogo, TEXT("m_LV_Thread_GameLogo"));;
	}
}

bool AGM_LevelLoading::CheckCurrentLevel(int _index, bool _isSame)
{
	bool _bool = false;

	if (_isSame) 
	{
		if (CurrentLevel == Level_PIE_Name_arr[_index])
		{
			_bool = true;
		}
	}
	else
	{
		if (CurrentLevel != Level_PIE_Name_arr[_index])
		{
			_bool = true;
		}
	}

	return _bool;
}