//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "LV_Player.h"
#include "Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "TP_MotionController.h"
#include "LV_PlayerHand.h"
#include "GM_LevelLoading.h"
#include "TP_Enemy_Type01.h"
#include "TP_Enemy_Type02.h"
#include "LV_SparkActor.h"
#include "LV_WP_Pistol_Type01.h"
#include "LV_WeaponHolder.h"


// Sets default values for this component's properties
ULV_Player::ULV_Player()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	playerMovementSpeed = 8.0f;

	weaponHolder_Waist_Left = nullptr;
	weaponHolder_Waist_Right = nullptr;
	weaponHolder_Shoulder_Left = nullptr;
	weaponHolder_Shoulder_Right = nullptr;
	weaponHolder_Chest_Left = nullptr;
}


// Called when the game starts
void ULV_Player::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void ULV_Player::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

void ULV_Player::Perform_Raycast(bool _isLeftHand, class ATP_MotionController* _motionController)
{


	if (AGM_LevelLoading::instance->CheckCurrentLevel(3, true) || AGM_LevelLoading::instance->CheckCurrentLevel(2, true))
	{
		if (_motionController->m_playerHand->attachedObject != nullptr && _motionController->m_playerHand->attachedObject->ActorHasTag(FName("Grabed_Pistol_Type01")))
		{
			FHitResult* hitResult = new FHitResult();

			USceneComponent* muzzlePoint = _motionController->m_playerHand->attachedObject->FindComponentByClass<USceneComponent>()->GetChildComponent(0);


			FVector startTracePoint = muzzlePoint->GetComponentLocation();
			FVector forwardVector = muzzlePoint->GetForwardVector();


			FVector endTracePoint((forwardVector * 5000.0f) + startTracePoint);

			FCollisionQueryParams* traceParams = new FCollisionQueryParams();

			DrawDebugLine(GetWorld(), startTracePoint, endTracePoint, FColor(250, 0, 0), true, 0.1f, 0, 0.3f);

			_motionController->m_playerHand->grabedPistol->PlayPistolFireAction(true);
			_motionController->RumbleController(0.2f);

			if (GetWorld()->LineTraceSingleByObjectType(*hitResult, startTracePoint, endTracePoint, ECC_GameTraceChannel1, *traceParams))
			{
				hitResult->GetActor()->Destroy();
			}
			else if (GetWorld()->LineTraceSingleByObjectType(*hitResult, startTracePoint, endTracePoint, ECC_GameTraceChannel4, *traceParams))
			{
				Cast<ATP_Enemy_Type01>(hitResult->GetActor())->Action_Damaged();

				if (hitResult->IsValidBlockingHit()) {
					ALV_SparkActor* sparkParticle = (ALV_SparkActor*)GetWorld()->SpawnActor(ALV_SparkActor::StaticClass());
					sparkParticle->SetActorLocation(hitResult->Location);
				}

			}

			if (GetWorld()->LineTraceSingleByObjectType(*hitResult, startTracePoint, endTracePoint, ECC_GameTraceChannel11, *traceParams))
			{

				Cast<ATP_Enemy_Type02>(hitResult->GetActor())->Action_Damaged();

				if (hitResult->IsValidBlockingHit()) {
					ALV_SparkActor* sparkParticle = (ALV_SparkActor*)GetWorld()->SpawnActor(ALV_SparkActor::StaticClass());
					sparkParticle->SetActorLocation(hitResult->Location);
				}
			}

		}
	}
	else if (AGM_LevelLoading::instance->CheckCurrentLevel(1, true))
	{
		FHitResult* hitResult = new FHitResult();

		FVector startTracePoint = _motionController->RayCastShootTR->GetComponentLocation();
		FVector forwardVector = _motionController->RayCastShootTR->GetForwardVector();

		FVector endTracePoint((forwardVector * 2000.0f) + startTracePoint);

		FCollisionQueryParams* traceParams = new FCollisionQueryParams();

		DrawDebugLine(GetWorld(), startTracePoint, endTracePoint, FColor(0, 250, 0), true, 1.0f, 0, 1.0f);

		if (GetWorld()->LineTraceSingleByObjectType(*hitResult, startTracePoint, endTracePoint, ECC_GameTraceChannel3, *traceParams))
		{
			if (hitResult->Actor->ActorHasTag(FName("Start Tutorial")))
			{
				AGM_LevelLoading::instance->OnHit_Lobby_3DMenu(hitResult->Actor->Tags[0]);
			}
			else if (hitResult->Actor->ActorHasTag(FName("Quit Game")))
			{
				AGM_LevelLoading::instance->QuitGame();
			}
			else if (hitResult->Actor->ActorHasTag(FName("Start Game")))
			{
				AGM_LevelLoading::instance->OnHit_Lobby_3DMenu(hitResult->Actor->Tags[0]);
			}
		}
	}

}

FVector ULV_Player::Move_XY(bool _isMovable, float _value, FVector _cameraVector, FVector _cameraBaseVector, FVector _distance)
{
	#pragma region Legacy
	/*if (AGM_LevelLoading::instance->CheckCurrentLevel(0, false) || AGM_LevelLoading::instance->CheckCurrentLevel(1, false))
	{
		FVector tempV;
		if (isMovable)
		{
			tempV = VRCamera->GetRightVector();
			tempV.Z = 0.0f;
			AddActorWorldOffset(tempV * value * playerMovementSpeed);
		}
		else
		{
			FVector Distance = AreaCenterPos - VRCameraBase->GetComponentLocation();
			float TempDot = FVector::DotProduct(VRCameraBase->GetRightVector(), Distance.GetSafeNormal());

			if (TempDot > 0 && value > 0)
			{
				tempV = VRCamera->GetRightVector();
				tempV.Z = 0.0f;
				AddActorWorldOffset(tempV * value * playerMovementSpeed);
			}
			else if (TempDot > 0 && value < 0)
			{

			}
			else if (TempDot < 0 && value < 0)
			{
				tempV = VRCamera->GetRightVector();
				tempV.Z = 0.0f;
				AddActorWorldOffset(tempV * value * playerMovementSpeed);
			}
			else if (TempDot < 0 && value > 0)
			{

			}
		}
	}*/
	#pragma endregion


	FVector movingDir = FVector(0.0f, 0.0f, 0.0f);

	if (AGM_LevelLoading::instance->CheckCurrentLevel(0, false) || AGM_LevelLoading::instance->CheckCurrentLevel(1, false))
	{
		if (_isMovable)
		{
			movingDir = _cameraVector;
			movingDir.Z = 0.0f;
		}
		else
		{
			float TempDot = FVector::DotProduct(_cameraBaseVector, _distance.GetSafeNormal());

			if (TempDot > 0 && _value > 0)
			{
				movingDir = _cameraVector;
				movingDir.Z = 0.0f;
			}
			else if (TempDot > 0 && _value < 0)
			{

			}
			else if (TempDot < 0 && _value < 0)
			{
				movingDir = _cameraVector;
				movingDir.Z = 0.0f;
			}
			else if (TempDot < 0 && _value > 0)
			{

			}
		}

	}

	return movingDir * _value * playerMovementSpeed;
}

void ULV_Player::Init_WeaponHolder(class USceneComponent** _VRCameraBase, class ATP_MotionController** _leftController, class ATP_MotionController** _rightController) 
{
	//FTransform weaponHolder_SpawnTransform = FTransform(FRotator(0.0f, 0.0f, 0.0f), FVector(0.0f, -60.0f, -90.0f), FVector(1.0f, 1.0f, 1.0f));
	//weaponHolder_Waist_Left = GetWorld()->SpawnActorDeferred<ALV_WeaponHolder>(ALV_WeaponHolder::StaticClass(), SpawnTransform, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

	//weaponHolder_SpawnTransform = FTransform(FRotator(0.0f, 0.0f, 0.0f), FVector(0.0f, 60.0f, -90.0f), FVector(1.0f, 1.0f, 1.0f));
	//weaponHolder_Waist_Right = GetWorld()->SpawnActorDeferred<ALV_WeaponHolder>(ALV_WeaponHolder::StaticClass(), SpawnTransform, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

	weaponHolder_Waist_Left = (ALV_WeaponHolder*)GetWorld()->SpawnActor(ALV_WeaponHolder::StaticClass());
	weaponHolder_Waist_Left->AttachToComponent((*_VRCameraBase), FAttachmentTransformRules::KeepRelativeTransform);
	weaponHolder_Waist_Left->SetActorRelativeLocation(FVector(0.0f, -120.0f, -90.0f));
	weaponHolder_Waist_Left->SetHandController((*_leftController), (*_leftController));
	weaponHolder_Waist_Left->SetWeaponHolderTag(FName("WeaponHolder_Pistol"));

	weaponHolder_Waist_Right = (ALV_WeaponHolder*)GetWorld()->SpawnActor(ALV_WeaponHolder::StaticClass());
	weaponHolder_Waist_Right->AttachToComponent((*_VRCameraBase), FAttachmentTransformRules::KeepRelativeTransform);
	weaponHolder_Waist_Right->SetActorRelativeLocation(FVector(0.0f, 120.0f, -90.0f));
	weaponHolder_Waist_Right->SetHandController((*_rightController), (*_rightController));
	weaponHolder_Waist_Right->SetWeaponHolderTag(FName("WeaponHolder_Pistol"));

	//weaponHolder_Shoulder_Left = (ALV_WeaponHolder*)GetWorld()->SpawnActor(ALV_WeaponHolder::StaticClass());
	//weaponHolder_Shoulder_Left->AttachToComponent(VRCameraBase, FAttachmentTransformRules::KeepRelativeTransform);
	//weaponHolder_Shoulder_Left->SetActorRelativeLocation(FVector(-20.0f, -120.0f, 0.0f));
	//weaponHolder_Shoulder_Left->SetHandController(LeftController, RightController);
	//weaponHolder_Shoulder_Left->SetWeaponHolderTag(FName("WeaponHolder_Sword"));

	weaponHolder_Shoulder_Right = (ALV_WeaponHolder*)GetWorld()->SpawnActor(ALV_WeaponHolder::StaticClass());
	weaponHolder_Shoulder_Right->AttachToComponent((*_VRCameraBase), FAttachmentTransformRules::KeepRelativeTransform);
	weaponHolder_Shoulder_Right->SetActorRelativeLocation(FVector(-20.0f, 120.0f, 0.0f));
	weaponHolder_Shoulder_Right->SetHandController((*_rightController), (*_rightController));
	weaponHolder_Shoulder_Right->SetWeaponHolderTag(FName("WeaponHolder_Sword"));

	weaponHolder_Chest_Left = (ALV_WeaponHolder*)GetWorld()->SpawnActor(ALV_WeaponHolder::StaticClass());
	weaponHolder_Chest_Left->AttachToComponent((*_VRCameraBase), FAttachmentTransformRules::KeepRelativeTransform);
	weaponHolder_Chest_Left->SetActorRelativeLocation(FVector(-20.0f, -70.0f, -45.0f));
	weaponHolder_Chest_Left->SetHandController((*_rightController), (*_rightController));
	weaponHolder_Chest_Left->SetWeaponHolderTag(FName("WeaponHolder_Dagger"));
}