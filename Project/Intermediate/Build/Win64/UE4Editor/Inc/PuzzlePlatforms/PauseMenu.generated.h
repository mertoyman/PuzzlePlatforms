// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_PauseMenu_generated_h
#error "PauseMenu.generated.h already included, missing '#pragma once' in PauseMenu.h"
#endif
#define PUZZLEPLATFORMS_PauseMenu_generated_h

#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_SPARSE_DATA
#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReturnToMainMenu); \
	DECLARE_FUNCTION(execResumeGame);


#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnToMainMenu); \
	DECLARE_FUNCTION(execResumeGame);


#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseMenu(); \
	friend struct Z_Construct_UClass_UPauseMenu_Statics; \
public: \
	DECLARE_CLASS(UPauseMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPauseMenu)


#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPauseMenu(); \
	friend struct Z_Construct_UClass_UPauseMenu_Statics; \
public: \
	DECLARE_CLASS(UPauseMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPauseMenu)


#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseMenu(UPauseMenu&&); \
	NO_API UPauseMenu(const UPauseMenu&); \
public:


#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseMenu(UPauseMenu&&); \
	NO_API UPauseMenu(const UPauseMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseMenu)


#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResumeButton() { return STRUCT_OFFSET(UPauseMenu, ResumeButton); } \
	FORCEINLINE static uint32 __PPO__MainMenuButton() { return STRUCT_OFFSET(UPauseMenu, MainMenuButton); }


#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_12_PROLOG
#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_SPARSE_DATA \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_RPC_WRAPPERS \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_INCLASS \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_SPARSE_DATA \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_INCLASS_NO_PURE_DECLS \
	Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UPauseMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_PuzzlePlatforms_MenuSystem_PauseMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
