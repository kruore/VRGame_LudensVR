// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GM_Tutorial.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API AGM_Tutorial : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGM_Tutorial();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	static AGM_Tutorial* instance;

public:
	bool Enable_WeaponHolder_Waist = false;
	bool Enable_WeaponHolder_shoulder = false;

public:
	TArray<FName> TriggerTags;
	void SetTutorialPhase(int _tagNum);

private:
	//class UParticleSystemComponent * Highlight_Particle;
	class ALV_GuideHighLightActor* Highlight_Particle;
	class ALV_GuideHighLightActor* Highlight_Particle1;
	class ALV_GuideHighLightActor* Highlight_Particle2;
	FTimerHandle HighlightThumbTimerHandle;

public:
	void StartHighlightThumb();
	void StopHighlightThumb();

	void StartHighlight_WH_PIstol();
	void StopHighlight_WH_PIstol();

	void StartHighlight_WH_Sword();
	void StopHighlight_WH_Sword();

private:
	class ALV_GuideArrowActor* arrowActor1 = nullptr;
	class ALV_GuideArrowActor* arrowActor2 = nullptr;
	class ALV_GuideArrowActor* arrowActor3 = nullptr;
};
