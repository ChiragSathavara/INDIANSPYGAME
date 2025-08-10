// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC/AINPCController.h"

#ifdef INDIANSPYGAME_AINPCController_generated_h
#error "AINPCController.generated.h already included, missing '#pragma once' in AINPCController.h"
#endif
#define INDIANSPYGAME_AINPCController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FAIStimulus;

// ********** Begin Class AAINPCController *********************************************************
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeadUnPossess); \
	DECLARE_FUNCTION(execFireWeapon); \
	DECLARE_FUNCTION(execInvenstigateArea); \
	DECLARE_FUNCTION(execIdlePatrol); \
	DECLARE_FUNCTION(execLookAtPlayer); \
	DECLARE_FUNCTION(execResetShootOut); \
	DECLARE_FUNCTION(execShootOut); \
	DECLARE_FUNCTION(execChasePlayer); \
	DECLARE_FUNCTION(execOnTargetDetected);


INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCController_NoRegister();

#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAINPCController(); \
	friend struct Z_Construct_UClass_AAINPCController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INDIANSPYGAME_API UClass* Z_Construct_UClass_AAINPCController_NoRegister(); \
public: \
	DECLARE_CLASS2(AAINPCController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/INDIANSPYGAME"), Z_Construct_UClass_AAINPCController_NoRegister) \
	DECLARE_SERIALIZER(AAINPCController)


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAINPCController(AAINPCController&&) = delete; \
	AAINPCController(const AAINPCController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAINPCController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAINPCController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAINPCController) \
	NO_API virtual ~AAINPCController();


#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h_20_PROLOG
#define FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h_23_INCLASS_NO_PURE_DECLS \
	FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAINPCController;

// ********** End Class AAINPCController ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_INDIANSPYGAME_Source_INDIANSPYGAME_Public_NPC_AINPCController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
