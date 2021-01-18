// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/GameManager/GM_LevelLoading.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_LevelLoading() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGM_LevelLoading_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGM_LevelLoading();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_AGM_LevelLoading_QuitGame();
// End Cross Module References
	void AGM_LevelLoading::StaticRegisterNativesAGM_LevelLoading()
	{
		UClass* Class = AGM_LevelLoading::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadNextLevel", &AGM_LevelLoading::execLoadNextLevel },
			{ "QuitGame", &AGM_LevelLoading::execQuitGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics
	{
		struct GM_LevelLoading_eventLoadNextLevel_Parms
		{
			FName _NextLevelName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__NextLevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::NewProp__NextLevelName = { UE4CodeGen_Private::EPropertyClass::Name, "_NextLevelName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GM_LevelLoading_eventLoadNextLevel_Parms, _NextLevelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::NewProp__NextLevelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelLoadManagement" },
		{ "ModuleRelativePath", "Public/GameManager/GM_LevelLoading.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGM_LevelLoading, "LoadNextLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GM_LevelLoading_eventLoadNextLevel_Parms), Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGM_LevelLoading_QuitGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGM_LevelLoading_QuitGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelLoadManagement" },
		{ "ModuleRelativePath", "Public/GameManager/GM_LevelLoading.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGM_LevelLoading_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGM_LevelLoading, "QuitGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGM_LevelLoading_QuitGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGM_LevelLoading_QuitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGM_LevelLoading_QuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGM_LevelLoading_QuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGM_LevelLoading_NoRegister()
	{
		return AGM_LevelLoading::StaticClass();
	}
	struct Z_Construct_UClass_AGM_LevelLoading_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_LevelLoading_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGM_LevelLoading_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGM_LevelLoading_LoadNextLevel, "LoadNextLevel" }, // 2956965965
		{ &Z_Construct_UFunction_AGM_LevelLoading_QuitGame, "QuitGame" }, // 3156921179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_LevelLoading_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager/GM_LevelLoading.h" },
		{ "ModuleRelativePath", "Public/GameManager/GM_LevelLoading.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_LevelLoading_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_LevelLoading>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGM_LevelLoading_Statics::ClassParams = {
		&AGM_LevelLoading::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGM_LevelLoading_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGM_LevelLoading_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_LevelLoading()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGM_LevelLoading_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGM_LevelLoading, 3345690021);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_LevelLoading(Z_Construct_UClass_AGM_LevelLoading, &AGM_LevelLoading::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("AGM_LevelLoading"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_LevelLoading);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
