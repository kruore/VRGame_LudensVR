// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "Task_Detect.h"
#include "TP_Enemy_Type01_Controller.h"
#include "TP_VirtualRealityPawn_Motion.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TP_Enemy_Type01.h"
#include "NavigationSystem.h"
#include "DrawDebugHelpers.h"





UTask_Detect::UTask_Detect()
{
	NodeName = TEXT("PlayerDetect");
	Interval = 1.0f;
}
void UTask_Detect::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (nullptr == ControllingPawn)return;

	UWorld* World = ControllingPawn->GetWorld();
	FVector Center = ControllingPawn->GetActorLocation();
	float DetectRadius = 1300.0f;

	if (nullptr == World)return;
	TArray<FOverlapResult> OverlapResults;
	FCollisionQueryParams CollisionQueryParam(NAME_None, false, ControllingPawn);
	bool bResult = World->OverlapMultiByChannel(
		OverlapResults,
		Center,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel12,
		FCollisionShape::MakeSphere(DetectRadius),
		CollisionQueryParam
	);
	if (bResult)
	{
		for (auto OverlapResult : OverlapResults)
		{
			ATP_VirtualRealityPawn_Motion* ABCharacter = Cast<ATP_VirtualRealityPawn_Motion>(OverlapResult.GetActor());
			if (ABCharacter) {
				OwnerComp.GetBlackboardComponent()->SetValueAsObject(ATP_Enemy_Type01_Controller::PlayerPosKey, ABCharacter);
				return;
			}
		}
	}
	else {
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(ATP_Enemy_Type01_Controller::PlayerPosKey, nullptr);
	}
	//DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f);
}
