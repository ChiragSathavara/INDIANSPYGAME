// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomActors/RockActor.h"

#ifdef INDIANSPYGAME_RockActor_generated_h
#error "RockActor.generated.h already included, missing '#pragma once' in RockActor.h"
#endif
#define INDIANSPYGAME_RockActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ARockActor ***************************************************************
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_RockActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


INDIANSPYGAME_API UClass* Z_Construct_UClass_ARockActor_NoRegister();

#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_RockActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARockActor(); \
	friend struct Z_Construct_UClass_ARockActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INDIANSPYGAME_API UClass* Z_Construct_UClass_ARockActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ARockActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/INDIANSPYGAME"), Z_Construct_UClass_ARockActor_NoRegister) \
	DECLARE_SERIALIZER(ARockActor)


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_RockActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARockActor(ARockActor&&) = delete; \
	ARockActor(const ARockActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARockActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARockActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARockActor) \
	NO_API virtual ~ARockActor();


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_RockActor_h_14_PROLOG
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_RockActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_RockActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_RockActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_RockActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARockActor;

// ********** End Class ARockActor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_CustomActors_RockActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
