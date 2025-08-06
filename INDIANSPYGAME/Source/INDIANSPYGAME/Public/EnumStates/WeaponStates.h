#pragma once

#include "CoreMinimal.h"
#include "WeaponStates.generated.h"


UENUM(BlueprintType)
enum EWeaponState
{
	EWS_UnEquipped UMETA(DisplayName = "UnEquipped"),
	EWS_Equipped UMETA(DisplayName = "Equipped")
};