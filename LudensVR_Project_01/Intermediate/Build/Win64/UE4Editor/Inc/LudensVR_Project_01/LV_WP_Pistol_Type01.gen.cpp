// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Weapon/LV_WP_Pistol_Type01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_WP_Pistol_Type01() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_WP_Pistol_Type01_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_WP_Pistol_Type01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_InteractionInterface_NoRegister();
// End Cross Module References
	void ALV_WP_Pistol_Type01::StaticRegisterNativesALV_WP_Pistol_Type01()
	{
	}
	UClass* Z_Construct_UClass_ALV_WP_Pistol_Type01_NoRegister()
	{
		return ALV_WP_Pistol_Type01::StaticClass();
	}
	struct Z_Construct_UClass_ALV_WP_Pistol_Type01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_WP_Pistol_Type01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_WP_Pistol_Type01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Weapon/LV_WP_Pistol_Type01.h" },
		{ "ModuleRelativePath", "Public/LV_Weapon/LV_WP_Pistol_Type01.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALV_WP_Pistol_Type01_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTP_InteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ALV_WP_Pistol_Type01, ITP_InteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_WP_Pistol_Type01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_WP_Pistol_Type01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_WP_Pistol_Type01_Statics::ClassParams = {
		&ALV_WP_Pistol_Type01::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ALV_WP_Pistol_Type01_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_WP_Pistol_Type01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_WP_Pistol_Type01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_WP_Pistol_Type01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_WP_Pistol_Type01, 3190516969);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_WP_Pistol_Type01(Z_Construct_UClass_ALV_WP_Pistol_Type01, &ALV_WP_Pistol_Type01::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_WP_Pistol_Type01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_WP_Pistol_Type01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
