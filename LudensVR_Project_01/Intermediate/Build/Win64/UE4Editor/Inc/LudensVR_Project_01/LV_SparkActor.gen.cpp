// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/Dummy/LV_SparkActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_SparkActor() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_SparkActor_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_SparkActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void ALV_SparkActor::StaticRegisterNativesALV_SparkActor()
	{
	}
	UClass* Z_Construct_UClass_ALV_SparkActor_NoRegister()
	{
		return ALV_SparkActor::StaticClass();
	}
	struct Z_Construct_UClass_ALV_SparkActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_SparkActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_SparkActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dummy/LV_SparkActor.h" },
		{ "ModuleRelativePath", "Public/Dummy/LV_SparkActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_SparkActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_SparkActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_SparkActor_Statics::ClassParams = {
		&ALV_SparkActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALV_SparkActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_SparkActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_SparkActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_SparkActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_SparkActor, 3062524378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_SparkActor(Z_Construct_UClass_ALV_SparkActor, &ALV_SparkActor::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_SparkActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_SparkActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
