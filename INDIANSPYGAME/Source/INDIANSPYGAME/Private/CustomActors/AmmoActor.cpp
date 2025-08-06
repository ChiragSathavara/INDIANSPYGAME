// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomActors/AmmoActor.h"

#include "Components/SphereComponent.h"
#include "Hero/HeroCharacter.h"
#include "Weapon/WeaponBase.h"

// Sets default values
AAmmoActor::AAmmoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AmmoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoMesh"));
	RootComponent = AmmoMesh;

	AmmoSphereArea = CreateDefaultSubobject<USphereComponent>(TEXT("AmmoSphereArea"));
	AmmoSphereArea->SetupAttachment(AmmoMesh);

	AmmoSphereArea->OnComponentBeginOverlap.AddDynamic(this,&AAmmoActor::OnSphereBeginOverlap);
}

// Called when the game starts or when spawned
void AAmmoActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAmmoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAmmoActor::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AHeroCharacter* MyHero = Cast<AHeroCharacter>(OtherActor);
	if (MyHero)
	{
		if (MyHero->RifleWeapon != nullptr)
		{
			if (MyHero->RifleWeapon->TotalAmmo < 200)
			{
				MyHero->RifleWeapon->TotalAmmo = 200;
				Destroy();
			}
		}
	}
}

