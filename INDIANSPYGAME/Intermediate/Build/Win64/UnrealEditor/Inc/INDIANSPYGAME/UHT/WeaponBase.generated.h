// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponBase.h"

#ifdef INDIANSPYGAME_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define INDIANSPYGAME_WeaponBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AWeaponBase **************************************************************
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Weapon_WeaponBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


INDIANSPYGAME_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();

#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Weapon_WeaponBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INDIANSPYGAME_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/INDIANSPYGAME"), Z_Construct_UClass_AWeaponBase_NoRegister) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Weapon_WeaponBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWeaponBase(AWeaponBase&&) = delete; \
	AWeaponBase(const AWeaponBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase) \
	NO_API virtual ~AWeaponBase();


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Weapon_WeaponBase_h_14_PROLOG
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Weapon_WeaponBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Weapon_WeaponBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Weapon_WeaponBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Weapon_WeaponBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWeaponBase;

// ********** End Class AWeaponBase ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Weapon_WeaponBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
