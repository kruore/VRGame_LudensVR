// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/Dummy/Game3DMenu_QuitGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGame3DMenu_QuitGame() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGame3DMenu_QuitGame_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGame3DMenu_QuitGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void AGame3DMenu_QuitGame::StaticRegisterNativesAGame3DMenu_QuitGame()
	{
	}
	UClass* Z_Construct_UClass_AGame3DMenu_QuitGame_NoRegister()
	{
		return AGame3DMenu_QuitGame::StaticClass();
	}
	struct Z_Construct_UClass_AGame3DMenu_QuitGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGame3DMenu_QuitGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame3DMenu_QuitGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dummy/Game3DMenu_QuitGame.h" },
		{ "ModuleRelativePath", "Public/Dummy/Game3DMenu_QuitGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGame3DMenu_QuitGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGame3DMenu_QuitGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGame3DMenu_QuitGame_Statics::ClassParams = {
		&AGame3DMenu_QuitGame::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGame3DMenu_QuitGame_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGame3DMenu_QuitGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGame3DMenu_QuitGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGame3DMenu_QuitGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGame3DMenu_QuitGame, 355588672);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGame3DMenu_QuitGame(Z_Construct_UClass_AGame3DMenu_QuitGame, &AGame3DMenu_QuitGame::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("AGame3DMenu_QuitGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGame3DMenu_QuitGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
