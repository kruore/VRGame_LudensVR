// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/Dummy/Game3DMenu_StartTutorial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGame3DMenu_StartTutorial() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGame3DMenu_StartTutorial_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGame3DMenu_StartTutorial();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void AGame3DMenu_StartTutorial::StaticRegisterNativesAGame3DMenu_StartTutorial()
	{
	}
	UClass* Z_Construct_UClass_AGame3DMenu_StartTutorial_NoRegister()
	{
		return AGame3DMenu_StartTutorial::StaticClass();
	}
	struct Z_Construct_UClass_AGame3DMenu_StartTutorial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGame3DMenu_StartTutorial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame3DMenu_StartTutorial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dummy/Game3DMenu_StartTutorial.h" },
		{ "ModuleRelativePath", "Public/Dummy/Game3DMenu_StartTutorial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGame3DMenu_StartTutorial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGame3DMenu_StartTutorial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGame3DMenu_StartTutorial_Statics::ClassParams = {
		&AGame3DMenu_StartTutorial::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGame3DMenu_StartTutorial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGame3DMenu_StartTutorial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGame3DMenu_StartTutorial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGame3DMenu_StartTutorial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGame3DMenu_StartTutorial, 1661049741);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGame3DMenu_StartTutorial(Z_Construct_UClass_AGame3DMenu_StartTutorial, &AGame3DMenu_StartTutorial::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("AGame3DMenu_StartTutorial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGame3DMenu_StartTutorial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
