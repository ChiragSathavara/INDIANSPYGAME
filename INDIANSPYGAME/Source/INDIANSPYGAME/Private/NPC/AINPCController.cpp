#include "NPC/AINPCController.h"

#include "Components/BoxComponent.h"
#include "Hero/HeroCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "NPC/AINPCCharacter.h"
#include "Weapon/WeaponBase.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Components/SphereComponent.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

AAINPCController::AAINPCController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	CrowdFollowingComp = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent());
	CrowdFollowingComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::High);
	PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));

	if (CrowdFollowingComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("CrowdFollowingComp is alive"));
	}

	SetupPerceptionComp();
	bCanSeePlayer = false;
}

void AAINPCController::BeginPlay()
{
	Super::BeginPlay();

	MyHero = Cast<AHeroCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
}

void AAINPCController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	MyNPC = Cast<AAINPCCharacter>(InPawn);
}

void AAINPCController::SetupPerceptionComp()
{
	AISenseSight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("AISenseSight"));
	AISenseHearing = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("AISenseHearing"));
	
	if (!PerceptionComp) return;

	SetPerceptionComponent(*PerceptionComp);

	if (AISenseSight)
	{
		// Configure sight
		AISenseSight->SightRadius = 1200.f;
		AISenseSight->LoseSightRadius = 1225.f;
		AISenseSight->PeripheralVisionAngleDegrees = 60.f;
		AISenseSight->SetMaxAge(5.0f);
		AISenseSight->AutoSuccessRangeFromLastSeenLocation = 1220.f;
		AISenseSight->DetectionByAffiliation.bDetectEnemies = true;
		AISenseSight->DetectionByAffiliation.bDetectFriendlies = true;
		AISenseSight->DetectionByAffiliation.bDetectNeutrals = true;

		PerceptionComp->ConfigureSense(*AISenseSight);
		PerceptionComp->SetDominantSense(*AISenseSight->GetSenseImplementation());
	}

	// Setup Hearing
	if (AISenseHearing)
	{
		AISenseHearing->HearingRange = 1500.f;
		AISenseHearing->SetMaxAge(0.4f);
		AISenseHearing->DetectionByAffiliation.bDetectEnemies = true;
		AISenseHearing->DetectionByAffiliation.bDetectFriendlies = true;
		AISenseHearing->DetectionByAffiliation.bDetectNeutrals = true;

		PerceptionComp->ConfigureSense(*AISenseHearing);
	}
	
	
	PerceptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &AAINPCController::OnTargetDetected);
}


void AAINPCController::OnTargetDetected(AActor* TargetActor, const FAIStimulus Stimulus)
{
	
	AHeroCharacter* HeroCharacter = Cast<AHeroCharacter>(TargetActor);

	if (MyNPC->bISNPCAlive == false)
	{
		return;
	}
	
	if (HeroCharacter)
	{
		if (Stimulus.Type == UAISense::GetSenseID<UAISenseConfig_Sight>())
		{
			if (Stimulus.WasSuccessfullySensed())
			{
				if (bCanSeePlayer == false && MyNPC->bWeaponInHand == false)
				{
					if (MyNPC->NPCState == ENPCState::ENS_Idle || MyNPC->NPCState == ENPCState::ENS_Investigate)
					{
						MyNPC->NPCState = ENPCState::ENS_Chasing;
						bCanSeePlayer = true;
						MyNPC->EquipRifle();
						LookAtPlayer();
						if (MyHero)
						{
							MyHero->StealthBoxComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
							MyHero->StealthBoxComponent->SetActive(false);
						}
						GetWorld()->GetTimerManager().SetTimer( ShootTH,this,&AAINPCController::DelayShooting,0.5,false);
						UE_LOG(LogTemp, Warning, TEXT("SAW Player"));
					}
				}
			}
			else
			{
				if (MyHero)
				{
					MyHero->StealthBoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
					MyHero->StealthBoxComponent->SetActive(true);
				}
				
				GetWorld()->GetTimerManager().SetTimer( UnEquipTH,this,&AAINPCController::DelayUnEquipped,25,false);
			}
		}
		
		else if (Stimulus.Type == UAISense::GetSenseID<UAISenseConfig_Hearing>())
		{
			if (Stimulus.WasSuccessfullySensed())
			{
				if (bCanSeePlayer == false)
				{
					MyNPC->NPCState = ENPCState::ENS_Investigate;
					SoundLocation = Stimulus.StimulusLocation;
					UE_LOG(LogTemp, Warning, TEXT("Hearing"));
				}
				
			}
			else
			{
				GetWorld()->GetTimerManager().SetTimer( UnEquipTH,this,&AAINPCController::DelayUnEquipped,25,false);
			}
		}
	}
}
void AAINPCController::DelayUnEquipped()
{
	if (MyNPC != nullptr)
	{
		MyNPC->NPCState = ENPCState::ENS_Idle;
		MyNPC->ShootingSphereArea->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		MyNPC->ShootingSphereArea->SetActive(true);
		bCanSeePlayer = false;
		MyNPC->UnEquipRifle();
		StopMovement();
		SetFocus(nullptr);
		UE_LOG(LogTemp, Warning, TEXT("LOST Player"));
	}
}

void AAINPCController::IdlePatrol()
{
	if (MyNPC)
	{
		
		if (NavSys == nullptr)
		{
			return;
		}

		MyNPC->NPCState = ENPCState::ENS_Idle;
		bCanSeePlayer = false;
		
		FNavLocation Loc;

		FVector Origin = MyNPC->GetActorLocation();
		
		float Range = 5000.f;
		
		if (NavSys->GetRandomReachablePointInRadius(Origin, Range,Loc))
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Loc.Location);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("MYNavSys Random Point Not Found"));
		}
		
	}
}

void AAINPCController::ChasePlayer()
{
	if (MyNPC != nullptr && MyNPC->bISNPCAlive == false)
	{
		return;
	}
	if (MyHero != nullptr && MyHero->bIsPlayerAlive == false)
	{
		IdlePatrol();
		return;
	}
	if (bCanSeePlayer == true && MyNPC->NPCState == ENPCState::ENS_Chasing)
	{
		MoveToActor(MyHero,500);
		UE_LOG(LogTemp, Warning, TEXT("ChasePlayer is Working"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ChasePlayer is not Working"));
	}
}

void AAINPCController::ShootOut()
{
	if (MyNPC != nullptr && MyNPC->bISNPCAlive == false)
	{
		return;
	}
	if (MyHero != nullptr && MyHero->bIsPlayerAlive == false)
	{
		IdlePatrol();
		return;
	}
	
	if (MyNPC && bCanSeePlayer == true && MyNPC->bInShootingRange == true)
	{
		if (MyNPC->bReloading)
		{
			UE_LOG(LogTemp, Warning, TEXT("Still reloading"));
			return;
		}
		
		FireWeapon();
		UE_LOG(LogTemp, Warning, TEXT("Shoot out is working"));
	}
	else
	{
		MyNPC->NPCState = ENPCState::ENS_Chasing;
		UE_LOG(LogTemp, Warning, TEXT("Shoot out is not working"));
	}
}

void AAINPCController::LookAtPlayer()
{
	if (MyNPC != nullptr && MyNPC->bISNPCAlive == false)
	{
		return;
	}
	if (MyHero != nullptr && MyHero->bIsPlayerAlive == false)
	{
		IdlePatrol();
		return;
	}
	if (!MyHero || !MyNPC) return;

	if (bCanSeePlayer == true && MyNPC->NPCState == ENPCState::ENS_Chasing)
	{
		SetFocus(MyHero);
		UE_LOG(LogTemp, Warning, TEXT("LookAtPlayer is Working"));
	}
}

void AAINPCController::InvenstigateArea()
{
	if (MyNPC != nullptr && MyNPC->bISNPCAlive == false)
	{
		return;
	}
	if (MyHero != nullptr && MyHero->bIsPlayerAlive == false)
	{
		
		return;
	}
	if (bCanSeePlayer == true && MyNPC->NPCState == ENPCState::ENS_Chasing)
	{
		return;
	}
	if (bCanSeePlayer == false && MyNPC->NPCState == ENPCState::ENS_Investigate)
	{
		MoveToLocation(SoundLocation,200);
	}
}

void AAINPCController::FireWeapon()
{
	if (MyNPC != nullptr && MyNPC->bISNPCAlive)
	{
		if (MyNPC->RifleWeapon && MyNPC->RifleWeapon->CountAmmo <= 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("NPC is reloading..."));
			MyNPC->ReloadAnim();
			return;
		}
		MyNPC->FireRifle();
	}
}

void AAINPCController::DelayShooting()
{
	if (MyHero != nullptr)
	{
		MyNPC->ShootingSphereArea->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		MyNPC->ShootingSphereArea->SetActive(true);
	}
}

void AAINPCController::DeadUnPossess()
{
	ClearFocus(EAIFocusPriority::Gameplay);
	//StopMovement();
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
	
	if (MyHero)
	{
		MyHero->StealthBoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		MyHero->StealthBoxComponent->SetActive(true);
	}

	if (GetPawn())
	{
		UnPossess();
	}
}




