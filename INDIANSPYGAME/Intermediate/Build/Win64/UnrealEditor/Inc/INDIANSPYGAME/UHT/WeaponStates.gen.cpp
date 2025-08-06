// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnumStates/WeaponStates.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponStates() {}

// ********** Begin Cross Module References ********************************************************
INDIANSPYGAME_API UEnum* Z_Construct_UEnum_INDIANSPYGAME_EWeaponState();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWeaponState **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponState;
static UEnum* EWeaponState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_INDIANSPYGAME_EWeaponState, (UObject*)Z_Construct_UPackage__Script_INDIANSPYGAME(), TEXT("EWeaponState"));
	}
	return Z_Registration_Info_UEnum_EWeaponState.OuterSingleton;
}
template<> INDIANSPYGAME_API UEnum* StaticEnum<EWeaponState>()
{
	return EWeaponState_StaticEnum();
}
struct Z_Construct_UEnum_INDIANSPYGAME_EWeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWS_Equipped.DisplayName", "Equipped" },
		{ "EWS_Equipped.Name", "EWS_Equipped" },
		{ "EWS_UnEquipped.DisplayName", "UnEquipped" },
		{ "EWS_UnEquipped.Name", "EWS_UnEquipped" },
		{ "ModuleRelativePath", "Public/EnumStates/WeaponStates.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWS_UnEquipped", (int64)EWS_UnEquipped },
		{ "EWS_Equipped", (int64)EWS_Equipped },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_INDIANSPYGAME_EWeaponState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_INDIANSPYGAME,
	nullptr,
	"EWeaponState",
	"EWeaponState",
	Z_Construct_UEnum_INDIANSPYGAME_EWeaponState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_INDIANSPYGAME_EWeaponState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_INDIANSPYGAME_EWeaponState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_INDIANSPYGAME_EWeaponState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_INDIANSPYGAME_EWeaponState()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponState.InnerSingleton, Z_Construct_UEnum_INDIANSPYGAME_EWeaponState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponState.InnerSingleton;
}
// ********** End Enum EWeaponState ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_EnumStates_WeaponStates_h__Script_INDIANSPYGAME_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponState_StaticEnum, TEXT("EWeaponState"), &Z_Registration_Info_UEnum_EWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 442556823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_EnumStates_WeaponStates_h__Script_INDIANSPYGAME_1071544883(TEXT("/Script/INDIANSPYGAME"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_EnumStates_WeaponStates_h__Script_INDIANSPYGAME_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_EnumStates_WeaponStates_h__Script_INDIANSPYGAME_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
