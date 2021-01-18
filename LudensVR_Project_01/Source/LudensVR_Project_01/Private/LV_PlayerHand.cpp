//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "LV_PlayerHand.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "MotionControllerComponent.h"
#include "GM_LevelLoading.h"
#include "GM_Sounds.h"
#include "LV_WeaponHolder.h"
#include "LV_WP_Pistol_Type01.h"
#include "LV_WP_THSword_Type01.h"
#include "LV_WP_Dagger_Type01.h"
#include "TP_MotionController.h"

#include "Runtime/Engine/Classes/Engine/Engine.h"


// Sets default values for this component's properties
ULV_PlayerHand::ULV_PlayerHand()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UAnimSequence> FireAnimSeq(TEXT("AnimSequence'/Game/IBFPModernCivilianHands/Hands_VR/Animations/LV_MadebyCJH/LV_Right_arm_pistol_shot.LV_Right_arm_pistol_shot'"));

	isInWeaponHolder = false;
	currentWeaponHolder = nullptr;

	attachedObject = nullptr;
	grabedPistol = nullptr;
	grabedSword = nullptr;
	grabedDagger = nullptr;

	pistolShotAnimSequence = FireAnimSeq.Object;

}


// Called when the game starts
void ULV_PlayerHand::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULV_PlayerHand::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool ULV_PlayerHand::GrabObject(class UMotionControllerComponent** _MotionController, class ATP_MotionController* _VR_Hand)
{
	bool isAnyGrabedObject = false;

	if (isInWeaponHolder)
	{
		if (AGM_LevelLoading::instance->CheckCurrentLevel(3, true) || AGM_LevelLoading::instance->CheckCurrentLevel(2, true))
		{
			//if (ALV_TutorialManagement::instance && ALV_TutorialManagement::instance->Enable_WeaponHolder_Waist)
			{
				//if (currentWeaponHolder->ActorHasTag(FName("WeaponHolder_Pistol")))
				//{
				//	ALV_WP_Pistol_Type01* newPistolType01 = (ALV_WP_Pistol_Type01*)GetWorld()->SpawnActor(ALV_WP_Pistol_Type01::StaticClass());

				//	attachedObject = newPistolType01;
				//	grabedPistol = newPistolType01;

				//	attachedObject->Tags.Remove(FName("Pistol_Type01"));
				//	attachedObject->Tags.Add(FName("Grabed_Pistol_Type01"));

				//	attachedObject->SetActorLocation((*_MotionController)->GetComponentLocation());
				//	attachedObject->SetActorRotation((*_MotionController)->GetComponentRotation());
				//	attachedObject->AddActorLocalRotation(FRotator(0.0f, -90.0f, 0.0f));
				//	attachedObject->AddActorLocalOffset(FVector(0.0f, -3.0f, 1.0f));

				//	ITP_InteractionInterface::Execute_Pickup(newPistolType01, (*_MotionController));

				//	AGM_Sounds::instance->PlaySoundByIndex(3);

				//	isAnyGrabedObject = true;
				//}

				if (currentWeaponHolder->ActorHasTag(FName("WeaponHolder_Pistol")))
				{
					ALV_WP_Pistol_Type01* newPistolType01 = (ALV_WP_Pistol_Type01*)GetWorld()->SpawnActor(ALV_WP_Pistol_Type01::StaticClass());

					attachedObject = newPistolType01;
					grabedPistol = newPistolType01;

					attachedObject->Tags.Remove(FName("Pistol_Type01"));
					attachedObject->Tags.Add(FName("Grabed_Pistol_Type01"));

					attachedObject->SetActorLocation((*_MotionController)->GetComponentLocation());
					attachedObject->SetActorRotation((*_MotionController)->GetComponentRotation());
					attachedObject->AddActorLocalRotation(FRotator(0.0f, -90.0f, 0.0f));
					attachedObject->AddActorLocalOffset(FVector(0.0f, -3.0f, 1.0f));

					ITP_InteractionInterface::Execute_Pickup(newPistolType01, (*_MotionController));

					AGM_Sounds::instance->PlaySoundByIndex(3);

					isAnyGrabedObject = true;
				}
			}

			//if (ALV_TutorialManagement::instance && ALV_TutorialManagement::instance->Enable_WeaponHolder_shoulder)
			{
				if (currentWeaponHolder->ActorHasTag(FName("WeaponHolder_Sword")))
				{
					ALV_WP_THSword_Type01* newSwordType01 = (ALV_WP_THSword_Type01*)GetWorld()->SpawnActor(ALV_WP_THSword_Type01::StaticClass());

					attachedObject = newSwordType01;
					grabedSword = newSwordType01;
					Cast<ALV_WP_THSword_Type01>(grabedSword)->parentHand = (_VR_Hand);

					attachedObject->Tags.Remove(FName("Sword_Type01"));
					attachedObject->Tags.Add(FName("Grabed_Sword_Type01"));

					attachedObject->SetActorLocation((*_MotionController)->GetComponentLocation());
					attachedObject->SetActorRotation((*_MotionController)->GetComponentRotation());
					attachedObject->AddActorLocalRotation(FRotator(0.0f, 90.0f, 90.0f));
					attachedObject->AddActorLocalOffset(FVector(0.0f, -50.0f, 3.0f));

					ITP_InteractionInterface::Execute_Pickup(newSwordType01, (*_MotionController));

					AGM_Sounds::instance->PlaySoundByIndex(4);

					isAnyGrabedObject = true;
				}
			}

			if (currentWeaponHolder->ActorHasTag(FName("WeaponHolder_Dagger")))
			{
				ALV_WP_Dagger_Type01* newSwordType01 = (ALV_WP_Dagger_Type01*)GetWorld()->SpawnActor(ALV_WP_Dagger_Type01::StaticClass());

				attachedObject = newSwordType01;
				grabedDagger = newSwordType01;
				Cast<ALV_WP_Dagger_Type01>(grabedDagger)->parentHand = (_VR_Hand);

				attachedObject->Tags.Remove(FName("Dagger_Type01"));
				attachedObject->Tags.Add(FName("Grabed_Dagger_Type01"));

				attachedObject->SetActorLocation((*_MotionController)->GetComponentLocation());
				attachedObject->SetActorRotation((*_MotionController)->GetComponentRotation());
				attachedObject->AddActorLocalRotation(FRotator(0.0f, 90.0f, 90.0f));
				attachedObject->AddActorLocalOffset(FVector(0.0f, 30.0f, 3.0f));

				ITP_InteractionInterface::Execute_Pickup(newSwordType01, (*_MotionController));

				AGM_Sounds::instance->PlaySoundByIndex(4);

				isAnyGrabedObject = true;
			}
		}
	}

	return isAnyGrabedObject;
}

bool ULV_PlayerHand::ReleaseObject(class UMotionControllerComponent** _MotionController)
{
	bool isAnyReleasedObject = false;

	if (attachedObject != nullptr && attachedObject->IsValidLowLevel() && !attachedObject->IsPendingKill())
	{
		// Make sure this hand is still holding the Actor (May have been taken by another hand / event)
		if (attachedObject->GetRootComponent()->GetAttachParent() == (*_MotionController))
		{
			if (attachedObject->GetClass()->ImplementsInterface(UTP_InteractionInterface::StaticClass()))
			{
				ITP_InteractionInterface::Execute_Drop(attachedObject); // This is the Execute_* function. The asterisk means your function name. :)


				isAnyReleasedObject = true;

				// Clear the reference
				attachedObject = nullptr;
			}
		}
		else
		{
			// Clear the reference
			attachedObject = nullptr;
		}

		if (grabedPistol != nullptr)
		{
			grabedPistol->SetLifeSpan(3.0f);
			grabedPistol = nullptr;
		}

		if (grabedSword != nullptr)
		{
			Cast<ALV_WP_THSword_Type01>(grabedSword)->parentHand = nullptr;
			grabedSword->SetLifeSpan(3.0f);
			grabedSword = nullptr;

		}

		if (grabedDagger != nullptr)
		{
			Cast<ALV_WP_Dagger_Type01>(grabedDagger)->parentHand = nullptr;
			grabedDagger->SetLifeSpan(3.0f);
			grabedDagger = nullptr;

		}

	}
	

	return isAnyReleasedObject;
}