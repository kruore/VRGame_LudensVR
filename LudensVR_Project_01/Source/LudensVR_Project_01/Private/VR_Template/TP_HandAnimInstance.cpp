//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "TP_HandAnimInstance.h"

UTP_HandAnimInstance::UTP_HandAnimInstance()
{
	CurrentGripState = EGrip_Code::Open;
}

void UTP_HandAnimInstance::SetGripState(EGrip_Code GripState)
{
	CurrentGripState = GripState;
}



