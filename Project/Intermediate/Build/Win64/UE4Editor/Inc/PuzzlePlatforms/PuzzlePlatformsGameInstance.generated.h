// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_PuzzlePlatformsGameInstance_generated_h
#error "PuzzlePlatformsGameInstance.generated.h already included, missing '#pragma once' in PuzzlePlatformsGameInstance.h"
#endif
#define PUZZLEPLATFORMS_PuzzlePlatformsGameInstance_generated_h

#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_SPARSE_DATA
#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost); \
	DECLARE_FUNCTION(execLoadPauseMenu); \
	DECLARE_FUNCTION(execLoadMenu);


#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost); \
	DECLARE_FUNCTION(execLoadPauseMenu); \
	DECLARE_FUNCTION(execLoadMenu);


#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuzzlePlatformsGameInstance(); \
	friend struct Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPuzzlePlatformsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPuzzlePlatformsGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPuzzlePlatformsGameInstance*>(this); }


#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPuzzlePlatformsGameInstance(); \
	friend struct Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPuzzlePlatformsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPuzzlePlatformsGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPuzzlePlatformsGameInstance*>(this); }


#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzlePlatformsGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzlePlatformsGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzlePlatformsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzlePlatformsGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzlePlatformsGameInstance(UPuzzlePlatformsGameInstance&&); \
	NO_API UPuzzlePlatformsGameInstance(const UPuzzlePlatformsGameInstance&); \
public:


#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzlePlatformsGameInstance(UPuzzlePlatformsGameInstance&&); \
	NO_API UPuzzlePlatformsGameInstance(const UPuzzlePlatformsGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzlePlatformsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzlePlatformsGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzlePlatformsGameInstance)


#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_PRIVATE_PROPERTY_OFFSET
#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_15_PROLOG
#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_SPARSE_DATA \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_RPC_WRAPPERS \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_INCLASS \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_SPARSE_DATA \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_INCLASS_NO_PURE_DECLS \
	Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UPuzzlePlatformsGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzle_Platforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
