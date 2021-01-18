// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "LV_WeaponClass.h"
#include "Components/SceneComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Particles/ParticleSystemComponent.h"
/**
 * 
 */
class LUDENSVR_PROJECT_01_API LV_WP_PistolClass : public LV_WeaponClass
{
public:
	LV_WP_PistolClass();
	~LV_WP_PistolClass();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USceneComponent * muzzlePoint = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USceneComponent * ejectPoint = nullptr;

protected:
	class UAnimSequence *pistolShotAnimSequence = nullptr;

	class UParticleSystemComponent * muzzleFlash = nullptr;
	class UParticleSystemComponent * bulletEject = nullptr;

public:
	virtual void PlayPistolFireAction(bool isLeft) = 0;

//public:
//	virtual void Pickup_Implementation(class USceneComponent* AttachTo) = 0;
//
//	virtual void Drop_Implementation() = 0;
};
