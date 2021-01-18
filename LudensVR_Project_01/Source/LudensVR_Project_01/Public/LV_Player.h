//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LV_Player.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LUDENSVR_PROJECT_01_API ULV_Player : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULV_Player();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float playerMovementSpeed;

public:
	class ALV_WeaponHolder* weaponHolder_Waist_Left;
	class ALV_WeaponHolder* weaponHolder_Waist_Right;
	class ALV_WeaponHolder* weaponHolder_Shoulder_Left;
	class ALV_WeaponHolder* weaponHolder_Shoulder_Right;
	class ALV_WeaponHolder* weaponHolder_Chest_Left;

public:
	void Perform_Raycast(bool _isLeftHand, class ATP_MotionController* _motionController);
	FVector Move_XY(bool _isMovable, float _value, FVector _cameraVector, FVector _cameraBaseVector, FVector _distance);
	void Init_WeaponHolder(class USceneComponent** _VRCameraBase, class ATP_MotionController** _leftController, class ATP_MotionController** _rightController);
};
