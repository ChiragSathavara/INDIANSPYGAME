// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class AAINPCCharacter;
class USkeletalMeshComponent;
class USphereComponent;
class AHeroCharacter;
class UParticleSystem;
UCLASS()
class INDIANSPYGAME_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	//Components
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Component")
	TObjectPtr<USkeletalMeshComponent> WeaponMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Component")
	TObjectPtr<USphereComponent> SphereArea;
	
	UPROPERTY()
	TObjectPtr<AHeroCharacter> MyHero;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Component")
	TObjectPtr<UParticleSystem> FireParticle;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Component")
	TObjectPtr<UParticleSystem> HitParticle;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Sound")
	TObjectPtr<USoundBase> FireSound;

	//()
	//TObjectPtr<AAINPCCharacter> MyNPC;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int MuzzleObstructLine;
	
	UPROPERTY(BlueprintReadOnly)
	int MagAmmo;

	UPROPERTY(BlueprintReadOnly)
	int TotalAmmo;

	UPROPERTY(BlueprintReadOnly)
	int CountAmmo;

	UPROPERTY()
	bool bCanShoot;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent,
							  AActor* OtherActor,
							  UPrimitiveComponent* OtherComp,
							  int32 OtherBodyIndex,
							  bool bFromSweep,
							  const FHitResult& SweepResult);

	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent,
							AActor* OtherActor,
							UPrimitiveComponent* OtherComp,
							int32 OtherBodyIndex);
	
public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void FireBullets();
	void AmmoCounter();
	void ReloadAmmo();

	void AIFireBullets();
	void HitParticles(FVector& Location);
	
};
