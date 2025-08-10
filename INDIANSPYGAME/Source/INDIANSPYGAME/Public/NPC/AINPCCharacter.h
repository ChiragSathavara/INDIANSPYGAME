// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnumStates/NPCState.h"
#include "AINPCCharacter.generated.h"

class AWeaponBase;
class AAINPCController;
class AHeroCharacter;
UCLASS()
class INDIANSPYGAME_API AAINPCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAINPCCharacter();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<AWeaponBase> RifleWeaponClass;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<AWeaponBase> RifleWeapon;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bWeaponInHand;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bISNPCAlive;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TEnumAsByte<ENPCState>NPCState;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UAnimMontage> ReloadMontage;

	UPROPERTY()
	AAINPCController* MyNPCCont;

	UPROPERTY()
	TObjectPtr<AHeroCharacter> OverlappedHero;
	
	UPROPERTY()
	float Health;

	UPROPERTY()
	FTimerHandle ReloadTimer;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bReloading;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bShootinArea;
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	
	void AttachRifle(FName SocketName);
	void SpawnRifle();
	void EquipRifle();
	void UnEquipRifle();

	void ReloadAnim();
	void ReloadPlay();
	void FireRifle();
	void Die();


};
