// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPC/AINPCCharacter.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAINPCCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCController_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
INDIANSPYGAME_API UEnum* Z_Construct_UEnum_INDIANSPYGAME_ENPCState();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAINPCCharacter **********************************************************
void AAINPCCharacter::StaticRegisterNativesAAINPCCharacter()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShootinArea_MetaData[] = {
		{ "Category", "AINPCCharacter" },
		{ "ModuleRelativePath", "Public/NPC/AINPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RifleWeaponClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RifleWeapon;
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
	static void NewProp_bShootinArea_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShootinArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAINPCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_RifleWeaponClass = { "RifleWeaponClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, RifleWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleWeaponClass_MetaData), NewProp_RifleWeaponClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_RifleWeapon = { "RifleWeapon", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAINPCCharacter, RifleWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleWeapon_MetaData), NewProp_RifleWeapon_MetaData) };
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
void Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bShootinArea_SetBit(void* Obj)
{
	((AAINPCCharacter*)Obj)->bShootinArea = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bShootinArea = { "bShootinArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAINPCCharacter), &Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bShootinArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShootinArea_MetaData), NewProp_bShootinArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAINPCCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_RifleWeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_RifleWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bWeaponInHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bISNPCAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_NPCState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_ReloadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_MyNPCCont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_OverlappedHero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_ReloadTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAINPCCharacter_Statics::NewProp_bShootinArea,
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
	nullptr,
	Z_Construct_UClass_AAINPCCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_AAINPCCharacter, AAINPCCharacter::StaticClass, TEXT("AAINPCCharacter"), &Z_Registration_Info_UClass_AAINPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAINPCCharacter), 3432825012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h__Script_INDIANSPYGAME_565822563(TEXT("/Script/INDIANSPYGAME"),
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h__Script_INDIANSPYGAME_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h__Script_INDIANSPYGAME_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
