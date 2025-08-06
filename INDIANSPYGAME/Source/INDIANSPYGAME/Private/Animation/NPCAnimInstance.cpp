// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/NPCAnimInstance.h"

#include "NPC/AINPCCharacter.h"

void UNPCAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	NPCCharacter = Cast<AAINPCCharacter>(TryGetPawnOwner());
}

void UNPCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (NPCCharacter)
	{
		FVector Velocity = NPCCharacter->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();
		bWeaponEquipped = NPCCharacter->bWeaponInHand;

		
	}
	
}
