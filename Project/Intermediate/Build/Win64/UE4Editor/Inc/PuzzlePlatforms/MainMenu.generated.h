// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define PUZZLEPLATFORMS_MainMenu_generated_h

#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_SPARSE_DATA
#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public:


#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu)


#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HostButton() { return STRUCT_OFFSET(UMainMenu, HostButton); } \
	FORCEINLINE static uint32 __PPO__JoinButton() { return STRUCT_OFFSET(UMainMenu, JoinButton); } \
	FORCEINLINE static uint32 __PPO__CancelButton() { return STRUCT_OFFSET(UMainMenu, CancelButton); } \
	FORCEINLINE static uint32 __PPO__ConfirmJoinMenuButton() { return STRUCT_OFFSET(UMainMenu, ConfirmJoinMenuButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UMainMenu, QuitButton); } \
	FORCEINLINE static uint32 __PPO__MenuSwitcher() { return STRUCT_OFFSET(UMainMenu, MenuSwitcher); } \
	FORCEINLINE static uint32 __PPO__MainMenu() { return STRUCT_OFFSET(UMainMenu, MainMenu); } \
	FORCEINLINE static uint32 __PPO__JoinMenu() { return STRUCT_OFFSET(UMainMenu, JoinMenu); } \
	FORCEINLINE static uint32 __PPO__IPAddressField() { return STRUCT_OFFSET(UMainMenu, IPAddressField); }


#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_15_PROLOG
#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_PRIVATE_PROPERTY_OFFSET \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_SPARSE_DATA \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_RPC_WRAPPERS \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_INCLASS \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_PRIVATE_PROPERTY_OFFSET \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_SPARSE_DATA \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_INCLASS_NO_PURE_DECLS \
	Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_PuzzlePlatforms_MenuSystem_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
