// Fill out your copyright notice in the Description page of Project Settings.


#include "Hero/HeroCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "Weapon/WeaponBase.h"
#include "Components/SphereComponent.h"
#include "Animation/HeroAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/CapsuleComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISense_Hearing.h"
#include "Components/BoxComponent.h"
#include "CustomActors/RockActor.h"
#include "CustomComponent/ParkourSysComponent.h"
#include "CustomComponent/TakeDownComponent.h"
#include "NPC/AINPCCharacter.h"
#include "Perception/AISense_Sight.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"


// Sets default values
AHeroCharacter::AHeroCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
	
	SoldierHead = CreateDefaultSubobject<USkeletalMeshComponent>("SoldierCloth");
	SoldierHead->SetupAttachment(GetMesh());

	StealthBoxComponent = CreateDefaultSubobject<UBoxComponent>("Stealth Box");
	StealthBoxComponent->SetupAttachment(RootComponent);

	StealthBoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	StealthBoxComponent->SetActive(true);

	StealthBoxComponent->OnComponentBeginOverlap.AddDynamic(this,&AHeroCharacter::OnBoxBeginOverlap);
	StealthBoxComponent->OnComponentEndOverlap.AddDynamic(this,&AHeroCharacter::OnBoxEndOverlap);
	
	ParkourSysComp = CreateDefaultSubobject<UParkourSysComponent>("ParkourSysComp");

	TakeDownComp = CreateDefaultSubobject<UTakeDownComponent>("TakeDownComp");
	
	SetupAIPerceptionStimuliSource();
	
	WeaponState = EWS_UnEquipped;
	bIsWeaponInHand = false;
	bShouldAutoFire = true;
	bIsReloading = false;
	bWantsToFire = false;
	bIsCrouch = false;
	Health = 100;
	bIsPlayerAlive = true;
	bShiftPressed = false;
    bCanThrowing = true;
	GetCharacterMovement()->MaxWalkSpeed =  WalkSpeed;

	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true;
	GetCharacterMovement()->SetCrouchedHalfHeight(44.0f);
	
}

// Called when the game starts or when spawned
void AHeroCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	MyPC = Cast<APlayerController>(GetController());
	if (MyPC != nullptr)
	{
		UEnhancedInputLocalPlayerSubsystem* MySubSys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(MyPC->GetLocalPlayer());
		if (MySubSys != nullptr)
		{
			MySubSys->AddMappingContext(DefaultPlayer_IMC,0);
		}
	}
	
}

void AHeroCharacter::Move(const FInputActionValue& Value)
{
	FVector2d MoveValue = Value.Get<FVector2D>();

	FRotator CtrlRot = GetControlRotation();
	FRotator YawRot = FRotator(0,CtrlRot.Yaw,0);
	FVector ForwardDir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);
	FVector RightDir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);

	AddMovementInput(ForwardDir,MoveValue.Y);
	AddMovementInput(RightDir,MoveValue.X);
	
}

void AHeroCharacter::Look(const FInputActionValue& Value)
{
	FVector2d LookValue = Value.Get<FVector2D>();

	AddControllerPitchInput(LookValue.Y);
	AddControllerYawInput(LookValue.X);
}

void AHeroCharacter::DoJumpOrVault()
{
	if ( bIsWeaponInHand == false && bAim == false)
	{
		ParkourSysComp->DoVault();
	}
	
}

void AHeroCharacter::PlayerJumpStop()
{
	StopJumping();
}

void AHeroCharacter::StartRun()
{
	if (bIsCrouch == true || bIsReloading == true ||bAim == true)
	{
		return;
	}

	bShiftPressed = true;
	GetCharacterMovement()->MaxWalkSpeed = 600;
}

void AHeroCharacter::StopRun()
{
	bShiftPressed = false;
	GetCharacterMovement()->MaxWalkSpeed =  WalkSpeed;
}



// Called to bind functionality to input
void AHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* MyInputComp = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (MyInputComp)
	{
		MyInputComp->BindAction(MoveAction,ETriggerEvent::Triggered,this,&AHeroCharacter::Move);
		MyInputComp->BindAction(LookAction,ETriggerEvent::Triggered,this,&AHeroCharacter::Look);
		MyInputComp->BindAction(ShiftAction,ETriggerEvent::Started,this,&AHeroCharacter::StartRun);
		MyInputComp->BindAction(ShiftAction,ETriggerEvent::Completed,this,&AHeroCharacter::StopRun);
		MyInputComp->BindAction(JumpAction,ETriggerEvent::Started,this,&AHeroCharacter::DoJumpOrVault);
		MyInputComp->BindAction(JumpAction,ETriggerEvent::Completed,this,&AHeroCharacter::PlayerJumpStop);
		MyInputComp->BindAction(EquippedAction,ETriggerEvent::Started,this,&AHeroCharacter::EquippedRifle);
		MyInputComp->BindAction(AimAction,ETriggerEvent::Started,this,&AHeroCharacter::ADSActive);
		MyInputComp->BindAction(AimAction,ETriggerEvent::Completed,this,&AHeroCharacter::ADSDeactive);
		MyInputComp->BindAction(FireAction,ETriggerEvent::Started,this,&AHeroCharacter::Shoot);
		MyInputComp->BindAction(FireAction,ETriggerEvent::Completed,this,&AHeroCharacter::StopShoot);
		MyInputComp->BindAction(ThrowAction,ETriggerEvent::Started,this,&AHeroCharacter::ThrowRock);
		MyInputComp->BindAction(ReloadAction,ETriggerEvent::Started,this,&AHeroCharacter::ReloadAnimation);
		MyInputComp->BindAction(CrouchAction,ETriggerEvent::Started,this,&AHeroCharacter::PlayerCrouch);
		MyInputComp->BindAction(TakeDownAction,ETriggerEvent::Started,this,&AHeroCharacter::HeroStealthKill);
	}

}

void AHeroCharacter::EquippedRifle()
{
	if(bIsReloading == true)
	{
		return;
	}
	
	if (RifleWeapon == nullptr)
	{
		return;
	}
	
	if (bAim == false)
	{
		if (WeaponState == EWS_Equipped)
		{
			WeaponState = EWS_UnEquipped;
			bIsWeaponInHand = false;
			EquippedWeapon(GetMesh(),"RifleSocket");
		}
		else if (WeaponState == EWS_UnEquipped)
		{
			WeaponState = EWS_Equipped;
			bIsWeaponInHand = true;
			EquippedWeapon(GetMesh(),"WeaponHandHolder");
		}
	}
}

void AHeroCharacter::EquippedWeapon(USkeletalMeshComponent* SkeletalMesh,FName SocketName)
{
	if (RifleWeapon)
	{
		RifleWeapon->AttachToComponent(SkeletalMesh,FAttachmentTransformRules::SnapToTargetNotIncludingScale,FName(SocketName));
	}
}

void AHeroCharacter::SetOverlappedWeapon(AWeaponBase* Weapon)
{
	AWeaponBase* OverlappedWeapon = Cast<AWeaponBase>(Weapon);

	if (RifleWeapon != nullptr)
	{
		return;
	}

	
	if (OverlappedWeapon)
	{
		RifleWeapon = OverlappedWeapon;
		RifleWeapon->SphereArea->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("Overlapped Weapon is NULLPTR"));
	}
}


void AHeroCharacter::ADSActive()
{
	
	if (bIsWeaponInHand == true)
	{
		if (GetCharacterMovement()->IsFalling())
		{
			return;
		}
		
		bAim = true;
		bUseControllerRotationYaw = true;
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->MaxWalkSpeed =  WalkSpeed;
		if (bIsCrouch == true)
		{
			SpringArm->SocketOffset = FVector(0.0f,90.0f,-30.0f);
			SpringArm->TargetArmLength = 100.0f;
		}
		else
		{
			SpringArm->SocketOffset = FVector(0.0f,90.0f,0.0f);
			SpringArm->TargetArmLength = 90.0f;
		}
	}
	
}

void AHeroCharacter::ADSDeactive()
{
	bAim = false;
    
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	SpringArm->TargetArmLength = 300.0f;
	SpringArm->SocketOffset = FVector(0.0f,90.0f,0.0f);
}
void AHeroCharacter::Shoot()
{
	if (!RifleWeapon || bAim == false || bIsReloading || bIsPlayerAlive == false)
	{
		return;
	}

	StartAutoFire();
}

void AHeroCharacter::StopShoot()
{
	StopAutoFire();
}

void AHeroCharacter::StartAutoFire()
{
	if (bAim == true)
	{
	
	   // Prevent multiple timers
	if (!GetWorld()->GetTimerManager().IsTimerActive(FireHandle))
	 {
		Fire(); // Fire once immediately
		GetWorld()->GetTimerManager().SetTimer(FireHandle, this, &AHeroCharacter::Fire, 0.1f, true);
	 } 

	  bWantsToFire = true;
    }
}

void AHeroCharacter::StopAutoFire()
{
	// Always stop the timer when player releases fire input
	GetWorld()->GetTimerManager().ClearTimer(FireHandle);
	bWantsToFire = false;
}

void AHeroCharacter::ThrowRock()
{
	if (bCanThrowing == true && bIsPlayerAlive == true)
	{
		if (RockClass != nullptr)
		{
			FTransform ThrowTransform = FTransform(GetControlRotation(), GetActorLocation());

			FActorSpawnParameters spawnParameters;
			spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			
			Rock = GetWorld()->SpawnActor<ARockActor>(RockClass,ThrowTransform,spawnParameters);
			bCanThrowing = false;
			GetWorld()->GetTimerManager().SetTimer(RockTimer, this, &AHeroCharacter::ResetThrowRock, 1.5f, false);

		}
	}
	
}

void AHeroCharacter::ResetThrowRock()
{
	bCanThrowing = true;
}

void AHeroCharacter::PlayerCrouch()
{
	if (bShiftPressed == false)
	{
		if (bIsCrouch == false)
		{
			
            Crouch();
			bIsCrouch = true;
		}
		else 
		{
			UnCrouch();
			bIsCrouch = false;
		}
	}

}


void AHeroCharacter::Fire()
{
	if (RifleWeapon)
	{
        if (bAim == true && bIsPlayerAlive == true)
        {
	        RifleWeapon->FireBullets();
        	UAISense_Hearing::ReportNoiseEvent(GetWorld(),GetActorLocation(),1.0f,this,1500.0f);
        }
	}
}
void AHeroCharacter::ReloadAnimation()
{
	if (WeaponState == EWS_Equipped)
	{
		UHeroAnimInstance* HeroAnimInstance = Cast<UHeroAnimInstance>(GetMesh()->GetAnimInstance());
		if (HeroAnimInstance == nullptr)
		{
			return;
		}
		if (HeroAnimInstance->Montage_IsPlaying(nullptr))
		{
			return;
		}
		if (RifleWeapon == nullptr)
		{
			return;
		}
		if (RifleWeapon->CountAmmo < RifleWeapon->MagAmmo)
		{
			bIsReloading = true;
			HeroAnimInstance->Montage_Play(ReloadMontage,1);
		//	UGameplayStatics::PlaySoundAtLocation(GetWorld(), ReloadSound,GetActorLocation());
			GetWorld()->GetTimerManager().SetTimer(ReloadHandle,this,&AHeroCharacter::Reload,2.5,false);
		}
	}
	
}

void AHeroCharacter::Reload()
{
	if (RifleWeapon !=nullptr)
	{
		RifleWeapon->ReloadAmmo();
		bIsReloading = false;
	}
}

void AHeroCharacter::SetupAIPerceptionStimuliSource()
{
	AIPerceptionStimulusComp = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>("AIPerceptionStimuliSource");
	if (AIPerceptionStimulusComp)
	{
		AIPerceptionStimulusComp ->RegisterForSense(TSubclassOf<UAISense_Sight>());
		AIPerceptionStimulusComp->RegisterForSense(TSubclassOf<UAISense_Hearing>());
		AIPerceptionStimulusComp ->RegisterWithPerceptionSystem();
	}
}

void AHeroCharacter::RagDollMesh(USkeletalMeshComponent* MySkeletalMesh)
{
	MySkeletalMesh->SetCollisionProfileName("Ragdoll");
	MySkeletalMesh->SetSimulatePhysics(true);
}

void AHeroCharacter::HeroStealthKill()
{
	if (!EnemyNPC || !bCanTakeDownNPC)
	{
		UE_LOG(LogTemp, Warning, TEXT("No valid Enemy NPC for takedown."));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("EnemyNPC isnt nullptr"));
	TakeDownComp->TakeDown(EnemyNPC);
}

void AHeroCharacter::Die()
{
	if (MyPC != nullptr)
	{
		bIsPlayerAlive = false;
		DisableInput(MyPC);
		RagDollMesh(GetMesh());
		RagDollMesh(SoldierHead);
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetCapsuleComponent()->SetActive(false);
		ShowDeathMenu();
	}

}
void AHeroCharacter::ShowDeathMenu()
{
	if (!DeathMenuClass || DeathMenuRef)
	{
		return;
	}
	
	if (!MyPC) return;

	DeathMenuRef = CreateWidget<UUserWidget>(MyPC, DeathMenuClass);
	if (DeathMenuRef)
	{
		DeathMenuRef->AddToViewport();

		// Show mouse cursor
		MyPC->bShowMouseCursor = true;

		// Set input mode to UI
		FInputModeGameAndUI InputMode;
		InputMode.SetWidgetToFocus(DeathMenuRef->TakeWidget());
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		InputMode.SetHideCursorDuringCapture(false);

		MyPC->SetInputMode(InputMode);
	}
}
float AHeroCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	Health -= DamageAmount;
	if (Health <= 0)
	{
		Die();
	}
	return DamageAmount;
}


void AHeroCharacter::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
											  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	EnemyNPC = Cast<AAINPCCharacter>(OtherActor);
	if (EnemyNPC)
	{
		bCanTakeDownNPC = true;
	}
}

void AHeroCharacter::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	EnemyNPC = nullptr;
	bCanTakeDownNPC = false;
}
