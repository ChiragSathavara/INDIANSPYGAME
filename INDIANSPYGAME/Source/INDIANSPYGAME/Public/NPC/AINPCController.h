// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AINPCController.generated.h"

class UNavigationSystemV1;
//class UAISenseConfig_Hearing;
class AHeroCharacter;
class UAISenseConfig_Sight;
class UAISenseConfig_Hearing;
class UCrowdFollowingComponent;
class AAINPCCharacter;
class UAIPerceptionComponent;
/**
 * 
 */
UCLASS()
class INDIANSPYGAME_API AAINPCController : public AAIController
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<AAINPCCharacter> MyNPC;

	UPROPERTY()
	TObjectPtr<UCrowdFollowingComponent> CrowdFollowingComp;

	UPROPERTY()
	TObjectPtr<UAIPerceptionComponent> PerceptionComp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UAISenseConfig_Sight> AISenseSight;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UAISenseConfig_Hearing> AISenseHearing;

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<AHeroCharacter> MyHero;

	UPROPERTY()
	FTimerHandle UnEquipTH;

	UPROPERTY()
	FTimerHandle ShootTH;

	UPROPERTY()
	FTimerHandle FireRateTimer;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bCanShoot = true;
	
	UPROPERTY(BlueprintReadWrite, Category = "AI")
	FVector SoundLocation;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bCanSeePlayer;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float FireRate = 0.5;
	
	UPROPERTY()
   TObjectPtr<UNavigationSystemV1> NavSys;

   
protected:

	AAINPCController(const FObjectInitializer& ObjectInitializer);

	UFUNCTION()
	void OnTargetDetected(AActor* TargetActor, FAIStimulus const Stimulus);
	
	virtual void OnPossess(APawn* InPawn) override;

	virtual void BeginPlay() override;

	void SetupPerceptionComp();
	
	void DelayUnEquipped();

	
public:

	UFUNCTION(BlueprintCallable)
	void ChasePlayer();

	UFUNCTION(BlueprintCallable)
	void ShootOut();

	UFUNCTION(BlueprintCallable)
	void ResetShootOut();
	
	UFUNCTION(BlueprintCallable)
	void LookAtPlayer();

	UFUNCTION(BlueprintCallable)
	void IdlePatrol();
	
	UFUNCTION(BlueprintCallable)
	void InvenstigateArea();
	
	UFUNCTION()
	void FireWeapon();

	
	
	UFUNCTION(BlueprintCallable)
	void DeadUnPossess();

	//void StopShootOut();
	
};
