// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"

/**
 * 
 */
class LUDENSVR_PROJECT_01_API LV_Thread_GameLogo : public FRunnable
{
public:
	uint32 Run() override;
	void Stop() override;
	void Exit() override;

	bool isRunning = false;

public:
	class UStaticMeshComponent* Logo_Mesh_01;
	class UStaticMeshComponent* Logo_Mesh_02;

public:
	LV_Thread_GameLogo(class UStaticMeshComponent* _Logo_Mesh_01, class UStaticMeshComponent* _Logo_Mesh_02);
	~LV_Thread_GameLogo();
};
