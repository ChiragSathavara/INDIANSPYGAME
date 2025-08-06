// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "EnumStates/WeaponStates.h"
#include "HeroCharacter.generated.h"

class ARockActor;
class UTakeDownComponent;
class AAINPCCharacter;
class UCameraComponent;
class USpringArmComponent;
class AWeaponBase;
class USkeletalMeshComponent;
class UAnimMontage;
class UAIPerceptionStimuliSourceComponent;
class USoundBase;
class UParkourSysComponent;
class UBoxComponent;
class UUserWidget;
UCLASS()
class INDIANSPYGAME_API AHeroCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHeroCharacter();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<USkeletalMeshComponent> SoldierHead;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputMappingContext> DefaultPlayer_IMC;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction> ShiftAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	TObjectPtr<UInputAction> JumpAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction> EquippedAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction>AimAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction>FireAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction>CrouchAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction>ReloadAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction> TakeDownAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="InputAction")
	TObjectPtr<UInputAction> ThrowAction;

	
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<AWeaponBase> RifleWeapon;

	UPROPERTY()
	TObjectPtr<APlayerController> MyPC;

	UPROPERTY()
	TObjectPtr<AAINPCCharacter> EnemyNPC;

	//UAIPerceptionSys
	UPROPERTY()
	TObjectPtr<UAIPerceptionStimuliSourceComponent> AIPerceptionStimulusComp;

	//CustomComponents
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<UParkourSysComponent> ParkourSysComp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<UTakeDownComponent> TakeDownComp;
	        
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<UBoxComponent> StealthBoxComponent;
	
	//Montage
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Montage")
	TObjectPtr<UAnimMontage> ReloadMontage;

	//Bool and Enum, TimerHandle
	UPROPERTY()
	bool bIsWeaponInHand;

	UPROPERTY()
	TEnumAsByte<EWeaponState> WeaponState;
	
	UPROPERTY()
	bool bAim;

	UPROPERTY()
	bool bShouldAutoFire;

	UPROPERTY()
	bool bWantsToFire;

	UPROPERTY()
	bool bIsReloading;

	UPROPERTY()
	bool bIsCrouch;

	UPROPERTY()
	bool bShiftPressed;
	
	UPROPERTY()
	bool bIsPlayerAlive;

	UPROPERTY()
	bool bCanTakeDownNPC;
	
	UPROPERTY()
	FTimerHandle FireHandle;
	
	UPROPERTY()
	FTimerHandle ReloadHandle;

	//Health 
	UPROPERTY(BlueprintReadOnly)
	float Health;
	
	UPROPERTY()
	float WalkSpeed = 300.f;

	UPROPERTY()
	bool bCanThrowing;

	UPROPERTY()
	FTimerHandle RockTimer;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TSubclassOf<ARockActor> RockClass;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	TObjectPtr<ARockActor> Rock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> DeathMenuClass;

	UPROPERTY()
	TObjectPtr<UUserWidget> DeathMenuRef;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	void DoJumpOrVault();
	void PlayerJumpStop();

	void StartRun();
	void StopRun();

	void PlayerCrouch();


	
	void EquippedWeapon(USkeletalMeshComponent* SkeletalMesh,FName SocketName);

	//Weapon Equip Implementation
	void EquippedRifle();

	//Weapon Fire Implementation
	void Shoot();
	void StopShoot();
	void StartAutoFire();
	void Fire();
	void StopAutoFire();

	void ThrowRock();
	void ResetThrowRock();
	
	void Die();
	void ShowDeathMenu();


	//ADS Implementation
	void ADSActive();
	void ADSDeactive();

	
	//Reload Implementation
	void ReloadAnimation();
	void Reload();

	
	//AIPerceptionSystemStimulus
	void SetupAIPerceptionStimuliSource();
	

public:	
	//void SetStealthMode(bool bIsInStealth);
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



	
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	
	void SetOverlappedWeapon(AWeaponBase* Weapon);

	void RagDollMesh(USkeletalMeshComponent* MySkeletalMesh);
	
	void HeroStealthKill();
	
	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent,
							  AActor* OtherActor,
							  UPrimitiveComponent* OtherComp,
							  int32 OtherBodyIndex,
							  bool bFromSweep,
							  const FHitResult& SweepResult);

	UFUNCTION()
	void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent,
							AActor* OtherActor,
							UPrimitiveComponent* OtherComp,
							int32 OtherBodyIndex);
	
};







