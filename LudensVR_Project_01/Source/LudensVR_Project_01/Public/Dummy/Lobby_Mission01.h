#pragma once

#include "UObject/ConstructorHelpers.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Components/TextRenderComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lobby_Mission01.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALobby_Mission01 : public AActor
{
	GENERATED_BODY()

		class UStaticMeshComponent* Mesh;


public:
	// Sets default values for this actor's properties
	ALobby_Mission01();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		class UTextRenderComponent* _text;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* BottomMesh;


};
