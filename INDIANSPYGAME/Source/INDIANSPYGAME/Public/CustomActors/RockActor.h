// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RockActor.generated.h"

class AHeroCharacter;
class UStaticMeshComponent;
class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class INDIANSPYGAME_API ARockActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARockActor();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<UStaticMeshComponent> MeshComp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovementComp;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<USphereComponent> SphereComp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<USoundBase> CollisionSoundRock;

	UPROPERTY()
	bool bHasMadeNoise;

	UPROPERTY()
	TObjectPtr<AHeroCharacter> MyHero;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
					   UPrimitiveComponent* OtherComp, FVector NormalImpulse,
					   const FHitResult& Hit);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
