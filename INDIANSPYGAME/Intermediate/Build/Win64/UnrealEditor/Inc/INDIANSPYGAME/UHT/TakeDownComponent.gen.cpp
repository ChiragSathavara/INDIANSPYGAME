// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomComponent/TakeDownComponent.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTakeDownComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UTakeDownComponent();
INDIANSPYGAME_API UClass* Z_Construct_UClass_UTakeDownComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTakeDownComponent *******************************************************
void UTakeDownComponent::StaticRegisterNativesUTakeDownComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTakeDownComponent;
UClass* UTakeDownComponent::GetPrivateStaticClass()
{
	using TClass = UTakeDownComponent;
	if (!Z_Registration_Info_UClass_UTakeDownComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TakeDownComponent"),
			Z_Registration_Info_UClass_UTakeDownComponent.InnerSingleton,
			StaticRegisterNativesUTakeDownComponent,
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
	return Z_Registration_Info_UClass_UTakeDownComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTakeDownComponent_NoRegister()
{
	return UTakeDownComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTakeDownComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomComponent/TakeDownComponent.h" },
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyHero_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCTakenDown_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroStealthMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCKillMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayTakeDownTime_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayTH_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetachTH_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyHeroCont_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomComponent/TakeDownComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyHero;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCTakenDown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroStealthMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCKillMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTakeDownTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelayTH;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetachTH;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyHeroCont;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeDownComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_MyHero = { "MyHero", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeDownComponent, MyHero), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyHero_MetaData), NewProp_MyHero_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_NPCTakenDown = { "NPCTakenDown", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeDownComponent, NPCTakenDown), Z_Construct_UClass_AAINPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCTakenDown_MetaData), NewProp_NPCTakenDown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_HeroStealthMontage = { "HeroStealthMontage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeDownComponent, HeroStealthMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroStealthMontage_MetaData), NewProp_HeroStealthMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_NPCKillMontage = { "NPCKillMontage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeDownComponent, NPCKillMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCKillMontage_MetaData), NewProp_NPCKillMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeDownComponent, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_DelayTakeDownTime = { "DelayTakeDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeDownComponent, DelayTakeDownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayTakeDownTime_MetaData), NewProp_DelayTakeDownTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_DelayTH = { "DelayTH", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeDownComponent, DelayTH), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayTH_MetaData), NewProp_DelayTH_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_DetachTH = { "DetachTH", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeDownComponent, DetachTH), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetachTH_MetaData), NewProp_DetachTH_MetaData) }; // 3834150579
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_MyHeroCont = { "MyHeroCont", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTakeDownComponent, MyHeroCont), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyHeroCont_MetaData), NewProp_MyHeroCont_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeDownComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_MyHero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_NPCTakenDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_HeroStealthMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_NPCKillMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_DelayTakeDownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_DelayTH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_DetachTH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeDownComponent_Statics::NewProp_MyHeroCont,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeDownComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTakeDownComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_INDIANSPYGAME,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeDownComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeDownComponent_Statics::ClassParams = {
	&UTakeDownComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTakeDownComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTakeDownComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeDownComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTakeDownComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTakeDownComponent()
{
	if (!Z_Registration_Info_UClass_UTakeDownComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeDownComponent.OuterSingleton, Z_Construct_UClass_UTakeDownComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTakeDownComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeDownComponent);
UTakeDownComponent::~UTakeDownComponent() {}
// ********** End Class UTakeDownComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomComponent_TakeDownComponent_h__Script_INDIANSPYGAME_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTakeDownComponent, UTakeDownComponent::StaticClass, TEXT("UTakeDownComponent"), &Z_Registration_Info_UClass_UTakeDownComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeDownComponent), 1144448369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomComponent_TakeDownComponent_h__Script_INDIANSPYGAME_2129518626(TEXT("/Script/INDIANSPYGAME"),
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomComponent_TakeDownComponent_h__Script_INDIANSPYGAME_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomComponent_TakeDownComponent_h__Script_INDIANSPYGAME_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
