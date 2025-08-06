#pragma once

#include "CoreMinimal.h"
#include "NPCState.generated.h"


UENUM(BlueprintType)
enum ENPCState
{

	ENS_Idle UMETA(DisplayName = "Idle"),
	ENS_Chasing UMETA(DisplayName = "Chasing"),
	ENS_Shooting UMETA(DisplayName = "Shooting"),
	ENS_Investigate UMETA(DisplayName = "Investigate")
};