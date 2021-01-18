// //=======================================================================================================================================// The named class sources like P_...are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.ttttttt// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.ttttttttt|//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "Animation/AnimInstance.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "TP_Enemy_Type01_AniInstance.h"
#include "TP_Enemy_Type01.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackBeginDelegate)
DECLARE_MULTICAST_DELEGATE(FOnAttackEndDelegate);

UCLASS()
class LUDENSVR_PROJECT_01_API ATP_Enemy_Type01 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATP_Enemy_Type01();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PostInitializeComponents()override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const&DamageEvent, class AController* EventInstigator, AActor* DamageCauser)override;
	virtual void PossessedBy(AController* NewController)override;

	int DamagedCounter = 0;

	UPROPERTY(EditAnywhere)
	int HP;
	UPROPERTY(EditAnywhere)
	int Damage;
	bool IsDead;

	FTimerHandle DamagedTimerHandle;
	
	FOnAttackBeginDelegate OnAttackBegin;
	FOnAttackEndDelegate OnAttackEnd;

	void Action_Damaging();
	void Action_DamagedEnd();
	void Action_Damaged();
	void Action_Dead();

private:
	bool GetIsDead();
	int GetHP();
	int GetDamage();
//	void IsDead(bool EnemyIsDead);
	void IsUnderAttack(int Damaged);
	

	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);
	void Attack();
	UFUNCTION(BlueprintCallable,category ="Player attack the enemy")
	//void Action_Hit(AActor enemy, int damage);

	void AttackCheck();


	UFUNCTION()
	void OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);

private:

	UPROPERTY(EditAnywhere)
	bool IsAttacking;

	UPROPERTY(EditAnywhere)
	UTP_Enemy_Type01_AniInstance* ABAnim;
	
private:
	class ALV_EnemyNeck* NeckVolume;

private:
	bool isDead = false;
};
