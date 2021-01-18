// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Enemy/Task_Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_Attack() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTask_Attack_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTask_Attack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void UTask_Attack::StaticRegisterNativesUTask_Attack()
	{
	}
	UClass* Z_Construct_UClass_UTask_Attack_NoRegister()
	{
		return UTask_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UTask_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_Attack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Enemy/Task_Attack.h" },
		{ "ModuleRelativePath", "Public/LV_Enemy/Task_Attack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_Attack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTask_Attack_Statics::ClassParams = {
		&UTask_Attack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTask_Attack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTask_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_Attack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTask_Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTask_Attack, 651697176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTask_Attack(Z_Construct_UClass_UTask_Attack, &UTask_Attack::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("UTask_Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
