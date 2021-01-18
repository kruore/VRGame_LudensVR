//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TP_VRDataTable.h"
#include "TP_HandAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class LUDENSVR_PROJECT_01_API UTP_HandAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	UTP_HandAnimInstance();

public:

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Teleportation")
		void SetGripState(EGrip_Code GripState);

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		EGrip_Code CurrentGripState;
	
	
};
