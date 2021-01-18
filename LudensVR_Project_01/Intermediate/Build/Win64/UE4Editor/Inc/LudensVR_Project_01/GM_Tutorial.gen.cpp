// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/GameManager/GM_Tutorial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_Tutorial() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGM_Tutorial_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGM_Tutorial();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void AGM_Tutorial::StaticRegisterNativesAGM_Tutorial()
	{
	}
	UClass* Z_Construct_UClass_AGM_Tutorial_NoRegister()
	{
		return AGM_Tutorial::StaticClass();
	}
	struct Z_Construct_UClass_AGM_Tutorial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_Tutorial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Tutorial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager/GM_Tutorial.h" },
		{ "ModuleRelativePath", "Public/GameManager/GM_Tutorial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_Tutorial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Tutorial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGM_Tutorial_Statics::ClassParams = {
		&AGM_Tutorial::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGM_Tutorial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGM_Tutorial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_Tutorial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGM_Tutorial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGM_Tutorial, 929234010);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_Tutorial(Z_Construct_UClass_AGM_Tutorial, &AGM_Tutorial::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("AGM_Tutorial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_Tutorial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
