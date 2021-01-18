// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Decorator_IsAttackRange.generated.h"

/**
 * 
 */
UCLASS()
class LUDENSVR_PROJECT_01_API UDecorator_IsAttackRange : public UBTDecorator
{
	GENERATED_BODY()
	

public:
	UDecorator_IsAttackRange();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent & OwnerComp, uint8* NodeMemory)const override;

	
	
};
