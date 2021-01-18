// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree//BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "TP_Enemy_Type01_Controller.generated.h"

/**
 * 
 */
UCLASS()
class LUDENSVR_PROJECT_01_API ATP_Enemy_Type01_Controller : public AAIController
{
	GENERATED_BODY()
	
	
public:
	ATP_Enemy_Type01_Controller();
	virtual void Possess(APawn* InPawn)override;

	static const FName HomePosKey;
	static const FName PatrolPosKey;
	static const FName PlayerPosKey;

private:
	UPROPERTY()
		class UBehaviorTree* BTAsset;

	UPROPERTY()
		class UBlackboardData* BBAsset;

	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);

	
};
