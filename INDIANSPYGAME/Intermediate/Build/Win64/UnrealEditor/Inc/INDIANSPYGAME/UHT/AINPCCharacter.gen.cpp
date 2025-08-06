// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPC/AINPCCharacter.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAINPCCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCController_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
INDIANSPYGAME_API UEnum* Z_Construct_UEnum_INDIANSPYGAME_ENPCState();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAINPCCharacter Function OnSphereBeginOverlap ****************************
struct Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics
{
	struct AINPCCharacter_eventOnSphereBeginOverlap_Parms
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
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCCharacter_eventOnSphereBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCCharacter_eventOnSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCCharacter_eventOnSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCCharacter_eventOnSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((AINPCCharacter_eventOnSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AINPCCharacter_eventOnSphereBeginOverlap_Parms), &Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCCharacter_eventOnSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCCharacter, nullptr, "OnSphereBeginOverlap", Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::AINPCCharacter_eventOnSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::AINPCCharacter_eventOnSphereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCCharacter::execOnSphereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AAINPCCharacter Function OnSphereBeginOverlap ******************************

// ********** Begin Class AAINPCCharacter Function OnSphereEndOverlap ******************************
struct Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics
{
	struct AINPCCharacter_eventOnSphereEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCCharacter_eventOnSphereEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCCharacter_eventOnSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCCharacter_eventOnSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AINPCCharacter_eventOnSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAINPCCharacter, nullptr, "OnSphereEndOverlap", Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::AINPCCharacter_eventOnSphereEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::AINPCCharacter_eventOnSphereEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAINPCCharacter::execOnSphereEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class AAINPCCharacter Function OnSphereEndOverlap ********************************

// ********** Begin Class AAINPCCharacter **********************************************************
void AAINPCCharacter::StaticRegisterNativesAAINPCCharacter()
{
	UClass* Class = AAINPCCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSphereBeginOverlap", &AAINPCCharacter::execOnSphereBeginOverlap },
		{ "OnSphereEndOverlap", &AAINPCCharacter::execOnSphereEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAINPCCharacter;
UClass* AAINPCCharacter::GetPrivateStaticClass()
{
	using TClass = AAINPCCharacter;
	if (!Z_Registration_Info_UClass_AAINPCCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AINPCCharacter"),
			Z_Registration_Info_UClass_AAINPCCharacter.InnerSingleton,
			StaticRegisterNativesAAINPCCharacter,
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
	return Z_Registration_Info_UClass_AAINPCCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister()
{
	return AAINPCCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAINPCCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/AINPCCharacter.h" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RifleWeaponClass_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RifleWeapon_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingSphereArea_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponInHand_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bISNPCAlive_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCState_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyNPCCont_MetaData[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedHero_MetaData[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReloading_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInShootingRange_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RifleWeaponClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RifleWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootingSphereArea;
	static void NewProp_bWeaponInHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponInHand;
	static void NewProp_bISNPCAlive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bISNPCAlive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NPCState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyNPCCont;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedHero;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadTimer;
	static void NewProp_bReloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloading;
	static void NewProp_bInShootingRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShootingRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAINPCCharacter_OnSphereBeginOverlap, "OnSphereBeginOverlap" }, // 1260148776
		{ &Z_Construct_UFunction_AAINPCCharacter_OnSphereEndOverlap, "OnSphereEndOverlap" }, // 69765586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAINPCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_RifleWeaponClass = { "RifleWeaponClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, RifleWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleWeaponClass_MetaData), NewProp_RifleWeaponClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_RifleWeapon = { "RifleWeapon", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, RifleWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleWeapon_MetaData), NewProp_RifleWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_ShootingSphereArea = { "ShootingSphereArea", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, ShootingSphereArea), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingSphereArea_MetaData), NewProp_ShootingSphereArea_MetaData) };
void Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bWeaponInHand_SetBit(void* Obj)
{
	((AAINPCCharacter*)Obj)->bWeaponInHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bWeaponInHand = { "bWeaponInHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAINPCCharacter), &Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bWeaponInHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeaponInHand_MetaData), NewProp_bWeaponInHand_MetaData) };
void Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bISNPCAlive_SetBit(void* Obj)
{
	((AAINPCCharacter*)Obj)->bISNPCAlive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bISNPCAlive = { "bISNPCAlive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAINPCCharacter), &Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bISNPCAlive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bISNPCAlive_MetaData), NewProp_bISNPCAlive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_NPCState = { "NPCState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, NPCState), Z_Construct_UEnum_INDIANSPYGAME_ENPCState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCState_MetaData), NewProp_NPCState_MetaData) }; // 3612725557
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadMontage_MetaData), NewProp_ReloadMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_MyNPCCont = { "MyNPCCont", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, MyNPCCont), Z_Construct_UClass_AAINPCController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyNPCCont_MetaData), NewProp_MyNPCCont_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_OverlappedHero = { "OverlappedHero", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, OverlappedHero), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedHero_MetaData), NewProp_OverlappedHero_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_ReloadTimer = { "ReloadTimer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, ReloadTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadTimer_MetaData), NewProp_ReloadTimer_MetaData) }; // 3834150579
void Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bReloading_SetBit(void* Obj)
{
	((AAINPCCharacter*)Obj)->bReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bReloading = { "bReloading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAINPCCharacter), &Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReloading_MetaData), NewProp_bReloading_MetaData) };
void Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bInShootingRange_SetBit(void* Obj)
{
	((AAINPCCharacter*)Obj)->bInShootingRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bInShootingRange = { "bInShootingRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAINPCCharacter), &Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bInShootingRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInShootingRange_MetaData), NewProp_bInShootingRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAINPCCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_RifleWeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_RifleWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_ShootingSphereArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bWeaponInHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bISNPCAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_NPCState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_ReloadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_MyNPCCont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_OverlappedHero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_ReloadTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bInShootingRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAINPCCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAINPCCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_INDIANSPYGAME,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAINPCCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAINPCCharacter_Statics::ClassParams = {
	&AAINPCCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAINPCCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAINPCCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAINPCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAINPCCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAINPCCharacter()
{
	if (!Z_Registration_Info_UClass_AAINPCCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAINPCCharacter.OuterSingleton, Z_Construct_UClass_AAINPCCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAINPCCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAINPCCharacter);
AAINPCCharacter::~AAINPCCharacter() {}
// ********** End Class AAINPCCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h__Script_INDIANSPYGAME_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAINPCCharacter, AAINPCCharacter::StaticClass, TEXT("AAINPCCharacter"), &Z_Registration_Info_UClass_AAINPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAINPCCharacter), 1870956048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h__Script_INDIANSPYGAME_1144100834(TEXT("/Script/INDIANSPYGAME"),
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h__Script_INDIANSPYGAME_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h__Script_INDIANSPYGAME_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
