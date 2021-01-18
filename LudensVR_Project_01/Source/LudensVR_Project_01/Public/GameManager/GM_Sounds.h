//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================
#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "GM_Sounds.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API AGM_Sounds : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGM_Sounds();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "SoundManagement")
		void PlayBackgroundMusic();

	UFUNCTION(BlueprintCallable, Category = "SoundManagement")
		void PlayFireSound();

	UFUNCTION(BlueprintCallable, Category = "SoundManagement")
		void PlaySoundByIndex(int _index);

	UFUNCTION(BlueprintCallable, Category = "SoundManagement")
		void StopSoundByIndex(int _index);
	
public:
	static AGM_Sounds* instance;

private:
	class USoundBase* currentBGM;
	class USoundBase* Pistol_Type01_FireSound;
	class USoundBase* SwordCollisionSound;
	class USoundBase* PickUp_Pistol;
	class USoundBase* PickUp_Sword;
	class USoundBase* PlayerWalkingSound;
	class USoundBase* EnemyDeadSound;

private:
	float totalTime;
	FTimerHandle CountdownTimerHandle;
	int CountdownTime;

private:
	void DelayPlayingSound();

private:
	class USceneComponent* RootScene;
	class UAudioComponent* AudioComp;
	class UAudioComponent* AudioComp01;
	class UAudioComponent* AudioComp02;
	class UAudioComponent* AudioComp03;
	class UAudioComponent* AudioComp04;
	class UAudioComponent* AudioComp05;
	class UAudioComponent* AudioComp06;
};
