// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomActors/AmmoActor.h"

#ifdef INDIANSPYGAME_AmmoActor_generated_h
#error "AmmoActor.generated.h already included, missing '#pragma once' in AmmoActor.h"
#endif
#define INDIANSPYGAME_AmmoActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AAmmoActor ***************************************************************
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_AmmoActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


INDIANSPYGAME_API UClass* Z_Construct_UClass_AAmmoActor_NoRegister();

#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_AmmoActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmoActor(); \
	friend struct Z_Construct_UClass_AAmmoActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INDIANSPYGAME_API UClass* Z_Construct_UClass_AAmmoActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAmmoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/INDIANSPYGAME"), Z_Construct_UClass_AAmmoActor_NoRegister) \
	DECLARE_SERIALIZER(AAmmoActor)


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_AmmoActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAmmoActor(AAmmoActor&&) = delete; \
	AAmmoActor(const AAmmoActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmoActor) \
	NO_API virtual ~AAmmoActor();


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_AmmoActor_h_11_PROLOG
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_AmmoActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_AmmoActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_AmmoActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_AmmoActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAmmoActor;

// ********** End Class AAmmoActor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_AmmoActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
