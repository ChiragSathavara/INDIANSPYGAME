// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/NPCAnimInstance.h"

#ifdef INDIANSPYGAME_NPCAnimInstance_generated_h
#error "NPCAnimInstance.generated.h already included, missing '#pragma once' in NPCAnimInstance.h"
#endif
#define INDIANSPYGAME_NPCAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNPCAnimInstance *********************************************************
INDIANSPYGAME_API UClass* Z_Construct_UClass_UNPCAnimInstance_NoRegister();

#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCAnimInstance(); \
	friend struct Z_Construct_UClass_UNPCAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INDIANSPYGAME_API UClass* Z_Construct_UClass_UNPCAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UNPCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/INDIANSPYGAME"), Z_Construct_UClass_UNPCAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UNPCAnimInstance)


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNPCAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNPCAnimInstance(UNPCAnimInstance&&) = delete; \
	UNPCAnimInstance(const UNPCAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNPCAnimInstance) \
	NO_API virtual ~UNPCAnimInstance();


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h_13_PROLOG
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNPCAnimInstance;

// ********** End Class UNPCAnimInstance ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Animation_NPCAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
