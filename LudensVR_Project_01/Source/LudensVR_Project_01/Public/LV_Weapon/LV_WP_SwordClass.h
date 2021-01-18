// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "LV_WeaponClass.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
/**
 * 
 */
class LUDENSVR_PROJECT_01_API LV_WP_SwordClass : public LV_WeaponClass
{
public:
	LV_WP_SwordClass();
	~LV_WP_SwordClass();

public:
	class UStaticMeshComponent* weapon_Mesh;
};
