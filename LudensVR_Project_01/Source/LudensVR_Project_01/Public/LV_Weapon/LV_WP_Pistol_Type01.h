//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LV_WP_PistolClass.h"
#include "TP_InteractionInterface.h"
#include "LV_WP_Pistol_Type01.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_WP_Pistol_Type01 : public AActor, public LV_WP_PistolClass, public ITP_InteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALV_WP_Pistol_Type01();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void PlayPistolFireAction(bool isLeft);

public:
	virtual void Pickup_Implementation(class USceneComponent* AttachTo);

	virtual void Drop_Implementation();
	
	
};
