// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "TP_MotionController.h"
/**
 * 
 */
class LUDENSVR_PROJECT_01_API LV_WeaponClass
{
public:
	LV_WeaponClass();
	~LV_WeaponClass();

protected:
	class USkeletalMeshComponent* weapon_Mesh = nullptr;

public:
	class ATP_MotionController* parentHand = nullptr;
};
