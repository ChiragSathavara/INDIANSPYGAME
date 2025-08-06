// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomComponent/ParkourSysComponent.h"
#include "Animation/HeroAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Hero/HeroCharacter.h"

// Sets default values for this component's properties
UParkourSysComponent::UParkourSysComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UParkourSysComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Hero = Cast<AHeroCharacter>(GetOwner());
}

void UParkourSysComponent::DoVault()
{
	if (Hero)
	{
		FVector StartLoc = Hero->GetActorLocation();
		FVector EndLoc = StartLoc + (Hero->GetActorForwardVector() * 130);

		FHitResult DetectedWallHitResult;
		
		bool bWallDetected = DoLineTrace(DetectedWallHitResult,StartLoc,EndLoc);

		DrawDebugLine(GetWorld(),StartLoc,EndLoc,FColor::Red,false,4,0,1);
		
		if (bWallDetected)
		{
			DrawDebugPoint(GetWorld(),DetectedWallHitResult.ImpactPoint,10,FColor::Green,false,4,0);

			WallHitLoc = DetectedWallHitResult.ImpactPoint;
			
			FVector EyeTraceStartLoc = Hero->GetActorLocation();
			EyeTraceStartLoc.Z += 75;
			FVector EyeTraceEndLoc = EyeTraceStartLoc + (Hero->GetActorForwardVector() * 130);

			FHitResult EyeTraceHitResult;

			bool bEyeHeightWallDetected = DoLineTrace(EyeTraceHitResult,EyeTraceStartLoc,EyeTraceEndLoc);

			DrawDebugLine(GetWorld(),EyeTraceStartLoc,EyeTraceEndLoc,FColor::Red,false,4,0,1);
			
			if (bEyeHeightWallDetected)
			{
				DrawDebugPoint(GetWorld(),EyeTraceHitResult.ImpactPoint,10,FColor::Green,false,4,0);
				Hero->Jump();
			}
			else
			{
				FVector WallTopTraceStartLoc = WallHitLoc;
				WallTopTraceStartLoc.Z += 75;
				FVector WallTopTraceEndLoc = WallTopTraceStartLoc;
				WallTopTraceEndLoc.Z -= 200;
				
				FHitResult WallTopTraceHitResult;

				bool bWallTopDetected = DoLineTrace(WallTopTraceHitResult,WallTopTraceStartLoc,WallTopTraceEndLoc);

				DrawDebugLine(GetWorld(),WallTopTraceStartLoc,WallTopTraceEndLoc,FColor::Red,false,4,0,1);
				
				if (bWallTopDetected)
				{
					DrawDebugPoint(GetWorld(),WallTopTraceHitResult.ImpactPoint,10,FColor::Green,false,4,0);
					
					WallTopHitLoc = WallTopTraceHitResult.ImpactPoint;

					float ActorLocZ = Hero->GetActorLocation().Z;

					float WallTopLocZ = WallTopHitLoc.Z;

					float HeightDifference = ActorLocZ - WallTopLocZ;

					if (HeightDifference <= 50)
					{
						UE_LOG(LogTemp,Warning,TEXT("Hero Can Vault"));
						PlayVaultAnim(VaultAnim);
					}
					else
					{
						Hero->Jump();
						UE_LOG(LogTemp,Warning,TEXT("Hero Can't Vault"));
					}
				}
			}
		}
		else
		{
			Hero->Jump();
		}
	}
}


void UParkourSysComponent::PlayVaultAnim(UAnimMontage* Montage)
{
	UHeroAnimInstance* myHeroAnim = Cast<UHeroAnimInstance>(Hero->GetMesh()->GetAnimInstance());
	if (myHeroAnim && Hero)
	{
		myHeroAnim->Montage_Play(Montage);
		Hero->GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		FTimerHandle VaultTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(VaultTimerHandle,this,&UParkourSysComponent::ResetVault,0.5,false);
		
	}
}


void UParkourSysComponent::ResetVault()
{
	if (Hero)
	{
		Hero->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	}
}


bool UParkourSysComponent::DoLineTrace(FHitResult& HitResult, FVector StartLoc, FVector EndLoc)
{
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(Hero);
	
	return GetWorld()->LineTraceSingleByChannel(HitResult,StartLoc,EndLoc,ECC_GameTraceChannel1,Params);
	
}

