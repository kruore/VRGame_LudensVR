// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Enemy/Decorator_IsAttackRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecorator_IsAttackRange() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UDecorator_IsAttackRange_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UDecorator_IsAttackRange();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void UDecorator_IsAttackRange::StaticRegisterNativesUDecorator_IsAttackRange()
	{
	}
	UClass* Z_Construct_UClass_UDecorator_IsAttackRange_NoRegister()
	{
		return UDecorator_IsAttackRange::StaticClass();
	}
	struct Z_Construct_UClass_UDecorator_IsAttackRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecorator_IsAttackRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecorator_IsAttackRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Enemy/Decorator_IsAttackRange.h" },
		{ "ModuleRelativePath", "Public/LV_Enemy/Decorator_IsAttackRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecorator_IsAttackRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecorator_IsAttackRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDecorator_IsAttackRange_Statics::ClassParams = {
		&UDecorator_IsAttackRange::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDecorator_IsAttackRange_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDecorator_IsAttackRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDecorator_IsAttackRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDecorator_IsAttackRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDecorator_IsAttackRange, 1789682495);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDecorator_IsAttackRange(Z_Construct_UClass_UDecorator_IsAttackRange, &UDecorator_IsAttackRange::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("UDecorator_IsAttackRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecorator_IsAttackRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
