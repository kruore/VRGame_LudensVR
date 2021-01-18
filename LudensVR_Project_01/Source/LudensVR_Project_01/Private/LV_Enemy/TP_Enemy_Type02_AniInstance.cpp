// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#include "TP_Enemy_Type02_AniInstance.h"
#include "TP_Enemy_Type02.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"


UTP_Enemy_Type02_AniInstance::UTP_Enemy_Type02_AniInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsDead = false;
}
void UTP_Enemy_Type02_AniInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (!::IsValid(Pawn))return;
	if (!IsDead)
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ATP_Enemy_Type02>(Pawn);
		if (Character->HP <= 0)
		{
			//캐릭터가 죽을 경우
			IsDead = true;
		}
	}
}
void UTP_Enemy_Type02_AniInstance::PlayAttack()
{
	if (!Montage_IsPlaying(AttackMontage))
	{
		Montage_Play(AttackMontage, 1.0f);
	}
}