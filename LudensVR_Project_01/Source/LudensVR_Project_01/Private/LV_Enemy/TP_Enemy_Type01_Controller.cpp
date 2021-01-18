#include "TP_Enemy_Type01_Controller.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint//AIBlueprintHelperLibrary.h"
#include "Engine/World.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"



const FName ATP_Enemy_Type01_Controller::HomePosKey(TEXT("HomePos"));
const FName ATP_Enemy_Type01_Controller::PatrolPosKey(TEXT("PatrolPos"));
const FName ATP_Enemy_Type01_Controller::PlayerPosKey(TEXT("PlayerPos"));

ATP_Enemy_Type01_Controller::ATP_Enemy_Type01_Controller() 
{
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBObject(TEXT("BlackboardData'/Game/Ai/Enemy_Type01_BB.Enemy_Type01_BB'"));
	if (BBObject.Succeeded())
	{
		BBAsset = BBObject.Object;
	}
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTObject(TEXT("BehaviorTree'/Game/Ai/Enemy_Type01_BT.Enemy_Type01_BT'"));
	if (BTObject.Succeeded())
	{
		BTAsset = BTObject.Object;
	}
}

void ATP_Enemy_Type01_Controller::Possess(APawn *InPawn)
{
	Super::Possess(InPawn);

	//폰에서 됐을떄 블랙보드 컴포넌트 사용
	if (UseBlackboard(BBAsset, Blackboard))
	{
		//그 벨류값을 홈키로 설정하고 그 값은 폰의 포지션값
		Blackboard->SetValueAsVector(HomePosKey, InPawn->GetActorLocation());
		if (!RunBehaviorTree(BTAsset))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is Couldn't run Wait!"));
		}
	}
}