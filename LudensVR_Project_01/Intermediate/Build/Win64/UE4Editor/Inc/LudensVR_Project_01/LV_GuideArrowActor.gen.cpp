// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/Dummy/LV_GuideArrowActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_GuideArrowActor() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_GuideArrowActor_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_GuideArrowActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void ALV_GuideArrowActor::StaticRegisterNativesALV_GuideArrowActor()
	{
	}
	UClass* Z_Construct_UClass_ALV_GuideArrowActor_NoRegister()
	{
		return ALV_GuideArrowActor::StaticClass();
	}
	struct Z_Construct_UClass_ALV_GuideArrowActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_GuideArrowActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_GuideArrowActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dummy/LV_GuideArrowActor.h" },
		{ "ModuleRelativePath", "Public/Dummy/LV_GuideArrowActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_GuideArrowActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_GuideArrowActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_GuideArrowActor_Statics::ClassParams = {
		&ALV_GuideArrowActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALV_GuideArrowActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_GuideArrowActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_GuideArrowActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_GuideArrowActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_GuideArrowActor, 1378761643);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_GuideArrowActor(Z_Construct_UClass_ALV_GuideArrowActor, &ALV_GuideArrowActor::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_GuideArrowActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_GuideArrowActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
