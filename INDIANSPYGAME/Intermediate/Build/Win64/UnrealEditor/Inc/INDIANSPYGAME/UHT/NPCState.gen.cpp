// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnumStates/NPCState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNPCState() {}

// ********** Begin Cross Module References ********************************************************
INDIANSPYGAME_API UEnum* Z_Construct_UEnum_INDIANSPYGAME_ENPCState();
UPackage* Z_Construct_UPackage__Script_INDIANSPYGAME();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ENPCState *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENPCState;
static UEnum* ENPCState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENPCState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENPCState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_INDIANSPYGAME_ENPCState, (UObject*)Z_Construct_UPackage__Script_INDIANSPYGAME(), TEXT("ENPCState"));
	}
	return Z_Registration_Info_UEnum_ENPCState.OuterSingleton;
}
template<> INDIANSPYGAME_API UEnum* StaticEnum<ENPCState>()
{
	return ENPCState_StaticEnum();
}
struct Z_Construct_UEnum_INDIANSPYGAME_ENPCState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ENS_Chasing.DisplayName", "Chasing" },
		{ "ENS_Chasing.Name", "ENS_Chasing" },
		{ "ENS_Idle.DisplayName", "Idle" },
		{ "ENS_Idle.Name", "ENS_Idle" },
		{ "ENS_Investigate.DisplayName", "Investigate" },
		{ "ENS_Investigate.Name", "ENS_Investigate" },
		{ "ENS_Shooting.DisplayName", "Shooting" },
		{ "ENS_Shooting.Name", "ENS_Shooting" },
		{ "ModuleRelativePath", "Public/EnumStates/NPCState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENS_Idle", (int64)ENS_Idle },
		{ "ENS_Chasing", (int64)ENS_Chasing },
		{ "ENS_Shooting", (int64)ENS_Shooting },
		{ "ENS_Investigate", (int64)ENS_Investigate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_INDIANSPYGAME_ENPCState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_INDIANSPYGAME,
	nullptr,
	"ENPCState",
	"ENPCState",
	Z_Construct_UEnum_INDIANSPYGAME_ENPCState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_INDIANSPYGAME_ENPCState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_INDIANSPYGAME_ENPCState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_INDIANSPYGAME_ENPCState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_INDIANSPYGAME_ENPCState()
{
	if (!Z_Registration_Info_UEnum_ENPCState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENPCState.InnerSingleton, Z_Construct_UEnum_INDIANSPYGAME_ENPCState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENPCState.InnerSingleton;
}
// ********** End Enum ENPCState *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_EnumStates_NPCState_h__Script_INDIANSPYGAME_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENPCState_StaticEnum, TEXT("ENPCState"), &Z_Registration_Info_UEnum_ENPCState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3612725557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_EnumStates_NPCState_h__Script_INDIANSPYGAME_1181519145(TEXT("/Script/INDIANSPYGAME"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_EnumStates_NPCState_h__Script_INDIANSPYGAME_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_EnumStates_NPCState_h__Script_INDIANSPYGAME_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
