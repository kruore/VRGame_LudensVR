//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "GM_LevelLoading.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API AGM_LevelLoading : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AGM_LevelLoading();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	TMap<FName, FName> LevelPath_map;
	TArray<FString> Level_PIE_Name_arr;
	
public:
	UFUNCTION(BlueprintCallable, Category = "LevelLoadManagement")
		void LoadNextLevel(FName _NextLevelName);

	UFUNCTION(BlueprintCallable, Category = "LevelLoadManagement")
		void QuitGame();

	void OnHit_Lobby_3DMenu(FName _MenuName);

	//float totalTime = 0.0f;
	//bool istemp = false;

public:
	static AGM_LevelLoading* instance;

public:
	class UStaticMeshComponent* Logo_Mesh_01;
	class UStaticMeshComponent* Logo_Mesh_02;

private:
	class USceneComponent* RootScene;

private:
	class LV_Thread_GameLogo* m_LV_Thread_GameLogo = nullptr;
	FRunnableThread* CurrentThread = nullptr;

	class UWorld* TheWorld;
	FString CurrentLevel;

	void StartShowLogos();

public:
	bool CheckCurrentLevel(int _index, bool _isSame);

};
