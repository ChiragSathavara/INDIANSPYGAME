// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/HeroAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UHeroAnimInstance();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHeroAnimInstance ********************************************************
void UHeroAnimInstance::StaticRegisterNativesUHeroAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeroAnimInstance;
UClass* UHeroAnimInstance::GetPrivateStaticClass()
{
	using TClass = UHeroAnimInstance;
	if (!Z_Registration_Info_UClass_UHeroAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroAnimInstance"),
			Z_Registration_Info_UClass_UHeroAnimInstance.InnerSingleton,
			StaticRegisterNativesUHeroAnimInstance,
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
	return Z_Registration_Info_UClass_UHeroAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister()
{
	return UHeroAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHeroAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/HeroAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroCharacter_MetaData[] = {
		{ "Category", "Animation | Data" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Animation | Data" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInHandWeapon_MetaData[] = {
		{ "Category", "Animation | Data" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAimRifle_MetaData[] = {
		{ "Category", "Animation | Data" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerCrouch_MetaData[] = {
		{ "Category", "Animation | Data" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[] = {
		{ "Category", "Animation | Data" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bInHandWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHandWeapon;
	static void NewProp_bAimRifle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimRifle;
	static void NewProp_bIsPlayerCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerCrouch;
	static void NewProp_bIsJumping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_HeroCharacter = { "HeroCharacter", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroAnimInstance, HeroCharacter), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroCharacter_MetaData), NewProp_HeroCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bInHandWeapon_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bInHandWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bInHandWeapon = { "bInHandWeapon", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bInHandWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInHandWeapon_MetaData), NewProp_bInHandWeapon_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bAimRifle_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bAimRifle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bAimRifle = { "bAimRifle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bAimRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAimRifle_MetaData), NewProp_bAimRifle_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bIsPlayerCrouch_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bIsPlayerCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bIsPlayerCrouch = { "bIsPlayerCrouch", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bIsPlayerCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerCrouch_MetaData), NewProp_bIsPlayerCrouch_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bIsJumping_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bIsJumping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJumping_MetaData), NewProp_bIsJumping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_HeroCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bInHandWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bAimRifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bIsPlayerCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bIsJumping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_INDIANSPYGAME,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroAnimInstance_Statics::ClassParams = {
	&UHeroAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroAnimInstance()
{
	if (!Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton, Z_Construct_UClass_UHeroAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton;
}
UHeroAnimInstance::UHeroAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroAnimInstance);
UHeroAnimInstance::~UHeroAnimInstance() {}
// ********** End Class UHeroAnimInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_HeroAnimInstance_h__Script_INDIANSPYGAME_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroAnimInstance, UHeroAnimInstance::StaticClass, TEXT("UHeroAnimInstance"), &Z_Registration_Info_UClass_UHeroAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroAnimInstance), 318324933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_HeroAnimInstance_h__Script_INDIANSPYGAME_652455499(TEXT("/Script/INDIANSPYGAME"),
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_HeroAnimInstance_h__Script_INDIANSPYGAME_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_HeroAnimInstance_h__Script_INDIANSPYGAME_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
