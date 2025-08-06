// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TakeDownComponent.generated.h"

class AAINPCCharacter;
class AHeroCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INDIANSPYGAME_API UTakeDownComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTakeDownComponent();

	UPROPERTY()
	TObjectPtr<AHeroCharacter> MyHero;

	UPROPERTY()
	TObjectPtr<AAINPCCharacter> NPCTakenDown;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Animation")
	TObjectPtr<UAnimMontage> HeroStealthMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Animation")
	TObjectPtr<UAnimMontage> NPCKillMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Time")
	float Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Time")
	float DelayTakeDownTime;
	
	UPROPERTY()
	FTimerHandle DelayTH;
	
	UPROPERTY()
	FTimerHandle DetachTH;

	UPROPERTY()
	TObjectPtr<APlayerController> MyHeroCont;
	
	void TakeDown(AAINPCCharacter* MyNPC);

    void EndTakeDown();
	void DelayTakeDown();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
