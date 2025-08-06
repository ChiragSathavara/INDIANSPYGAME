// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ParkourSysComponent.generated.h"


class AHeroCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INDIANSPYGAME_API UParkourSysComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UParkourSysComponent();

	
	void DoVault();

	void PlayVaultAnim(UAnimMontage* Montage);

	void ResetVault();
	
	bool DoLineTrace(FHitResult& HitResult,FVector StartLoc,FVector EndLoc);
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	
	UPROPERTY()
	TObjectPtr<AHeroCharacter> Hero;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Animation")
	TObjectPtr<UAnimMontage> VaultAnim;
	
	UPROPERTY()
	FVector WallHitLoc;

	UPROPERTY()
	FVector WallTopHitLoc;

	
public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
