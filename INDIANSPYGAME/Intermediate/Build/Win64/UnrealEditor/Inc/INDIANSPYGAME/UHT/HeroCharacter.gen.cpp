// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hero/HeroCharacter.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroCharacter() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_ARockActor_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UParkourSysComponent_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UTakeDownComponent_NoRegister();
INDIANSPYGAME_API UEnum* Z_Construct_UEnum_INDIANSPYGAME_EWeaponState();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHeroCharacter Function OnBoxBeginOverlap ********************************
struct Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics
{
	struct HeroCharacter_eventOnBoxBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventOnBoxBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventOnBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventOnBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventOnBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((HeroCharacter_eventOnBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HeroCharacter_eventOnBoxBeginOverlap_Parms), &Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventOnBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, nullptr, "OnBoxBeginOverlap", Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::HeroCharacter_eventOnBoxBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::HeroCharacter_eventOnBoxBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHeroCharacter::execOnBoxBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AHeroCharacter Function OnBoxBeginOverlap **********************************

// ********** Begin Class AHeroCharacter Function OnBoxEndOverlap **********************************
struct Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics
{
	struct HeroCharacter_eventOnBoxEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventOnBoxEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventOnBoxEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventOnBoxEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventOnBoxEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, nullptr, "OnBoxEndOverlap", Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::HeroCharacter_eventOnBoxEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::HeroCharacter_eventOnBoxEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHeroCharacter::execOnBoxEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class AHeroCharacter Function OnBoxEndOverlap ************************************

// ********** Begin Class AHeroCharacter ***********************************************************
void AHeroCharacter::StaticRegisterNativesAHeroCharacter()
{
	UClass* Class = AHeroCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBoxBeginOverlap", &AHeroCharacter::execOnBoxBeginOverlap },
		{ "OnBoxEndOverlap", &AHeroCharacter::execOnBoxEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHeroCharacter;
UClass* AHeroCharacter::GetPrivateStaticClass()
{
	using TClass = AHeroCharacter;
	if (!Z_Registration_Info_UClass_AHeroCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroCharacter"),
			Z_Registration_Info_UClass_AHeroCharacter.InnerSingleton,
			StaticRegisterNativesAHeroCharacter,
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
	return Z_Registration_Info_UClass_AHeroCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AHeroCharacter_NoRegister()
{
	return AHeroCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHeroCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Hero/HeroCharacter.h" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoldierHead_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayer_IMC_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeDownAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RifleWeapon_MetaData[] = {
		{ "Category", "HeroCharacter" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyNPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionStimulusComp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UAIPerceptionSys\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAIPerceptionSys" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParkourSysComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//CustomComponents\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CustomComponents" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeDownComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthBoxComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Montage\n" },
#endif
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWeaponInHand_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Bool and Enum, TimerHandle\n" },
#endif
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool and Enum, TimerHandle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAim_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoFire_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToFire_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShiftPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerAlive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanTakeDownNPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "HeroCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Health \n" },
#endif
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanThrowing_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RockTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RockClass_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rock_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMenuClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMenuRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoldierHead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPlayer_IMC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShiftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TakeDownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RifleWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyNPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionStimulusComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParkourSysComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TakeDownComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealthBoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
	static void NewProp_bIsWeaponInHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponInHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponState;
	static void NewProp_bAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAim;
	static void NewProp_bShouldAutoFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoFire;
	static void NewProp_bWantsToFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToFire;
	static void NewProp_bIsReloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
	static void NewProp_bIsCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouch;
	static void NewProp_bShiftPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShiftPressed;
	static void NewProp_bIsPlayerAlive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerAlive;
	static void NewProp_bCanTakeDownNPC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTakeDownNPC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static void NewProp_bCanThrowing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanThrowing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RockTimer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RockClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rock;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeathMenuClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMenuRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeroCharacter_OnBoxBeginOverlap, "OnBoxBeginOverlap" }, // 1514858134
		{ &Z_Construct_UFunction_AHeroCharacter_OnBoxEndOverlap, "OnBoxEndOverlap" }, // 3625020759
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_SoldierHead = { "SoldierHead", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, SoldierHead), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoldierHead_MetaData), NewProp_SoldierHead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DefaultPlayer_IMC = { "DefaultPlayer_IMC", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, DefaultPlayer_IMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlayer_IMC_MetaData), NewProp_DefaultPlayer_IMC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ShiftAction = { "ShiftAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, ShiftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftAction_MetaData), NewProp_ShiftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_EquippedAction = { "EquippedAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, EquippedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedAction_MetaData), NewProp_EquippedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AimAction = { "AimAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, AimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimAction_MetaData), NewProp_AimAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAction_MetaData), NewProp_ReloadAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_TakeDownAction = { "TakeDownAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, TakeDownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeDownAction_MetaData), NewProp_TakeDownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ThrowAction = { "ThrowAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, ThrowAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowAction_MetaData), NewProp_ThrowAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_RifleWeapon = { "RifleWeapon", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, RifleWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleWeapon_MetaData), NewProp_RifleWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_MyPC = { "MyPC", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, MyPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyPC_MetaData), NewProp_MyPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_EnemyNPC = { "EnemyNPC", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, EnemyNPC), Z_Construct_UClass_AAINPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyNPC_MetaData), NewProp_EnemyNPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AIPerceptionStimulusComp = { "AIPerceptionStimulusComp", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, AIPerceptionStimulusComp), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionStimulusComp_MetaData), NewProp_AIPerceptionStimulusComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ParkourSysComp = { "ParkourSysComp", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, ParkourSysComp), Z_Construct_UClass_UParkourSysComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParkourSysComp_MetaData), NewProp_ParkourSysComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_TakeDownComp = { "TakeDownComp", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, TakeDownComp), Z_Construct_UClass_UTakeDownComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeDownComp_MetaData), NewProp_TakeDownComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_StealthBoxComponent = { "StealthBoxComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, StealthBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthBoxComponent_MetaData), NewProp_StealthBoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadMontage_MetaData), NewProp_ReloadMontage_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsWeaponInHand_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bIsWeaponInHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsWeaponInHand = { "bIsWeaponInHand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsWeaponInHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWeaponInHand_MetaData), NewProp_bIsWeaponInHand_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_WeaponState = { "WeaponState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, WeaponState), Z_Construct_UEnum_INDIANSPYGAME_EWeaponState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponState_MetaData), NewProp_WeaponState_MetaData) }; // 442556823
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bAim_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bAim = { "bAim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAim_MetaData), NewProp_bAim_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldAutoFire_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bShouldAutoFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldAutoFire = { "bShouldAutoFire", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldAutoFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAutoFire_MetaData), NewProp_bShouldAutoFire_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bWantsToFire_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bWantsToFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bWantsToFire = { "bWantsToFire", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bWantsToFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToFire_MetaData), NewProp_bWantsToFire_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsReloading_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bIsReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReloading_MetaData), NewProp_bIsReloading_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsCrouch_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bIsCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsCrouch = { "bIsCrouch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouch_MetaData), NewProp_bIsCrouch_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShiftPressed_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bShiftPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShiftPressed = { "bShiftPressed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShiftPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShiftPressed_MetaData), NewProp_bShiftPressed_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsPlayerAlive_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bIsPlayerAlive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsPlayerAlive = { "bIsPlayerAlive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsPlayerAlive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerAlive_MetaData), NewProp_bIsPlayerAlive_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanTakeDownNPC_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bCanTakeDownNPC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanTakeDownNPC = { "bCanTakeDownNPC", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanTakeDownNPC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanTakeDownNPC_MetaData), NewProp_bCanTakeDownNPC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_FireHandle = { "FireHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, FireHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireHandle_MetaData), NewProp_FireHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ReloadHandle = { "ReloadHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, ReloadHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadHandle_MetaData), NewProp_ReloadHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanThrowing_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bCanThrowing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanThrowing = { "bCanThrowing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanThrowing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanThrowing_MetaData), NewProp_bCanThrowing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_RockTimer = { "RockTimer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, RockTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RockTimer_MetaData), NewProp_RockTimer_MetaData) }; // 3834150579
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_RockClass = { "RockClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, RockClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARockActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RockClass_MetaData), NewProp_RockClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Rock = { "Rock", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, Rock), Z_Construct_UClass_ARockActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rock_MetaData), NewProp_Rock_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DeathMenuClass = { "DeathMenuClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, DeathMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMenuClass_MetaData), NewProp_DeathMenuClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DeathMenuRef = { "DeathMenuRef", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, DeathMenuRef), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMenuRef_MetaData), NewProp_DeathMenuRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_SoldierHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DefaultPlayer_IMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ShiftAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_EquippedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AimAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ReloadAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_TakeDownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ThrowAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_RifleWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_MyPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_EnemyNPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AIPerceptionStimulusComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ParkourSysComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_TakeDownComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_StealthBoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ReloadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsWeaponInHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_WeaponState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldAutoFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bWantsToFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShiftPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsPlayerAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanTakeDownNPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_FireHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ReloadHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanThrowing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_RockTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_RockClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Rock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DeathMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DeathMenuRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeroCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_INDIANSPYGAME,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroCharacter_Statics::ClassParams = {
	&AHeroCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHeroCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeroCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeroCharacter()
{
	if (!Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton, Z_Construct_UClass_AHeroCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroCharacter);
AHeroCharacter::~AHeroCharacter() {}
// ********** End Class AHeroCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h__Script_INDIANSPYGAME_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeroCharacter, AHeroCharacter::StaticClass, TEXT("AHeroCharacter"), &Z_Registration_Info_UClass_AHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroCharacter), 352313220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h__Script_INDIANSPYGAME_2455147613(TEXT("/Script/INDIANSPYGAME"),
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h__Script_INDIANSPYGAME_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h__Script_INDIANSPYGAME_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
