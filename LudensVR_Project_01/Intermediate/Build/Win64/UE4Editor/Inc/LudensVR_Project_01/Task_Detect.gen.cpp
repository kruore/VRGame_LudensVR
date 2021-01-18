// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Enemy/Task_Detect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_Detect() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTask_Detect_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTask_Detect();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void UTask_Detect::StaticRegisterNativesUTask_Detect()
	{
	}
	UClass* Z_Construct_UClass_UTask_Detect_NoRegister()
	{
		return UTask_Detect::StaticClass();
	}
	struct Z_Construct_UClass_UTask_Detect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_Detect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_Detect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Enemy/Task_Detect.h" },
		{ "ModuleRelativePath", "Public/LV_Enemy/Task_Detect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_Detect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_Detect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTask_Detect_Statics::ClassParams = {
		&UTask_Detect::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTask_Detect_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTask_Detect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_Detect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTask_Detect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTask_Detect, 2408041578);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTask_Detect(Z_Construct_UClass_UTask_Detect, &UTask_Detect::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("UTask_Detect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_Detect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
