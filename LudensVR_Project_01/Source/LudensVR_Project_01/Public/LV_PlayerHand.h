//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LV_PlayerHand.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LUDENSVR_PROJECT_01_API ULV_PlayerHand : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULV_PlayerHand();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	class ALV_WeaponHolder* currentWeaponHolder;

	bool isInWeaponHolder;

	class ALV_WP_Pistol_Type01* grabedPistol;

	class ALV_WP_THSword_Type01* grabedSword;

	class ALV_WP_Dagger_Type01* grabedDagger;

	class UAnimSequence *pistolShotAnimSequence;
	
public:
	AActor* attachedObject;

public:
	bool GrabObject(class UMotionControllerComponent** _MotionController, class ATP_MotionController* _VR_Hand);

	bool ReleaseObject(class UMotionControllerComponent** _MotionController);
};
