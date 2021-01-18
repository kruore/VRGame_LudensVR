#include "TP_Enemy_Type02.h"
#include "LV_EnemyExplosionPartical_Type01.h"
#include "TP_Enemy_Type02_Controller.h"
#include "TP_VirtualRealityPawn_Motion.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Public/TimerManager.h"
#include "TP_Enemy_Type02_AniInstance.h"
#include "LV_EnemyNeck.h"
#include "GM_Sounds.h"

// Sets default values
ATP_Enemy_Type02::ATP_Enemy_Type02()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = ATP_Enemy_Type02_Controller::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	//GetCapsuleComponent()->SetCollisionProfileName(TEXT("ENEMY"));
	//GetMesh()->SetCollisionProfileName(TEXT("ENEMY"));
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -90.0f), FRotator(0.0f, -90.0f, 0.0f));
	GetMesh()->SetWorldScale3D(FVector(1.3f, 1.3f, 1.3f));
	//Æù ½ºÄÌÅ» ¼¼ÆÃ
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_Biotech_Toxic(TEXT("SkeletalMesh'/Game/Biotech_Toxic/Mesh/SK_Biotech_Toxic.SK_Biotech_Toxic'"));
	if (SK_Biotech_Toxic.Succeeded()) {
		GetMesh()->SetSkeletalMesh(SK_Biotech_Toxic.Object);
	}

	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance>SK_Bitotech(TEXT("AnimBlueprint'/Game/Biotech_Toxic/Animations/TP_Enemy_Type02.TP_Enemy_Type02_C'"));
	if (SK_Bitotech.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(SK_Bitotech.Class);
	}
	//IsAttacking = false;

	GetMesh()->SetCollisionProfileName(TEXT("Enemy2"));
	//GetMesh()->SetSimulatePhysics(true);
	//GetMesh()->SetNotifyRigidBodyCollision(true);
	//GetMesh()->SetGenerateOverlapEvents(true);

	HP = 100;
	Damage = 10;


	NeckVolume = nullptr;
}

// Called when the game starts or when spawned
void ATP_Enemy_Type02::BeginPlay()
{
	Super::BeginPlay();

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);

	IsDead = false;

	NeckVolume = (ALV_EnemyNeck*)GetWorld()->SpawnActor(ALV_EnemyNeck::StaticClass());
	NeckVolume->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform);
	NeckVolume->Parent02 = this;
	NeckVolume->SetActorLocation(GetMesh()->GetComponentLocation());
	NeckVolume->AddActorLocalOffset(FVector(10.0f, 0.0f, 168.0f));
	NeckVolume->SetActorScale3D(FVector(0.4f, 0.4f, 0.4f));
}

// Called every frame
void ATP_Enemy_Type02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATP_Enemy_Type02::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &ATP_Enemy_Type02::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ATP_Enemy_Type02::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ATP_Enemy_Type02::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATP_Enemy_Type02::Turn);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &ATP_Enemy_Type02::Attack);

}
void ATP_Enemy_Type02::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}
void ATP_Enemy_Type02::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}
void ATP_Enemy_Type02::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}
void ATP_Enemy_Type02::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}
void ATP_Enemy_Type02::Attack()
{
	if (IsAttacking)return;

	ABAnim->PlayAttack();
	IsAttacking = true;
}
void ATP_Enemy_Type02::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABAnim = Cast<UTP_Enemy_Type02_AniInstance>(GetMesh()->GetAnimInstance());
	ABAnim->OnMontageEnded.AddDynamic(this, &ATP_Enemy_Type02::OnAttackMontageEnded);
}
void ATP_Enemy_Type02::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{

	IsAttacking = false;
}
void ATP_Enemy_Type02::AttackCheck()
{
	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);
	bool bResult = GetWorld()->SweepSingleByChannel(
		HitResult,
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector()*200.0f,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel4,
		FCollisionShape::MakeSphere(50.0f),
		Params);

	if (bResult)
	{
		if (HitResult.Actor.IsValid())
		{
			//È÷Æ® Ã¼Å©
			FDamageEvent Damaged;
			HitResult.Actor->TakeDamage(50.0f, Damaged, GetController(), this);
		}

	}
}
float ATP_Enemy_Type02::TakeDamage(float DamageAmount, struct FDamageEvent const&DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	{
		if (HP <= 0)
		{
			SetActorEnableCollision(false);
			Action_Dead();
		}

		return FinalDamage;
	}

}
void ATP_Enemy_Type02::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}
void ATP_Enemy_Type02::Action_Damaged()
{
	//int PlayerDamage = GetDamage();
	//IsUnderAttack(50);
	//GetWorldTimerManager().SetTimer(DamagedTimerHandle, this, &ATP_Enemy_Type01::Action_Damaging, 1.0f, true, 1.0f);

	HP = HP - 20;

	if (HP <= 0)
	{
		//GetWorldTimerManager().ClearTimer(DamagedTimerHandle);
		Action_Dead();
	}
}
void ATP_Enemy_Type02::Action_Damaging()
{
	DamagedCounter++;

	if (DamagedCounter <= 2)
	{
		//GetWorldTimerManager().ClearTimer(DamagedTimerHandle);
		Action_DamagedEnd();
	}
	GetCharacterMovement()->MaxWalkSpeed = 20.0f;

}
void ATP_Enemy_Type02::Action_DamagedEnd()
{
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}
int ATP_Enemy_Type02::GetDamage()
{
	return Damage;
}
int ATP_Enemy_Type02::GetHP()
{
	return HP;
}
void ATP_Enemy_Type02::IsUnderAttack(int Damaged)
{
	HP = HP - Damaged;
}
void ATP_Enemy_Type02::Action_Dead()
{
	if (!isDead)
	{
		isDead = true;
		HP = 0;
		NeckVolume->Destroy();
		AGM_Sounds::instance->PlaySoundByIndex(6);
		//ALV_EnemyExplosionPartical_Type01* ExplosionParticle = (ALV_EnemyExplosionPartical_Type01*)GetWorld()->SpawnActor(ALV_EnemyExplosionPartical_Type01::StaticClass());
		//ExplosionParticle->SetActorLocation(this->GetActorLocation());
		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		DetachFromControllerPendingDestroy();

		SetLifeSpan(1.5f);
	}
}
bool ATP_Enemy_Type02::GetIsDead()
{
	return IsDead;
}