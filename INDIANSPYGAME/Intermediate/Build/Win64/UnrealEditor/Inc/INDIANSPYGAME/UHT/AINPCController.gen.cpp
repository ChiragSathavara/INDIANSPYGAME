// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPC/AINPCController.h"
#include "Engine/TimerHandle.h"
#include "Perception/AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAINPCController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCController();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCController_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemV1_NoRegister();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAINPCController Function ChasePlayer ************************************
struct Z_Construct_UFunction_AAINPCController_ChasePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCController_ChasePlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCController, nullptr, "ChasePlayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_ChasePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCController_ChasePlayer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAINPCController_ChasePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCController_ChasePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCController::execChasePlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChasePlayer();
	P_NATIVE_END;
}
// ********** End Class AAINPCController Function ChasePlayer **************************************

// ********** Begin Class AAINPCController Function DeadUnPossess **********************************
struct Z_Construct_UFunction_AAINPCController_DeadUnPossess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCController_DeadUnPossess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCController, nullptr, "DeadUnPossess", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_DeadUnPossess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCController_DeadUnPossess_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAINPCController_DeadUnPossess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCController_DeadUnPossess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCController::execDeadUnPossess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeadUnPossess();
	P_NATIVE_END;
}
// ********** End Class AAINPCController Function DeadUnPossess ************************************

// ********** Begin Class AAINPCController Function FireWeapon *************************************
struct Z_Construct_UFunction_AAINPCController_FireWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCController_FireWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCController, nullptr, "FireWeapon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_FireWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCController_FireWeapon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAINPCController_FireWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCController_FireWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCController::execFireWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireWeapon();
	P_NATIVE_END;
}
// ********** End Class AAINPCController Function FireWeapon ***************************************

// ********** Begin Class AAINPCController Function IdlePatrol *************************************
struct Z_Construct_UFunction_AAINPCController_IdlePatrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCController_IdlePatrol_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCController, nullptr, "IdlePatrol", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_IdlePatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCController_IdlePatrol_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAINPCController_IdlePatrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCController_IdlePatrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCController::execIdlePatrol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IdlePatrol();
	P_NATIVE_END;
}
// ********** End Class AAINPCController Function IdlePatrol ***************************************

// ********** Begin Class AAINPCController Function InvenstigateArea *******************************
struct Z_Construct_UFunction_AAINPCController_InvenstigateArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCController_InvenstigateArea_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCController, nullptr, "InvenstigateArea", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_InvenstigateArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCController_InvenstigateArea_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAINPCController_InvenstigateArea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCController_InvenstigateArea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCController::execInvenstigateArea)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvenstigateArea();
	P_NATIVE_END;
}
// ********** End Class AAINPCController Function InvenstigateArea *********************************

// ********** Begin Class AAINPCController Function LookAtPlayer ***********************************
struct Z_Construct_UFunction_AAINPCController_LookAtPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCController_LookAtPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCController, nullptr, "LookAtPlayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_LookAtPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCController_LookAtPlayer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAINPCController_LookAtPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCController_LookAtPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCController::execLookAtPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LookAtPlayer();
	P_NATIVE_END;
}
// ********** End Class AAINPCController Function LookAtPlayer *************************************

// ********** Begin Class AAINPCController Function OnTargetDetected *******************************
struct Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics
{
	struct AINPCController_eventOnTargetDetected_Parms
	{
		AActor* TargetActor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCController_eventOnTargetDetected_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCController_eventOnTargetDetected_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stimulus_MetaData), NewProp_Stimulus_MetaData) }; // 1267494880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCController, nullptr, "OnTargetDetected", Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::AINPCController_eventOnTargetDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::AINPCController_eventOnTargetDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAINPCController_OnTargetDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCController_OnTargetDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCController::execOnTargetDetected)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDetected(Z_Param_TargetActor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// ********** End Class AAINPCController Function OnTargetDetected *********************************

// ********** Begin Class AAINPCController Function ShootOut ***************************************
struct Z_Construct_UFunction_AAINPCController_ShootOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCController_ShootOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCController, nullptr, "ShootOut", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCController_ShootOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCController_ShootOut_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAINPCController_ShootOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCController_ShootOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCController::execShootOut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShootOut();
	P_NATIVE_END;
}
// ********** End Class AAINPCController Function ShootOut *****************************************

// ********** Begin Class AAINPCController *********************************************************
void AAINPCController::StaticRegisterNativesAAINPCController()
{
	UClass* Class = AAINPCController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChasePlayer", &AAINPCController::execChasePlayer },
		{ "DeadUnPossess", &AAINPCController::execDeadUnPossess },
		{ "FireWeapon", &AAINPCController::execFireWeapon },
		{ "IdlePatrol", &AAINPCController::execIdlePatrol },
		{ "InvenstigateArea", &AAINPCController::execInvenstigateArea },
		{ "LookAtPlayer", &AAINPCController::execLookAtPlayer },
		{ "OnTargetDetected", &AAINPCController::execOnTargetDetected },
		{ "ShootOut", &AAINPCController::execShootOut },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAINPCController;
UClass* AAINPCController::GetPrivateStaticClass()
{
	using TClass = AAINPCController;
	if (!Z_Registration_Info_UClass_AAINPCController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AINPCController"),
			Z_Registration_Info_UClass_AAINPCController.InnerSingleton,
			StaticRegisterNativesAAINPCController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AAINPCController.InnerSingleton;
}
UClass* Z_Construct_UClass_AAINPCController_NoRegister()
{
	return AAINPCController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAINPCController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NPC/AINPCController.h" },
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyNPC_MetaData[] = {
		{ "Category", "AINPCController" },
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrowdFollowingComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISenseSight_MetaData[] = {
		{ "Category", "AINPCController" },
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISenseHearing_MetaData[] = {
		{ "Category", "AINPCController" },
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyHero_MetaData[] = {
		{ "Category", "AINPCController" },
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnEquipTH_MetaData[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootTH_MetaData[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundLocation_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSeePlayer_MetaData[] = {
		{ "Category", "AINPCController" },
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavSys_MetaData[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyNPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrowdFollowingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AISenseSight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AISenseHearing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyHero;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnEquipTH;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShootTH;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundLocation;
	static void NewProp_bCanSeePlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSeePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavSys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAINPCController_ChasePlayer, "ChasePlayer" }, // 3265971761
		{ &Z_Construct_UFunction_AAINPCController_DeadUnPossess, "DeadUnPossess" }, // 2683711931
		{ &Z_Construct_UFunction_AAINPCController_FireWeapon, "FireWeapon" }, // 973427247
		{ &Z_Construct_UFunction_AAINPCController_IdlePatrol, "IdlePatrol" }, // 2646347492
		{ &Z_Construct_UFunction_AAINPCController_InvenstigateArea, "InvenstigateArea" }, // 3887743496
		{ &Z_Construct_UFunction_AAINPCController_LookAtPlayer, "LookAtPlayer" }, // 940159133
		{ &Z_Construct_UFunction_AAINPCController_OnTargetDetected, "OnTargetDetected" }, // 3495063107
		{ &Z_Construct_UFunction_AAINPCController_ShootOut, "ShootOut" }, // 2473571087
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAINPCController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_MyNPC = { "MyNPC", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, MyNPC), Z_Construct_UClass_AAINPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyNPC_MetaData), NewProp_MyNPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_CrowdFollowingComp = { "CrowdFollowingComp", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, CrowdFollowingComp), Z_Construct_UClass_UCrowdFollowingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrowdFollowingComp_MetaData), NewProp_CrowdFollowingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_PerceptionComp = { "PerceptionComp", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, PerceptionComp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComp_MetaData), NewProp_PerceptionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_AISenseSight = { "AISenseSight", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, AISenseSight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISenseSight_MetaData), NewProp_AISenseSight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_AISenseHearing = { "AISenseHearing", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, AISenseHearing), Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISenseHearing_MetaData), NewProp_AISenseHearing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_MyHero = { "MyHero", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, MyHero), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyHero_MetaData), NewProp_MyHero_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_UnEquipTH = { "UnEquipTH", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, UnEquipTH), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnEquipTH_MetaData), NewProp_UnEquipTH_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_ShootTH = { "ShootTH", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, ShootTH), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootTH_MetaData), NewProp_ShootTH_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_SoundLocation = { "SoundLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, SoundLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundLocation_MetaData), NewProp_SoundLocation_MetaData) };
void Z_Construct_UClass_AAINPCController_Statics::NewProp_bCanSeePlayer_SetBit(void* Obj)
{
	((AAINPCController*)Obj)->bCanSeePlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_bCanSeePlayer = { "bCanSeePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAINPCController), &Z_Construct_UClass_AAINPCController_Statics::NewProp_bCanSeePlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSeePlayer_MetaData), NewProp_bCanSeePlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCController_Statics::NewProp_NavSys = { "NavSys", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCController, NavSys), Z_Construct_UClass_UNavigationSystemV1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavSys_MetaData), NewProp_NavSys_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAINPCController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_MyNPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_CrowdFollowingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_PerceptionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_AISenseSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_AISenseHearing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_MyHero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_UnEquipTH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_ShootTH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_SoundLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_bCanSeePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCController_Statics::NewProp_NavSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAINPCController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAINPCController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_INDIANSPYGAME,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAINPCController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAINPCController_Statics::ClassParams = {
	&AAINPCController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAINPCController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAINPCController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAINPCController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAINPCController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAINPCController()
{
	if (!Z_Registration_Info_UClass_AAINPCController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAINPCController.OuterSingleton, Z_Construct_UClass_AAINPCController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAINPCController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAINPCController);
AAINPCController::~AAINPCController() {}
// ********** End Class AAINPCController ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h__Script_INDIANSPYGAME_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAINPCController, AAINPCController::StaticClass, TEXT("AAINPCController"), &Z_Registration_Info_UClass_AAINPCController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAINPCController), 614567444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h__Script_INDIANSPYGAME_2899130998(TEXT("/Script/INDIANSPYGAME"),
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h__Script_INDIANSPYGAME_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h__Script_INDIANSPYGAME_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
