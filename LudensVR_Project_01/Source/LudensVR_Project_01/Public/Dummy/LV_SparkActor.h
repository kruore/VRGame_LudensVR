// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LV_SparkActor.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_SparkActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALV_SparkActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	class UParticleSystemComponent * OurParticleSystem;
	class USceneComponent* RootScene;
};
