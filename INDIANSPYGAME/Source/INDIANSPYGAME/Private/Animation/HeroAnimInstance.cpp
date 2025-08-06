// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/HeroAnimInstance.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Hero/HeroCharacter.h"

void UHeroAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	HeroCharacter = Cast<AHeroCharacter>(TryGetPawnOwner());
}

void UHeroAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (HeroCharacter)
	{
		FVector Velocity = HeroCharacter->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();
		bInHandWeapon = HeroCharacter->bIsWeaponInHand;
		bAimRifle = HeroCharacter->bAim;
		bIsPlayerCrouch = HeroCharacter->bIsCrouch;
		bIsJumping = HeroCharacter->GetCharacterMovement()->IsFalling();
	}
}
