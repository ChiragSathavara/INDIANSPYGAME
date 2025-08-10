// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/AINPCCharacter.h"

#include "Animation/NPCAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "NPC/AINPCController.h"
#include "Hero/HeroCharacter.h"
#include "Weapon/WeaponBase.h"

// Sets default values
AAINPCCharacter::AAINPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bWeaponInHand = false;
	NPCState = ENPCState::ENS_Idle;

	GetCharacterMovement()->MaxWalkSpeed = 300.f;
	Health = 100.f;

	bISNPCAlive = true;
	bReloading = false;
	bShootinArea = false;
}

// Called when the game starts or when spawned
void AAINPCCharacter::BeginPlay()
{
	Super::BeginPlay();
	SpawnRifle();
	MyNPCCont = Cast<AAINPCController>(GetController());
}

void AAINPCCharacter::AttachRifle(FName SocketName)
{
	if (RifleWeapon != nullptr)
	{
		RifleWeapon->AttachToComponent(GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale,SocketName);
	}
}

void AAINPCCharacter::SpawnRifle()
{
	
	FActorSpawnParameters spawnParameters;
	spawnParameters.Owner = this;
	RifleWeapon = GetWorld()->SpawnActor<AWeaponBase>(RifleWeaponClass,spawnParameters);
	if (RifleWeapon)
	{
		UnEquipRifle();
		RifleWeapon->SetOwner(this);
		RifleWeapon->SphereArea->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		RifleWeapon->SphereArea->SetActive(false);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Spawn Rifle :- NullPtr"));
	}
	
}

void AAINPCCharacter::EquipRifle()
{

		if (RifleWeapon)
		{
			AttachRifle("WeaponHandHolder");
			bWeaponInHand = true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Equip Rifle :- NullPtr"));
		}
	
}

void AAINPCCharacter::UnEquipRifle()
{
	
		if (RifleWeapon)
		{
			AttachRifle("RifleSocket");
			bWeaponInHand = false;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Equip Rifle :- NullPtr"));
		}
	
}

void AAINPCCharacter::ReloadAnim()
{
	if (RifleWeapon && RifleWeapon->CountAmmo <= 0)
	{
		if (RifleWeapon->TotalAmmo == 0)
		{
			return;
		}
		UNPCAnimInstance* MyNPCAnim = Cast<UNPCAnimInstance>(GetMesh()->GetAnimInstance());
		if (MyNPCAnim)
		{
			bReloading = true;
			MyNPCAnim->Montage_Play(ReloadMontage,1);
			GetWorld()->GetTimerManager().SetTimer(ReloadTimer,this,&AAINPCCharacter::ReloadPlay,2.3,false);
		}
	}
}

void AAINPCCharacter::ReloadPlay()
{
	if (RifleWeapon && RifleWeapon->CountAmmo <= 0)
	{
		RifleWeapon->ReloadAmmo();
	}
	bReloading = false;
}

void AAINPCCharacter::FireRifle()
{
	if (RifleWeapon && bWeaponInHand == true)
	{
		RifleWeapon->AIFireBullets();
	}
}

void AAINPCCharacter::Die()
{
	if (MyNPCCont)
	{
		MyNPCCont->DeadUnPossess();
	}
	bISNPCAlive = false;
	GetCharacterMovement()->DisableMovement();
	GetMesh()->SetCollisionProfileName(TEXT("Ragdoll")); // Important!
	GetMesh()->SetSimulatePhysics(true);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCapsuleComponent()->SetActive(false);

}

float AAINPCCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	Health -= DamageAmount;
	
	if (Health <= 0)
	{
		Die();
		UE_LOG(LogTemp, Warning, TEXT("NPC Dead"));
	}
	
	return DamageAmount;
}
