// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Enemy/TP_Enemy_Type01_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_Enemy_Type01_Controller() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_Enemy_Type01_Controller_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_Enemy_Type01_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void ATP_Enemy_Type01_Controller::StaticRegisterNativesATP_Enemy_Type01_Controller()
	{
	}
	UClass* Z_Construct_UClass_ATP_Enemy_Type01_Controller_NoRegister()
	{
		return ATP_Enemy_Type01_Controller::StaticClass();
	}
	struct Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BBAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BTAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BTAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LV_Enemy/TP_Enemy_Type01_Controller.h" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type01_Controller.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BBAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type01_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BBAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BBAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ATP_Enemy_Type01_Controller, BBAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BBAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BBAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BTAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type01_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BTAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BTAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ATP_Enemy_Type01_Controller, BTAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BTAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BTAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BBAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::NewProp_BTAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_Enemy_Type01_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::ClassParams = {
		&ATP_Enemy_Type01_Controller::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_Enemy_Type01_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_Enemy_Type01_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_Enemy_Type01_Controller, 3080638071);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_Enemy_Type01_Controller(Z_Construct_UClass_ATP_Enemy_Type01_Controller, &ATP_Enemy_Type01_Controller::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATP_Enemy_Type01_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_Enemy_Type01_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
