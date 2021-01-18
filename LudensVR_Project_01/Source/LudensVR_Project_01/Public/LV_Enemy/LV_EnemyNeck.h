// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LV_EnemyNeck.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_EnemyNeck : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALV_EnemyNeck();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* NeckOverlapVolume;

protected:
	UFUNCTION()
		void NeckBeginsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	
public:
	class ATP_Enemy_Type01* Parent01;
	class ATP_Enemy_Type02* Parent02;
};
