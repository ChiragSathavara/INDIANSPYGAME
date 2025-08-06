// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Hero/HeroCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "NPC/AINPCCharacter.h"
#include "NPC/AINPCController.h"

// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
	WeaponMesh->SetupAttachment(RootComponent);

	SphereArea = CreateDefaultSubobject<USphereComponent>("SphereArea");
	SphereArea->SetupAttachment(WeaponMesh);

	SphereArea->OnComponentBeginOverlap.AddDynamic(this,&AWeaponBase::OnSphereBeginOverlap);
	SphereArea->OnComponentEndOverlap.AddDynamic(this,&AWeaponBase::OnSphereEndOverlap);
	
	MagAmmo = 30;
	TotalAmmo = 200;
	CountAmmo = MagAmmo;

	MuzzleObstructLine = 20;
	
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	MyHero = Cast<AHeroCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponBase::FireBullets()
{
	if (CountAmmo <= 0)
	{
		return;
	}

	UE_LOG(LogTemp,Warning,TEXT("Shooting"));

	AmmoCounter();

	FName SocketName = FName("MuzzleLoc");

	FVector SocketLocation = WeaponMesh->GetSocketLocation(SocketName);
	FRotator SocketRotation = WeaponMesh->GetSocketRotation(SocketName);
	
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),FireParticle,SocketLocation,SocketRotation);
	UGameplayStatics::PlaySoundAtLocation(GetWorld(),FireSound,SocketLocation);
	
	FVector EyeLoc;
	FRotator EyeRot;

	MyHero->GetController()->GetPlayerViewPoint(EyeLoc, EyeRot);

	FVector StartLoc = EyeLoc;
	FVector EndLoc = EyeLoc + (EyeRot.Vector() * 10000);

	FHitResult CamResultHit;

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(MyHero);

	bool bCamHit = GetWorld()->LineTraceSingleByChannel(CamResultHit,StartLoc,EndLoc,ECC_WorldStatic,Params);

	//DrawDebugLine(GetWorld(),StartLoc,EndLoc,FColor::Red,false,3,1,2);

	UE_LOG(LogTemp,Warning,TEXT("Ammo :- %i"),CountAmmo);

	if (bCamHit)
	{
		FHitResult BulletHit;

		FVector HitVectorLength = CamResultHit.Location - SocketLocation;
		float HitVectorSize = HitVectorLength.Size();
		FVector HitDirection = HitVectorLength / HitVectorSize;
		FVector HitScaledDir = HitDirection * 1000;

		FVector ProjectileEnds = HitScaledDir + CamResultHit.Location;
    	 
		bool bProjectileHit = GetWorld()->LineTraceSingleByChannel(BulletHit,SocketLocation,ProjectileEnds,ECC_WorldStatic,Params);
  
		//DrawDebugLine(GetWorld(),SocketLocation,ProjectileEnds,FColor::Green,false,3,1,2);

		if (bProjectileHit)
		{
			
			DrawDebugSphere(GetWorld(),BulletHit.Location,20,10,FColor::Purple,false,1,1,2);
			AActor* MyHitActor = BulletHit.GetActor();
            HitParticles(BulletHit.Location);
			
			AAINPCCharacter* MyNPC = Cast<AAINPCCharacter>(MyHitActor);
			if (MyNPC)
			{
				
				AAINPCController* NPCCont = Cast<AAINPCController>(MyNPC->GetController());
				if (NPCCont)
				{
					UGameplayStatics::ApplyDamage(MyNPC,20,GetInstigatorController(), MyHero, UDamageType::StaticClass());
					NPCCont->MyNPC->EquipRifle();
					NPCCont->LookAtPlayer();
					NPCCont->MyNPC->NPCState = ENPCState::ENS_Chasing;
					NPCCont->bCanSeePlayer = true;
					NPCCont->MyNPC->ShootingSphereArea->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
					NPCCont->MyNPC->ShootingSphereArea->SetActive(true);
				}
				
			}
		}
	}
}
void AWeaponBase::AmmoCounter()
{
	if (CountAmmo > 0)
	{
		CountAmmo--;
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("CountAmmo is 0 (Reload)"));
	}
}

void AWeaponBase::ReloadAmmo()
{
	if (TotalAmmo > 0 && CountAmmo < MagAmmo)
	{
		int AmmoToReload = MagAmmo - CountAmmo ;

		if (TotalAmmo >= AmmoToReload)
		{
			CountAmmo += AmmoToReload;
			TotalAmmo -= AmmoToReload;
		}
		else
		{
			CountAmmo += TotalAmmo;
			TotalAmmo = 0;
		}
	}
	else if (TotalAmmo == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No more ammo to reload!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Magazine is already full!"));
	}
}

void AWeaponBase::AIFireBullets()
{
	if (CountAmmo <= 0)
	{
		return;
	}
	
	FName SocketName = FName("MuzzleLoc");
	
	FVector SocketLocation = WeaponMesh->GetSocketLocation(SocketName);
	FRotator SocketRotation = WeaponMesh->GetSocketRotation(SocketName);
	
	
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),FireParticle,SocketLocation,SocketRotation);
	UGameplayStatics::PlaySoundAtLocation(GetWorld(),FireSound,SocketLocation);

	AmmoCounter();
	
	//FVector TargetLocation = MyHero->GetActorLocation();
	//FVector Direction = (TargetLocation - SocketLocation).GetSafeNormal();

	FHitResult MuzzleObstructHit;
	FVector MuzzleForwardEndLoc = SocketLocation + SocketRotation.Vector() * MuzzleObstructLine;

	AAINPCCharacter* MyNPC = Cast<AAINPCCharacter>(GetOwner());

	FCollisionQueryParams Params;
	
	if (MyNPC != nullptr)
	{
		Params.AddIgnoredActor(MyNPC);
	}
	

	bool bMuzzleObstruction = GetWorld()->LineTraceSingleByChannel(MuzzleObstructHit,SocketLocation,MuzzleForwardEndLoc,ECC_Visibility,Params);
	
	if (bMuzzleObstruction)
	{
		UE_LOG(LogTemp, Warning, TEXT("Muzzle Obstruction"));
		DrawDebugSphere(GetWorld(),MuzzleObstructHit.Location,20,20,FColor::Green,false,2,0,1);
		return;
	}
	
	FVector EndLoc = SocketLocation + SocketRotation.Vector() * 10000;

	FHitResult AIBulletHit;
	
	bool bProjectileHit = GetWorld()->LineTraceSingleByChannel(AIBulletHit,SocketLocation,EndLoc,ECC_WorldStatic);

	//DrawDebugLine(GetWorld(),SocketLocation,EndLoc,FColor::Red,false,3,1,2);
	
	if (bProjectileHit)
	{
		DrawDebugSphere(GetWorld(),AIBulletHit.Location,20,10,FColor::Red,false,1,1,1);
		AActor* HitActor = AIBulletHit.GetActor();
		HitParticles(AIBulletHit.Location);
		
		MyHero = Cast<AHeroCharacter>(HitActor);
		if (MyHero)
		{
			UE_LOG(LogTemp,Warning,TEXT("AIFireBullets Player Hit"));
			UGameplayStatics::ApplyDamage(MyHero,20,GetInstigatorController(),this,UDamageType::StaticClass());
		}
	}
}

void AWeaponBase::HitParticles(FVector& Location)
{
	if (HitParticle != nullptr)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),HitParticle,Location);
	}
	
}

void AWeaponBase::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                       UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	MyHero = Cast<AHeroCharacter>(OtherActor);
	if (MyHero)
	{
		UE_LOG(LogTemp,Warning,TEXT("MyHero is overlapping with Weapon"));
		MyHero->SetOverlappedWeapon(this);
	}
}

void AWeaponBase::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	MyHero = Cast<AHeroCharacter>(OtherActor);
	if (MyHero)
	{
		UE_LOG(LogTemp,Warning,TEXT("MyHero end overlapping with Weapon"));
		MyHero->SetOverlappedWeapon(nullptr);
	}
}
