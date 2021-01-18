// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "LV_WeaponHolder.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_WeaponHolder : public AActor
{
	GENERATED_BODY()

		class UStaticMeshComponent* WeaponHolderMesh;
public:
	// Sets default values for this actor's properties
	ALV_WeaponHolder();
	//ALV_WeaponHolder(class ATP_MotionController* _LeftController, class ATP_MotionController* _RightController);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UFUNCTION()
		void WeaponHolderBeginsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
		void WeaponHolderEndsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class ATP_MotionController* LeftController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class ATP_MotionController* RightController;

public:
	void SetHandController(class ATP_MotionController* _LeftController, class ATP_MotionController* _RightController);

public:
	void SetWeaponHolderTag(FName _tag);
};
