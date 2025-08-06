// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AmmoActor.generated.h"

class UStaticMeshComponent;
class USphereComponent;
UCLASS()
class INDIANSPYGAME_API AAmmoActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAmmoActor();

	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> AmmoMesh;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USphereComponent> AmmoSphereArea;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent,
							  AActor* OtherActor,
							  UPrimitiveComponent* OtherComp,
							  int32 OtherBodyIndex,
							  bool bFromSweep,
							  const FHitResult& SweepResult);

};
