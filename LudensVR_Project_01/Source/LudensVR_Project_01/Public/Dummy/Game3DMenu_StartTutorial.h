//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Game3DMenu_StartTutorial.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API AGame3DMenu_StartTutorial : public AActor
{
	GENERATED_BODY()
	
		class UStaticMeshComponent* ST_Mesh;
public:	
	// Sets default values for this actor's properties
	AGame3DMenu_StartTutorial();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	class UTextRenderComponent* _text;
	
	/*UFUNCTION()
		void OnMeuHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);*/
};
