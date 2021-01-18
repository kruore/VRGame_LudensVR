// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "LV_Thread_GameLogo.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Components/StaticMeshComponent.h"
#include "GM_LevelLoading.h"

LV_Thread_GameLogo::LV_Thread_GameLogo(UStaticMeshComponent* _Logo_Mesh_01, UStaticMeshComponent* _Logo_Mesh_02)
{
	Logo_Mesh_01 = _Logo_Mesh_01;
	Logo_Mesh_02 = _Logo_Mesh_02;

	isRunning = true;
}

LV_Thread_GameLogo::~LV_Thread_GameLogo()
{
}

uint32 LV_Thread_GameLogo::Run()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT(" gggggggggggggggggggggggggggggggggggggg!")));
	if (!isRunning)
		return 0;
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT(" ffffffffffffffffffff!")));
	FPlatformProcess::Sleep(2.5f);
	Logo_Mesh_01->SetVisibility(true);
	FPlatformProcess::Sleep(4);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT(" eeeeeeeeeeeeeeeeeeeeeeee!")));
	if (!isRunning)
		return 0;
	Logo_Mesh_01->SetVisibility(false);
	FPlatformProcess::Sleep(1);
	Logo_Mesh_02->SetVisibility(true);
	FPlatformProcess::Sleep(7);
	Logo_Mesh_02->SetVisibility(false);
	FPlatformProcess::Sleep(2.5f);
	AGM_LevelLoading::instance->LoadNextLevel(AGM_LevelLoading::instance->LevelPath_map.FindChecked(FName("Game Lobby")));

	return 0;
}

void LV_Thread_GameLogo::Stop()
{
	isRunning = false;
}

void LV_Thread_GameLogo::Exit()
{

}