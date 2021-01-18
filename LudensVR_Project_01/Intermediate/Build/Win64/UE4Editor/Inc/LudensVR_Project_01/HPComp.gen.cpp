// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Enemy/HPComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPComp() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UHPComp_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UHPComp();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void UHPComp::StaticRegisterNativesUHPComp()
	{
	}
	UClass* Z_Construct_UClass_UHPComp_NoRegister()
	{
		return UHPComp::StaticClass();
	}
	struct Z_Construct_UClass_UHPComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHPComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHPComp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Enemy/HPComp.h" },
		{ "ModuleRelativePath", "Public/LV_Enemy/HPComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHPComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHPComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHPComp_Statics::ClassParams = {
		&UHPComp::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHPComp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHPComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHPComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHPComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPComp, 3155206651);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPComp(Z_Construct_UClass_UHPComp, &UHPComp::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("UHPComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
