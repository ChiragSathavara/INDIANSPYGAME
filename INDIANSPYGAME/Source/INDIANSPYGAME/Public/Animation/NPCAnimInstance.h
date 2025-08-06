// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "NPCAnimInstance.generated.h"

/**
 * 
 */
class AAINPCCharacter;
UCLASS()
class INDIANSPYGAME_API UNPCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite,Category="Animation | Data")
	TObjectPtr<AAINPCCharacter>NPCCharacter;

	UPROPERTY(BlueprintReadWrite,Category="Animation | Data")
	float Speed;

	UPROPERTY(BlueprintReadWrite,Category="Animation | Data")
	bool bWeaponEquipped;


	
protected:
	
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
