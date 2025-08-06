// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hero/HeroCharacter.h"

#ifdef INDIANSPYGAME_HeroCharacter_generated_h
#error "HeroCharacter.generated.h already included, missing '#pragma once' in HeroCharacter.h"
#endif
#define INDIANSPYGAME_HeroCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AHeroCharacter ***********************************************************
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();

#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroCharacter(); \
	friend struct Z_Construct_UClass_AHeroCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INDIANSPYGAME_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AHeroCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/INDIANSPYGAME"), Z_Construct_UClass_AHeroCharacter_NoRegister) \
	DECLARE_SERIALIZER(AHeroCharacter)


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHeroCharacter(AHeroCharacter&&) = delete; \
	AHeroCharacter(const AHeroCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroCharacter) \
	NO_API virtual ~AHeroCharacter();


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h_26_PROLOG
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h_29_INCLASS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHeroCharacter;

// ********** End Class AHeroCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_Hero_HeroCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
