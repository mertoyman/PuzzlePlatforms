// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/PuzzlePlatformsGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzlePlatformsGameInstance() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPuzzlePlatformsGameInstance_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPuzzlePlatformsGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPuzzlePlatformsGameInstance::execJoin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Join(Z_Param_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePlatformsGameInstance::execHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Host();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePlatformsGameInstance::execLoadPauseMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPauseMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePlatformsGameInstance::execLoadMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMenu();
		P_NATIVE_END;
	}
	void UPuzzlePlatformsGameInstance::StaticRegisterNativesUPuzzlePlatformsGameInstance()
	{
		UClass* Class = UPuzzlePlatformsGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UPuzzlePlatformsGameInstance::execHost },
			{ "Join", &UPuzzlePlatformsGameInstance::execJoin },
			{ "LoadMenu", &UPuzzlePlatformsGameInstance::execLoadMenu },
			{ "LoadPauseMenu", &UPuzzlePlatformsGameInstance::execLoadPauseMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformsGameInstance, nullptr, "Host", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics
	{
		struct PuzzlePlatformsGameInstance_eventJoin_Parms
		{
			FString Address;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzlePlatformsGameInstance_eventJoin_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformsGameInstance, nullptr, "Join", nullptr, nullptr, sizeof(PuzzlePlatformsGameInstance_eventJoin_Parms), Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformsGameInstance, nullptr, "LoadMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadPauseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadPauseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformsGameInstance, nullptr, "LoadPauseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadPauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadPauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadPauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadPauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzlePlatformsGameInstance_NoRegister()
	{
		return UPuzzlePlatformsGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host, "Host" }, // 2327810911
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join, "Join" }, // 2583257186
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu, "LoadMenu" }, // 4094814817
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadPauseMenu, "LoadPauseMenu" }, // 1617735242
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PuzzlePlatformsGameInstance.h" },
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UPuzzlePlatformsGameInstance, IMenuInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzlePlatformsGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::ClassParams = {
		&UPuzzlePlatformsGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzlePlatformsGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzlePlatformsGameInstance, 2537766386);
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UPuzzlePlatformsGameInstance>()
	{
		return UPuzzlePlatformsGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzlePlatformsGameInstance(Z_Construct_UClass_UPuzzlePlatformsGameInstance, &UPuzzlePlatformsGameInstance::StaticClass, TEXT("/Script/PuzzlePlatforms"), TEXT("UPuzzlePlatformsGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzlePlatformsGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
