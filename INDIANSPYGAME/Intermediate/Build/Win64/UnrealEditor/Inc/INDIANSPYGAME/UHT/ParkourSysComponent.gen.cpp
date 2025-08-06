// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomComponent/ParkourSysComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeParkourSysComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UParkourSysComponent();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UParkourSysComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParkourSysComponent *****************************************************
void UParkourSysComponent::StaticRegisterNativesUParkourSysComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParkourSysComponent;
UClass* UParkourSysComponent::GetPrivateStaticClass()
{
	using TClass = UParkourSysComponent;
	if (!Z_Registration_Info_UClass_UParkourSysComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ParkourSysComponent"),
			Z_Registration_Info_UClass_UParkourSysComponent.InnerSingleton,
			StaticRegisterNativesUParkourSysComponent,
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
	return Z_Registration_Info_UClass_UParkourSysComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UParkourSysComponent_NoRegister()
{
	return UParkourSysComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParkourSysComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomComponent/ParkourSysComponent.h" },
		{ "ModuleRelativePath", "Public/CustomComponent/ParkourSysComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hero_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomComponent/ParkourSysComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VaultAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/CustomComponent/ParkourSysComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallHitLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomComponent/ParkourSysComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallTopHitLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomComponent/ParkourSysComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hero;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VaultAnim;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallHitLoc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallTopHitLoc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParkourSysComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParkourSysComponent_Statics::NewProp_Hero = { "Hero", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParkourSysComponent, Hero), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hero_MetaData), NewProp_Hero_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParkourSysComponent_Statics::NewProp_VaultAnim = { "VaultAnim", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParkourSysComponent, VaultAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VaultAnim_MetaData), NewProp_VaultAnim_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParkourSysComponent_Statics::NewProp_WallHitLoc = { "WallHitLoc", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParkourSysComponent, WallHitLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallHitLoc_MetaData), NewProp_WallHitLoc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParkourSysComponent_Statics::NewProp_WallTopHitLoc = { "WallTopHitLoc", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParkourSysComponent, WallTopHitLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallTopHitLoc_MetaData), NewProp_WallTopHitLoc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParkourSysComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourSysComponent_Statics::NewProp_Hero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourSysComponent_Statics::NewProp_VaultAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourSysComponent_Statics::NewProp_WallHitLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParkourSysComponent_Statics::NewProp_WallTopHitLoc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParkourSysComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParkourSysComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_INDIANSPYGAME,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParkourSysComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParkourSysComponent_Statics::ClassParams = {
	&UParkourSysComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParkourSysComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParkourSysComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParkourSysComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UParkourSysComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParkourSysComponent()
{
	if (!Z_Registration_Info_UClass_UParkourSysComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParkourSysComponent.OuterSingleton, Z_Construct_UClass_UParkourSysComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParkourSysComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParkourSysComponent);
UParkourSysComponent::~UParkourSysComponent() {}
// ********** End Class UParkourSysComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomComponent_ParkourSysComponent_h__Script_INDIANSPYGAME_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParkourSysComponent, UParkourSysComponent::StaticClass, TEXT("UParkourSysComponent"), &Z_Registration_Info_UClass_UParkourSysComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParkourSysComponent), 623690281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomComponent_ParkourSysComponent_h__Script_INDIANSPYGAME_3841707869(TEXT("/Script/INDIANSPYGAME"),
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomComponent_ParkourSysComponent_h__Script_INDIANSPYGAME_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomComponent_ParkourSysComponent_h__Script_INDIANSPYGAME_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
