// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HeroAnimInstance.generated.h"

/**
 * 
 */
class AHeroCharacter;
UCLASS()
class INDIANSPYGAME_API UHeroAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

	
public:

	UPROPERTY(BlueprintReadWrite,Category="Animation | Data")
	TObjectPtr<AHeroCharacter>HeroCharacter;

	UPROPERTY(BlueprintReadWrite,Category="Animation | Data")
	float Speed;

	UPROPERTY(BlueprintReadWrite,Category="Animation | Data")
	bool bInHandWeapon;

	UPROPERTY(BlueprintReadWrite,Category="Animation | Data")
	bool bAimRifle;

	UPROPERTY(BlueprintReadWrite,Category="Animation | Data")
	bool bIsPlayerCrouch;

	UPROPERTY(BlueprintReadWrite,Category="Animation | Data")
	bool bIsJumping;
	
protected:
	
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
