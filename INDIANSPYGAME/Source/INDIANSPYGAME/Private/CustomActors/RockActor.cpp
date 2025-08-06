// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomActors/RockActor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Hero/HeroCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AISense_Hearing.h"

// Sets default values
ARockActor::ARockActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComp->InitSphereRadius(15.f);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SphereComp->SetCollisionObjectType(ECC_WorldDynamic);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Block);
	RootComponent = SphereComp;
	
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	ProjectileMovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	
	SphereComp->OnComponentHit.AddDynamic(this, &ARockActor::OnHit);

	bHasMadeNoise = false;
}

// Called when the game starts or when spawned
void ARockActor::BeginPlay()
{
	Super::BeginPlay();
	MyHero = Cast<AHeroCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
}

void ARockActor::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	if (bHasMadeNoise == false)
	{
		UE_LOG(LogTemp, Warning, TEXT("Rock :- Sphere Collide"));

		UGameplayStatics::PlaySoundAtLocation(GetWorld(),CollisionSoundRock,GetActorLocation(),GetActorRotation());
		if (MyHero)
		{
			UAISense_Hearing::ReportNoiseEvent(GetWorld(),GetActorLocation(),1.0f,MyHero,1500.0f);
			bHasMadeNoise = true;
		}
	}
	
}

// Called every frame
void ARockActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

