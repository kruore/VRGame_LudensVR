// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "TP_Enemy_Type01_AniInstance.generated.h"

/**
 * 
 */
UCLASS()
class LUDENSVR_PROJECT_01_API UTP_Enemy_Type01_AniInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UTP_Enemy_Type01_AniInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds)override;

	void PlayAttack();

	void SetDeadAnim() { IsDead = true; }
private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = true))
	float CurrentPawnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = true))
	bool IsDead;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = true))
	bool IsDead_Neck;
	
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category = Attack,Meta = (AllowPrivateAccess = true))
	UAnimMontage* AttackMontage;
	
	
};
