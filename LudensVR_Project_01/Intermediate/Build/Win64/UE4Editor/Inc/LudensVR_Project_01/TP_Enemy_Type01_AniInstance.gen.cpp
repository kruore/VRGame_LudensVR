// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Enemy/TP_Enemy_Type01_AniInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_Enemy_Type01_AniInstance() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_Enemy_Type01_AniInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UTP_Enemy_Type01_AniInstance::StaticRegisterNativesUTP_Enemy_Type01_AniInstance()
	{
	}
	UClass* Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_NoRegister()
	{
		return UTP_Enemy_Type01_AniInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_Neck_MetaData[];
#endif
		static void NewProp_IsDead_Neck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead_Neck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPawnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPawnSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "LV_Enemy/TP_Enemy_Type01_AniInstance.h" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type01_AniInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type01_AniInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_AttackMontage = { UE4CodeGen_Private::EPropertyClass::Object, "AttackMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000030015, 1, nullptr, STRUCT_OFFSET(UTP_Enemy_Type01_AniInstance, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_AttackMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_AttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_Neck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TP_Enemy_Type01_AniInstance" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type01_AniInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_Neck_SetBit(void* Obj)
	{
		((UTP_Enemy_Type01_AniInstance*)Obj)->IsDead_Neck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_Neck = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDead_Neck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTP_Enemy_Type01_AniInstance), &Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_Neck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_Neck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_Neck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TP_Enemy_Type01_AniInstance" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type01_AniInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((UTP_Enemy_Type01_AniInstance*)Obj)->IsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTP_Enemy_Type01_AniInstance), &Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_CurrentPawnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TP_Enemy_Type01_AniInstance" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type01_AniInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_CurrentPawnSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentPawnSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(UTP_Enemy_Type01_AniInstance, CurrentPawnSpeed), METADATA_PARAMS(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_CurrentPawnSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_CurrentPawnSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_AttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead_Neck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_IsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::NewProp_CurrentPawnSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_Enemy_Type01_AniInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::ClassParams = {
		&UTP_Enemy_Type01_AniInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		nullptr, 0,
		Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTP_Enemy_Type01_AniInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTP_Enemy_Type01_AniInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTP_Enemy_Type01_AniInstance, 2360653384);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTP_Enemy_Type01_AniInstance(Z_Construct_UClass_UTP_Enemy_Type01_AniInstance, &UTP_Enemy_Type01_AniInstance::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("UTP_Enemy_Type01_AniInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_Enemy_Type01_AniInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
