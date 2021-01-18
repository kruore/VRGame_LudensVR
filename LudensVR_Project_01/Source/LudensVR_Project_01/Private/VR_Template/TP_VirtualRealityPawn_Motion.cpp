//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "TP_VirtualRealityPawn_Motion.h"
#include "TP_MotionController.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GameFramework/InputSettings.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "GM_LevelLoading.h"
#include "GM_Sounds.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "LV_SparkActor.h"
#include "LV_WeaponHolder.h"
#include "TP_Enemy_Type01.h"
#include "Particles/ParticleSystemComponent.h"
#include "LV_GuideHighLightActor.h"
#include "LV_GuideArrowActor.h"
#include "TP_Enemy_Type02.h"
#include "LV_Player.h"

// Sets default values
ATP_VirtualRealityPawn_Motion::ATP_VirtualRealityPawn_Motion()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//AutoPossessPlayer = EAutoReceiveInput::Player0;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Cube(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	// Create Components Initialize
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	CameraBase = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	VRCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	VRCameraBase = CreateDefaultSubobject<USceneComponent>(TEXT("VRCameraBase"));
	Highlight_TR = CreateDefaultSubobject<USceneComponent>(TEXT("Highlight_TR"));
	m_player = CreateDefaultSubobject<ULV_Player>(TEXT("Player"));


	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	CapsuleComponent->InitCapsuleSize(55.f, 10.0f);

	RootComponent = RootScene;
	CapsuleComponent->SetupAttachment(RootComponent);
	CameraBase->SetupAttachment(RootComponent);
	VRCamera->SetupAttachment(CameraBase);
	VRCameraBase->SetupAttachment(RootComponent);
	Highlight_TR->SetupAttachment(RootComponent);
	CapsuleComponent->SetCollisionProfileName(TEXT("VRPawn"));

	CapsuleComponent->SetGenerateOverlapEvents(true);

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	FadeOutDuration = 0.1f;
	FadeInDuration = 0.2f;
	bIsTeleporting = false;
	TeleportFadeColor = FColor::Black;
	ThumbDeadzone = 0.7f;
	bRightStickDown = false;
	bLeftStickDown = false;
	DefaultPlayerHeight = 180.0f;
	bUseControllerRollToRotate = false;


	isMovable = false;
}

// Called when the game starts or when spawned
void ATP_VirtualRealityPawn_Motion::BeginPlay()
{
	Super::BeginPlay();


	// Setup Player Height for various Platforms (PS4, Vive, Oculus)
	FName DeviceName = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();

	if (DeviceName == "SteamVR" || DeviceName == "OculusHMD")
	{
		// Windows (Oculus / Vive)
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
	}
	else
	{
		// PS4
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);
		CameraBase->AddLocalOffset(FVector(0.0f, 0.0f, DefaultPlayerHeight));

		// Force Enable. PS Move lacks thumbstick input, this option lets user adjust pawn orientation during teleport using controller Roll motion.
		bUseControllerRollToRotate = true;
	}

	// Spawn and attach both motion controllers

	const FTransform SpawnTransform = FTransform(FRotator(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f)); // = FTransform::Identity;
	FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);

	// "Hand" is available by checking "Expose on Spawn" in the variable on BP_MotionController.
	//  Expose on Spawn Variable parameter setup in c++ -> Use SpawnActorDeferred
	LeftController = GetWorld()->SpawnActorDeferred<ATP_MotionController>(ATP_MotionController::StaticClass(), SpawnTransform, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	if (LeftController)
	{
		// ...setstuff here..then finish spawn..
		LeftController->Hand = EControllerHand::Left;
		LeftController->FinishSpawning(SpawnTransform); // UGameplayStatics::FinishSpawningActor(LeftController, SpawnTransform);
		LeftController->AttachToComponent(CameraBase, AttachRules);
	}

	RightController = GetWorld()->SpawnActorDeferred<ATP_MotionController>(ATP_MotionController::StaticClass(), SpawnTransform, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	if (RightController)
	{
		RightController->Hand = EControllerHand::Right;
		RightController->FinishSpawning(SpawnTransform);
		RightController->AttachToComponent(CameraBase, AttachRules);
	}

	m_player->Init_WeaponHolder(&VRCameraBase, &LeftController, &RightController);
}

// Called every frame
void ATP_VirtualRealityPawn_Motion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator rotTemp = VRCamera->GetComponentRotation();
	rotTemp.Pitch = 0.0f; rotTemp.Roll = 0.0f;
	VRCameraBase->SetWorldLocationAndRotation(VRCamera->GetComponentLocation(), rotTemp);
	Highlight_TR->SetWorldLocation(VRCamera->GetComponentLocation());

#pragma region Teleportation
	//float MotionController_Left_Thumbstick_X = InputComponent->GetAxisValue(TEXT("MotionControllerThumbLeft_X")); // = UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerInput->GetKeyValue(EKeys::MotionController_Left_Thumbstick_X);
	//float MotionController_Left_Thumbstick_Y = InputComponent->GetAxisValue(TEXT("MotionControllerThumbLeft_Y")); // = UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerInput->GetKeyValue(EKeys::MotionController_Left_Thumbstick_Y);
	//float MotionController_Right_Thumbstick_X = InputComponent->GetAxisValue(TEXT("MotionControllerThumbRight_X")); // = UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerInput->GetKeyValue(EKeys::MotionController_Right_Thumbstick_X);
	//float MotionController_Right_Thumbstick_Y = InputComponent->GetAxisValue(TEXT("MotionControllerThumbRight_Y")); // = UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerInput->GetKeyValue(EKeys::MotionController_Right_Thumbstick_Y);

	//																												// Left Hand Teleport Rotation
	//if (LeftController->GetIsTeleporterActive())
	//{
	//	FRotator LeftTeleportRotation = GetRotationFromInput(MotionController_Left_Thumbstick_Y, MotionController_Left_Thumbstick_X, LeftController);
	//	LeftController->SetTeleportRotation(LeftTeleportRotation);
	//}

	//// Right Hand Teleport Rotation
	//if (RightController->GetIsTeleporterActive())
	//{
	//	FRotator RightTeleportRotation = GetRotationFromInput(MotionController_Right_Thumbstick_Y, MotionController_Right_Thumbstick_X, RightController);
	//	RightController->SetTeleportRotation(RightTeleportRotation);
	//}
#pragma endregion


}

// Called to bind functionality to input
void ATP_VirtualRealityPawn_Motion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("RayCast_Left", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::PerformRaycast_Left);
	PlayerInputComponent->BindAction("RayCast_Right", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::PerformRaycast_Right);

	// Bind Recenter VR events
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::OnResetVR);

	// Bind Grab events
	PlayerInputComponent->BindAction("GrabLeft", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::GrabActor_Left);
	PlayerInputComponent->BindAction("GrabLeft", IE_Released, this, &ATP_VirtualRealityPawn_Motion::ReleaseActor_Left);
	PlayerInputComponent->BindAction("GrabRight", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::GrabActor_Right);
	PlayerInputComponent->BindAction("GrabRight", IE_Released, this, &ATP_VirtualRealityPawn_Motion::ReleaseActor_Right);

	// Bind Teleport events
	//PlayerInputComponent->BindAction("TeleportLeft", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::TeleportPressed_Left);
	//PlayerInputComponent->BindAction("TeleportLeft", IE_Released, this, &ATP_VirtualRealityPawn_Motion::TeleportReleased_Left);
	//PlayerInputComponent->BindAction("TeleportRight", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::TeleportPressed_Right);
	//PlayerInputComponent->BindAction("TeleportRight", IE_Released, this, &ATP_VirtualRealityPawn_Motion::TeleportReleased_Right);


	PlayerInputComponent->BindAction("Walking", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::StartWalking);
	PlayerInputComponent->BindAction("Walking", IE_Released, this, &ATP_VirtualRealityPawn_Motion::StopWalking);
	PlayerInputComponent->BindAxis("MoveForward", this, &ATP_VirtualRealityPawn_Motion::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATP_VirtualRealityPawn_Motion::MoveRight);

	PlayerInputComponent->BindAction("TempESC", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::TempESC);
}

void ATP_VirtualRealityPawn_Motion::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ATP_VirtualRealityPawn_Motion::GrabActor_Left()
{
	LeftController->GrabActor();
}

void ATP_VirtualRealityPawn_Motion::ReleaseActor_Left()
{
	LeftController->ReleaseActor();
}

void ATP_VirtualRealityPawn_Motion::GrabActor_Right()
{
	RightController->GrabActor();
}

void ATP_VirtualRealityPawn_Motion::ReleaseActor_Right()
{
	RightController->ReleaseActor();
}

void ATP_VirtualRealityPawn_Motion::TeleportPressed_Left()
{
	LeftController->ActivateTeleporter();
	RightController->DisableTeleporter();
}

void ATP_VirtualRealityPawn_Motion::TeleportReleased_Left()
{
	if (LeftController->GetIsTeleporterActive())
	{
		ExecuteTeleportation(LeftController);
	}
}

void ATP_VirtualRealityPawn_Motion::TeleportPressed_Right()
{
	RightController->ActivateTeleporter();
	LeftController->DisableTeleporter();
}

void ATP_VirtualRealityPawn_Motion::TeleportReleased_Right()
{
	if (RightController->GetIsTeleporterActive())
	{
		ExecuteTeleportation(RightController);
	}
}

FRotator ATP_VirtualRealityPawn_Motion::GetRotationFromInput(float UpAxis, float RightAxis, ATP_MotionController* MotionController)
{
	// Use PSVR method (lacking thumbstick) or the Desktop implementation with thumbstick support.
	if (bUseControllerRollToRotate)
	{
		// Get Roll difference since we initiated the teleport. (Allows Wrist to change the pawn orientation when teleporting)
		FTransform InitialControllerTransform = FTransform(MotionController->GetInitialControllerRotation(), FVector(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f));
		FTransform ConvertTransformResult = UKismetMathLibrary::ConvertTransformToRelative(InitialControllerTransform, MotionController->GetMotionController()->GetComponentTransform());

		// Multiply to make 180 spins of orientation much easier.
		float ConvertTransRotationRoll = ConvertTransformResult.Rotator().Roll * 3;

		// Add current rotation to the controller adjustment
		float ActorYaw = GetActorRotation().Yaw;

		// Roll of controller gets converted to Yaw for pawn orientation.
		return FRotator(0.0f, ConvertTransRotationRoll + ActorYaw, 0.0f);
	}
	else
	{
		// Rotate input X+Y to always point forward relative to the current pawn rotation.
		FVector InputCenterNormal = UKismetMathLibrary::Normal(FVector(UpAxis, RightAxis, 0.0f));
		FVector InputNormalRotateResult = FRotator(0.0f, GetActorRotation().Yaw, 0.0f).RotateVector(InputCenterNormal);
		FRotator InputRotXResult = UKismetMathLibrary::MakeRotFromX(InputNormalRotateResult);

		// Check whether thumb is near center (to ignore rotation overrides)
		// ThumbDeadzone : Adjust this value to narrow the 'deadzone' center
		bool bCheckThumbNearCenter = (UKismetMathLibrary::Abs(UpAxis) + UKismetMathLibrary::Abs(RightAxis)) >= ThumbDeadzone;

		// Select the rotation created by thumbpad input or use current pawn rotation
		// GetActorRotation() : Use Default rotation if thumb is near center of the pad
		return UKismetMathLibrary::SelectRotator(InputRotXResult, GetActorRotation(), bCheckThumbNearCenter);
	}
}

// Handle Teleportation
void ATP_VirtualRealityPawn_Motion::ExecuteTeleportation(ATP_MotionController* MotionController)
{
	if (!bIsTeleporting)
	{
		if (MotionController->GetIsValidTeleportDestination())
		{
			bIsTeleporting = true;
			UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraFade(0.0f, 1.0f, FadeOutDuration, TeleportFadeColor, false, true);
			FTimerDelegate FadeDelegate;// = FTimerDelegate::CreateUObject(this, &ATP_VirtualRealityPawn_Motion::TeleportActor, MotionController);
			FadeDelegate.BindUFunction(this, FName("TeleportActor"), MotionController);
			GetWorldTimerManager().SetTimer(FadeTimerHandle, FadeDelegate, FadeOutDuration, false);
		}
		else
		{
			MotionController->DisableTeleporter();
		}
	}
}

void ATP_VirtualRealityPawn_Motion::TeleportActor(ATP_MotionController* MotionController)
{
	MotionController->DisableTeleporter();

	FVector DestLocation;
	FRotator DestRotation;
	MotionController->GetTeleportDestination(DestLocation, DestRotation);

	TeleportTo(DestLocation, DestRotation);

	UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraFade(1.0f, 0.0f, FadeInDuration, TeleportFadeColor, false, false);

	bIsTeleporting = false;
	GetWorldTimerManager().ClearTimer(FadeTimerHandle);
}

//-------------------------------------

void ATP_VirtualRealityPawn_Motion::MoveForward(float value)
{
	#pragma region Legacy
		//GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Red, FString::Printf(TEXT("MoveForward")));
	//if (Val != 0.0f)
	//{
	//	// add movement in that direction
	//	AddMovementInput(GetActorForwardVector(), Val);
	//}

	//float MotionController_Left_Thumbstick_Y = InputComponent->GetAxisValue(TEXT("MotionControllerThumbLeft_Y"));
	//AddMovementInput(GetActorForwardVector(), MotionController_Left_Thumbstick_Y);

	//AddActorWorldOffset(GetActorForwardVector() * value * playerMovementSpeed);

	//AddActorWorldOffset(VRCamera->GetForwardVector() * value * playerMovementSpeed);

	//if (CurrentLevel != "UEDPIE_0_GameLobby") //PIE
	//if (CurrentLevel != "GameLobby")

		/*if (AGM_LevelLoading::instance->CheckCurrentLevel(0, false) || AGM_LevelLoading::instance->CheckCurrentLevel(1, false))
	{
		FVector tempV;
		if (isMovable)
		{
			tempV = VRCamera->GetForwardVector();
			tempV.Z = 0.0f;
			AddActorWorldOffset(tempV * value * playerMovementSpeed);
		}
		else
		{
			FVector Distance = AreaCenterPos - VRCameraBase->GetComponentLocation();
			float TempDot = FVector::DotProduct(VRCameraBase->GetForwardVector(), Distance.GetSafeNormal());

			if (TempDot > 0 && value > 0)
			{
				tempV = VRCamera->GetForwardVector();
				tempV.Z = 0.0f;
				AddActorWorldOffset(tempV * value * playerMovementSpeed);
			}
			else if (TempDot > 0 && value < 0)
			{

			}
			else if (TempDot < 0 && value < 0)
			{
				tempV = VRCamera->GetForwardVector();
				tempV.Z = 0.0f;
				AddActorWorldOffset(tempV * value * playerMovementSpeed);
			}
			else if (TempDot < 0 && value > 0)
			{

			}
		}
	}*/

	#pragma endregion

	if (AGM_LevelLoading::instance->CheckCurrentLevel(0, false) || AGM_LevelLoading::instance->CheckCurrentLevel(1, false))
	{
		AddActorWorldOffset(m_player->Move_XY(isMovable, value, VRCamera->GetForwardVector(), VRCameraBase->GetForwardVector(), (AreaCenterPos - VRCameraBase->GetComponentLocation())));
	}

}

void ATP_VirtualRealityPawn_Motion::MoveRight(float value)
{
	if (AGM_LevelLoading::instance->CheckCurrentLevel(0, false) || AGM_LevelLoading::instance->CheckCurrentLevel(1, false))
	{
		AddActorWorldOffset(m_player->Move_XY(isMovable, value, VRCamera->GetRightVector(), VRCameraBase->GetRightVector(), (AreaCenterPos - VRCameraBase->GetComponentLocation())));
	}
}

void ATP_VirtualRealityPawn_Motion::PerformRaycast_Left()
{
	m_player->Perform_Raycast(true, LeftController);
}

void ATP_VirtualRealityPawn_Motion::PerformRaycast_Right()
{
	m_player->Perform_Raycast(false, RightController);
}

void ATP_VirtualRealityPawn_Motion::TempESC()
{
	AGM_LevelLoading::instance->QuitGame();
}

void ATP_VirtualRealityPawn_Motion::SetPlayerMovability(bool _isMovable, FVector _AreaCenterPos)
{
	AreaCenterPos = _AreaCenterPos;

	if (_isMovable)
	{
		currentAreaCount++;
	}
	else
	{
		currentAreaCount--;
	}

	if (currentAreaCount > 0)
	{
		isMovable = true;
	}
	else
	{
		isMovable = false;
	}
}

void ATP_VirtualRealityPawn_Motion::StartWalking()
{
	if (AGM_LevelLoading::instance->CheckCurrentLevel(3, true) || AGM_LevelLoading::instance->CheckCurrentLevel(2, true))
	{
		AGM_Sounds::instance->PlaySoundByIndex(5);
	}
}

void ATP_VirtualRealityPawn_Motion::StopWalking()
{
	if (AGM_LevelLoading::instance->CheckCurrentLevel(3, true) || AGM_LevelLoading::instance->CheckCurrentLevel(2, true))
	{
		AGM_Sounds::instance->StopSoundByIndex(5);
	}
}



//Temporary Code(for 201812 GGC Temp Tutorial Mode)

void ATP_VirtualRealityPawn_Motion::HighlightLeftThumb(bool _bool, class ALV_GuideHighLightActor * _Highlight_Particle)
{
	if (_bool) 
	{
		_Highlight_Particle->AttachToComponent(LeftController->ThumbPoint, FAttachmentTransformRules::KeepRelativeTransform);
		_Highlight_Particle->SetActorLocation(LeftController->ThumbPoint->GetComponentLocation());
		_Highlight_Particle->AddActorLocalOffset(FVector(0.0f, 0.0f, 0.0f));
		//Highlight_Particle->SetWorldLocation(LeftController->ThumbPoint->GetComponentLocation());
		//_Highlight_Particle->SetActorLocation(LeftController->ThumbPoint->GetComponentLocation());
		_Highlight_Particle->Highlight_Particle->ActivateSystem(true);
	}
	else 
	{
		_Highlight_Particle->Highlight_Particle->Deactivate();
	}
}

void ATP_VirtualRealityPawn_Motion::Highlight_WH_Pistol(bool _bool, class ALV_GuideHighLightActor * _Highlight_Particle1, class ALV_GuideHighLightActor * _Highlight_Particle2, class ALV_GuideArrowActor* _arrowActor1, class ALV_GuideArrowActor* _arrowActor2)
{
	if (_bool)
	{
		_Highlight_Particle1->AttachToComponent(Highlight_TR, FAttachmentTransformRules::KeepRelativeTransform);
		_Highlight_Particle1->SetActorLocation(Highlight_TR->GetComponentLocation());
		_Highlight_Particle1->AddActorLocalOffset(FVector(0.0f, -120.0f, -90.0f));
		_Highlight_Particle1->AddActorLocalOffset(FVector(10.0f, 80.0f, 20.0f));
		_Highlight_Particle1->Highlight_Particle02->ActivateSystem(true);

		_arrowActor1->AttachToComponent(Highlight_TR, FAttachmentTransformRules::KeepRelativeTransform);
		_arrowActor1->SetActorLocation(_Highlight_Particle1->GetActorLocation());
		_arrowActor1->AddActorLocalOffset(FVector(10.0f, 20.0f, 40.0f));
		_arrowActor1->AddActorLocalRotation(FRotator(140.0f, 45.0f, 0.0f));


		_Highlight_Particle2->AttachToComponent(Highlight_TR, FAttachmentTransformRules::KeepRelativeTransform);
		_Highlight_Particle2->SetActorLocation(Highlight_TR->GetComponentLocation());
		_Highlight_Particle2->AddActorLocalOffset(FVector(0.0f, 120.0f, -90.0f));
		_Highlight_Particle2->AddActorLocalOffset(FVector(10.0f, -80.0f, 20.0f));
		_Highlight_Particle2->Highlight_Particle02->ActivateSystem(true);

		_arrowActor2->AttachToComponent(Highlight_TR, FAttachmentTransformRules::KeepRelativeTransform);
		_arrowActor2->SetActorLocation(_Highlight_Particle2->GetActorLocation());
		_arrowActor2->AddActorLocalOffset(FVector(10.0f, -20.0f, 40.0f));
		_arrowActor2->AddActorLocalRotation(FRotator(220.0f, 135.0f, 0.0f));
	}
	else
	{
		_Highlight_Particle1->Highlight_Particle02->Deactivate();
		_Highlight_Particle2->Highlight_Particle02->Deactivate();
		_arrowActor1->arrow_Quad->bVisible = false;
		_arrowActor2->arrow_Quad->bVisible = false;

	}
}

void ATP_VirtualRealityPawn_Motion::Highlight_WH_Sword(bool _bool, class ALV_GuideHighLightActor * _Highlight_Particle1, class ALV_GuideArrowActor* _arrowActor3)
{
	if (_bool)
	{
		_Highlight_Particle1->AttachToComponent(Highlight_TR, FAttachmentTransformRules::KeepRelativeTransform);

		_Highlight_Particle1->SetActorLocation(Highlight_TR->GetComponentLocation());
		_Highlight_Particle1->AddActorLocalOffset(FVector(-20.0f, 120.0f, 0.0f));
		_Highlight_Particle1->AddActorLocalOffset(FVector(15.0f, -100.0f, -10.0f));
		_Highlight_Particle1->Highlight_Particle02->ActivateSystem(true);

		_arrowActor3->AttachToComponent(Highlight_TR, FAttachmentTransformRules::KeepRelativeTransform);
		_arrowActor3->SetActorLocation(_Highlight_Particle1->GetActorLocation());
		_arrowActor3->AddActorLocalOffset(FVector(30.0f, 10.0f, 0.0f));
		_arrowActor3->AddActorLocalRotation(FRotator(45.0f, 160.0f, 0.0f));
	}
	else
	{
		_Highlight_Particle1->Highlight_Particle02->Deactivate();
		_arrowActor3->arrow_Quad->bVisible = false;
	}
}