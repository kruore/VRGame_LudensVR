// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_PlayerMovableArea.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ATP_PlayerMovableArea : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATP_PlayerMovableArea();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* OverlapVolume;

protected:
	UFUNCTION()
		void AreaBeginsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
		void AreaEndsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
