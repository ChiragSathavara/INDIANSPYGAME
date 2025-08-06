// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/NPCAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNPCAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UNPCAnimInstance();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UNPCAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNPCAnimInstance *********************************************************
void UNPCAnimInstance::StaticRegisterNativesUNPCAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNPCAnimInstance;
UClass* UNPCAnimInstance::GetPrivateStaticClass()
{
	using TClass = UNPCAnimInstance;
	if (!Z_Registration_Info_UClass_UNPCAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NPCAnimInstance"),
			Z_Registration_Info_UClass_UNPCAnimInstance.InnerSingleton,
			StaticRegisterNativesUNPCAnimInstance,
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
	return Z_Registration_Info_UClass_UNPCAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UNPCAnimInstance_NoRegister()
{
	return UNPCAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNPCAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/NPCAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/NPCAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCCharacter_MetaData[] = {
		{ "Category", "Animation | Data" },
		{ "ModuleRelativePath", "Public/Animation/NPCAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Animation | Data" },
		{ "ModuleRelativePath", "Public/Animation/NPCAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponEquipped_MetaData[] = {
		{ "Category", "Animation | Data" },
		{ "ModuleRelativePath", "Public/Animation/NPCAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bWeaponEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponEquipped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCAnimInstance_Statics::NewProp_NPCCharacter = { "NPCCharacter", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCAnimInstance, NPCCharacter), Z_Construct_UClass_AAINPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCCharacter_MetaData), NewProp_NPCCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UNPCAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit(void* Obj)
{
	((UNPCAnimInstance*)Obj)->bWeaponEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCAnimInstance_Statics::NewProp_bWeaponEquipped = { "bWeaponEquipped", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNPCAnimInstance), &Z_Construct_UClass_UNPCAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeaponEquipped_MetaData), NewProp_bWeaponEquipped_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCAnimInstance_Statics::NewProp_NPCCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCAnimInstance_Statics::NewProp_bWeaponEquipped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_INDIANSPYGAME,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCAnimInstance_Statics::ClassParams = {
	&UNPCAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNPCAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCAnimInstance()
{
	if (!Z_Registration_Info_UClass_UNPCAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCAnimInstance.OuterSingleton, Z_Construct_UClass_UNPCAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCAnimInstance.OuterSingleton;
}
UNPCAnimInstance::UNPCAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCAnimInstance);
UNPCAnimInstance::~UNPCAnimInstance() {}
// ********** End Class UNPCAnimInstance ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h__Script_INDIANSPYGAME_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCAnimInstance, UNPCAnimInstance::StaticClass, TEXT("UNPCAnimInstance"), &Z_Registration_Info_UClass_UNPCAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCAnimInstance), 3349700704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h__Script_INDIANSPYGAME_289980287(TEXT("/Script/INDIANSPYGAME"),
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h__Script_INDIANSPYGAME_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h__Script_INDIANSPYGAME_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
