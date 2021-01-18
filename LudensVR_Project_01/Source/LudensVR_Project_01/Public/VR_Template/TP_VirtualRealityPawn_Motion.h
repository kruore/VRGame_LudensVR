//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TP_VirtualRealityPawn_Motion.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ATP_VirtualRealityPawn_Motion : public APawn
{
	GENERATED_BODY()


		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* CameraBase;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* VRCamera;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCapsuleComponent* CapsuleComponent;

public:
	// Sets default values for this pawn's properties
	ATP_VirtualRealityPawn_Motion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Resets HMD orientation and position in VR
	void OnResetVR();

	void GrabActor_Left();
	void ReleaseActor_Left();

	void GrabActor_Right();
	void ReleaseActor_Right();

	void TeleportPressed_Left();
	void TeleportReleased_Left();

	void TeleportPressed_Right();
	void TeleportReleased_Right();

	UFUNCTION()
		FRotator GetRotationFromInput(float UpAxis, float RightAxis, class ATP_MotionController* MotionController);

	UFUNCTION()
		void ExecuteTeleportation(class ATP_MotionController* MotionController);

	UFUNCTION()
		void TeleportActor(class ATP_MotionController* MotionController);

public:
	void MoveForward(float value);
	void MoveRight(float value);

	void StartWalking();
	void StopWalking();

	void PerformRaycast_Left();
	void PerformRaycast_Right();
	void TempESC();

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class ATP_MotionController* LeftController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class ATP_MotionController* RightController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		float FadeOutDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		float FadeInDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bIsTeleporting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		FLinearColor TeleportFadeColor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		float ThumbDeadzone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bRightStickDown;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bLeftStickDown;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		float DefaultPlayerHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bUseControllerRollToRotate;

	FTimerHandle FadeTimerHandle;

public:
	class USceneComponent* VRCameraBase;

private:
	bool isMovable;
	FVector AreaCenterPos;
	int currentAreaCount = 0;

public:
	void SetPlayerMovability(bool _isMovable, FVector _AreaCenterPos);

public:
	void HighlightLeftThumb(bool _bool, class ALV_GuideHighLightActor * Highlight_Particle);
	void Highlight_WH_Pistol(bool _bool, class ALV_GuideHighLightActor * _Highlight_Particle1, class ALV_GuideHighLightActor * _Highlight_Particle2, class ALV_GuideArrowActor* _arrowActor1, class ALV_GuideArrowActor* _arrowActor2);
	void Highlight_WH_Sword(bool _bool, class ALV_GuideHighLightActor * _Highlight_Particle1, class ALV_GuideArrowActor* _arrowActor3);

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Highlight_TR;

private:
	class ULV_Player* m_player;

};
