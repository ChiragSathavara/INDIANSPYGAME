// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC/AINPCCharacter.h"

#ifdef INDIANSPYGAME_AINPCCharacter_generated_h
#error "AINPCCharacter.generated.h already included, missing '#pragma once' in AINPCCharacter.h"
#endif
#define INDIANSPYGAME_AINPCCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAINPCCharacter **********************************************************
INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();

#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAINPCCharacter(); \
	friend struct Z_Construct_UClass_AAINPCCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAINPCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/INDIANSPYGAME"), Z_Construct_UClass_AAINPCCharacter_NoRegister) \
	DECLARE_SERIALIZER(AAINPCCharacter)


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAINPCCharacter(AAINPCCharacter&&) = delete; \
	AAINPCCharacter(const AAINPCCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAINPCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAINPCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAINPCCharacter) \
	NO_API virtual ~AAINPCCharacter();


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h_13_PROLOG
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAINPCCharacter;

// ********** End Class AAINPCCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
