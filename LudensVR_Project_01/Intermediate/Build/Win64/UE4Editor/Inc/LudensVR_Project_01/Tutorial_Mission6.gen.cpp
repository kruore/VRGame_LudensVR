// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/Dummy/Tutorial_Mission6.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorial_Mission6() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATutorial_Mission6_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATutorial_Mission6();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void ATutorial_Mission6::StaticRegisterNativesATutorial_Mission6()
	{
	}
	UClass* Z_Construct_UClass_ATutorial_Mission6_NoRegister()
	{
		return ATutorial_Mission6::StaticClass();
	}
	struct Z_Construct_UClass_ATutorial_Mission6_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BottomMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATutorial_Mission6_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorial_Mission6_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dummy/Tutorial_Mission6.h" },
		{ "ModuleRelativePath", "Public/Dummy/Tutorial_Mission6.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp_BottomMesh_MetaData[] = {
		{ "Category", "Tutorial_Mission6" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dummy/Tutorial_Mission6.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp_BottomMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BottomMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATutorial_Mission6, BottomMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp_BottomMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp_BottomMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp__text_MetaData[] = {
		{ "Category", "Tutorial_Mission6" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dummy/Tutorial_Mission6.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp__text = { UE4CodeGen_Private::EPropertyClass::Object, "_text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ATutorial_Mission6, _text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp__text_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp__text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATutorial_Mission6_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp_BottomMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorial_Mission6_Statics::NewProp__text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATutorial_Mission6_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorial_Mission6>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATutorial_Mission6_Statics::ClassParams = {
		&ATutorial_Mission6::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ATutorial_Mission6_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATutorial_Mission6_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATutorial_Mission6_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATutorial_Mission6_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATutorial_Mission6()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATutorial_Mission6_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATutorial_Mission6, 1513134853);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATutorial_Mission6(Z_Construct_UClass_ATutorial_Mission6, &ATutorial_Mission6::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATutorial_Mission6"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorial_Mission6);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
