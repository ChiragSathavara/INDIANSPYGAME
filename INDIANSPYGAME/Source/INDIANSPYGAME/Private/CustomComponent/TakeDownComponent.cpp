// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomComponent/TakeDownComponent.h"

#include "Animation/HeroAnimInstance.h"
#include "Animation/NPCAnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "Hero/HeroCharacter.h"
#include "NPC/AINPCCharacter.h"
#include "NPC/AINPCController.h"

// Sets default values for this component's properties
UTakeDownComponent::UTakeDownComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	Time = 1;
	DelayTakeDownTime = 0.4;
	// ...
}

void UTakeDownComponent::TakeDown(AAINPCCharacter* MyNPC)
{
	if (MyNPC != nullptr)
	{
		NPCTakenDown = MyNPC;
		MyHero = Cast<AHeroCharacter>(this->GetOwner());
		MyHeroCont = Cast<APlayerController>(MyHero->GetController());
		if (MyHero != nullptr)
		{
            UHeroAnimInstance* MyHeroAnim = Cast<UHeroAnimInstance>(MyHero->GetMesh()->GetAnimInstance());
			UNPCAnimInstance* MyNPCAnim = Cast<UNPCAnimInstance>(NPCTakenDown->GetMesh()->GetAnimInstance());
			if (MyHeroAnim != nullptr && MyNPCAnim != nullptr)
			{
				AAINPCController* MyController = Cast<AAINPCController>(MyNPC->GetController());
				MyNPC->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				MyNPC->GetCapsuleComponent()->SetSimulatePhysics(false);
				MyNPC->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				MyNPC->GetMesh()->SetSimulatePhysics(false);
				MyHero->DisableInput(MyHeroCont);
				if (MyController != nullptr)
				{
					MyController->DeadUnPossess();
				}
				MyNPCAnim->Montage_Play(NPCKillMontage,1);
				MyHeroAnim->Montage_Play(HeroStealthMontage,1);
				GetWorld()->GetTimerManager().SetTimer(DelayTH,this,&UTakeDownComponent::DelayTakeDown,DelayTakeDownTime,false);
				GetWorld()->GetTimerManager().SetTimer(DetachTH,this,&UTakeDownComponent::EndTakeDown,Time,false);
			}
			else
			{
				UE_LOG(LogTemp,Warning,TEXT("Nullptr spotted in TakeDown"));
			}
			
		}
		else
		{
			UE_LOG(LogTemp,Warning,TEXT("Hero is nullptr"));
		}
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("NPC is nullptr (TakeDown Function)"));
	}
}

void UTakeDownComponent::EndTakeDown()
{
	if (NPCTakenDown != nullptr)
	{
		NPCTakenDown->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		NPCTakenDown->Die();
		NPCTakenDown = nullptr;
		if (MyHero != nullptr && MyHeroCont != nullptr)
		{
			MyHero->EnableInput(MyHeroCont);
		}
	}
}

void UTakeDownComponent::DelayTakeDown()
{
	if (NPCTakenDown != nullptr)
	{
		NPCTakenDown->AttachToComponent(MyHero->GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale,FName("TakeDownSocket"));
	}
}

// Called when the game starts
void UTakeDownComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}
