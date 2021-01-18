//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Game3DMenu_StartGame.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API AGame3DMenu_StartGame : public AActor
{
	GENERATED_BODY()
	
		class UStaticMeshComponent* SG_Mesh;
public:	
	// Sets default values for this actor's properties
	AGame3DMenu_StartGame();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//class ATextRenderActor Text;

	class UTextRenderComponent* _text;
	
};
