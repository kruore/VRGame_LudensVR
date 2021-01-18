// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "Decorator_IsAttackRange.h"
#include "TP_Enemy_Type01_Controller.h"
#include "TP_VirtualRealityPawn_Motion.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"

UDecorator_IsAttackRange::UDecorator_IsAttackRange()
{
	NodeName = TEXT("CanAttack");
}
bool UDecorator_IsAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent & OwnerComp, uint8* NodeMemory)const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (nullptr == ControllingPawn)
		return false;

	auto PlayerPos = Cast<ATP_VirtualRealityPawn_Motion>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(ATP_Enemy_Type01_Controller::PlayerPosKey));
	if (nullptr == PlayerPos)
		return false;

	bResult = (PlayerPos->GetDistanceTo(ControllingPawn) <= 200.f);
	return bResult;

}



