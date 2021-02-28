// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/MenuSystem/PauseMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenu() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPauseMenu_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPauseMenu();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMenuWidget();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPauseMenu::execReturnToMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseMenu::execResumeGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeGame();
		P_NATIVE_END;
	}
	void UPauseMenu::StaticRegisterNativesUPauseMenu()
	{
		UClass* Class = UPauseMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResumeGame", &UPauseMenu::execResumeGame },
			{ "ReturnToMainMenu", &UPauseMenu::execReturnToMainMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseMenu_ResumeGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenu_ResumeGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenu_ResumeGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenu, nullptr, "ResumeGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenu_ResumeGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenu_ResumeGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenu_ResumeGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenu_ResumeGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseMenu_ReturnToMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenu_ReturnToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenu_ReturnToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenu, nullptr, "ReturnToMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenu_ReturnToMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenu_ReturnToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenu_ReturnToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenu_ReturnToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPauseMenu_NoRegister()
	{
		return UPauseMenu::StaticClass();
	}
	struct Z_Construct_UClass_UPauseMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseMenu_ResumeGame, "ResumeGame" }, // 283707094
		{ &Z_Construct_UFunction_UPauseMenu_ReturnToMainMenu, "ReturnToMainMenu" }, // 4225841051
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MenuSystem/PauseMenu.h" },
		{ "ModuleRelativePath", "MenuSystem/PauseMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenu_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseMenu, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::NewProp_ResumeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::NewProp_ResumeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseMenu, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenu_Statics::NewProp_ResumeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenu_Statics::ClassParams = {
		&UPauseMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPauseMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPauseMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseMenu, 4273818033);
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UPauseMenu>()
	{
		return UPauseMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseMenu(Z_Construct_UClass_UPauseMenu, &UPauseMenu::StaticClass, TEXT("/Script/PuzzlePlatforms"), TEXT("UPauseMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
