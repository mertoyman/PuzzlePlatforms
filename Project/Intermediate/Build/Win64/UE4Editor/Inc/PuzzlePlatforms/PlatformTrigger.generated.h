// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PUZZLEPLATFORMS_PlatformTrigger_generated_h
#error "PlatformTrigger.generated.h already included, missing '#pragma once' in PlatformTrigger.h"
#endif
#define PUZZLEPLATFORMS_PlatformTrigger_generated_h

#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_SPARSE_DATA
#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformTrigger(); \
	friend struct Z_Construct_UClass_APlatformTrigger_Statics; \
public: \
	DECLARE_CLASS(APlatformTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(APlatformTrigger)


#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformTrigger(); \
	friend struct Z_Construct_UClass_APlatformTrigger_Statics; \
public: \
	DECLARE_CLASS(APlatformTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(APlatformTrigger)


#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformTrigger(APlatformTrigger&&); \
	NO_API APlatformTrigger(const APlatformTrigger&); \
public:


#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformTrigger(APlatformTrigger&&); \
	NO_API APlatformTrigger(const APlatformTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformTrigger)


#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerVolume() { return STRUCT_OFFSET(APlatformTrigger, TriggerVolume); } \
	FORCEINLINE static uint32 __PPO__PlatformsToTrigger() { return STRUCT_OFFSET(APlatformTrigger, PlatformsToTrigger); }


#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_12_PROLOG
#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_SPARSE_DATA \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_RPC_WRAPPERS \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_INCLASS \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_SPARSE_DATA \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_INCLASS_NO_PURE_DECLS \
	Project_Source_PuzzlePlatforms_PlatformTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class APlatformTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_PuzzlePlatforms_PlatformTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
