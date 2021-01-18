// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Enemy/TP_Enemy_Type02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_Enemy_Type02() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_Enemy_Type02_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_Enemy_Type02();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_Enemy_Type02_AttackCheck();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_Enemy_Type02_AniInstance_NoRegister();
// End Cross Module References
	void ATP_Enemy_Type02::StaticRegisterNativesATP_Enemy_Type02()
	{
		UClass* Class = ATP_Enemy_Type02::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackCheck", &ATP_Enemy_Type02::execAttackCheck },
			{ "OnAttackMontageEnded", &ATP_Enemy_Type02::execOnAttackMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_Enemy_Type02_AttackCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_Type02_AttackCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player attack the enemy" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type02.h" },
		{ "ToolTip", "void Action_Hit(AActor enemy, int damage);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_Type02_AttackCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy_Type02, "AttackCheck", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_Enemy_Type02_AttackCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_Type02_AttackCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_Enemy_Type02_AttackCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_Enemy_Type02_AttackCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics
	{
		struct TP_Enemy_Type02_eventOnAttackMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((TP_Enemy_Type02_eventOnAttackMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::NewProp_bInterrupted = { UE4CodeGen_Private::EPropertyClass::Bool, "bInterrupted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_Enemy_Type02_eventOnAttackMontageEnded_Parms), &Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_Enemy_Type02_eventOnAttackMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::NewProp_bInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type02.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy_Type02, "OnAttackMontageEnded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(TP_Enemy_Type02_eventOnAttackMontageEnded_Parms), Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATP_Enemy_Type02_NoRegister()
	{
		return ATP_Enemy_Type02::StaticClass();
	}
	struct Z_Construct_UClass_ATP_Enemy_Type02_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ABAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ABAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_Enemy_Type02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_Enemy_Type02_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_Enemy_Type02_AttackCheck, "AttackCheck" }, // 1383085544
		{ &Z_Construct_UFunction_ATP_Enemy_Type02_OnAttackMontageEnded, "OnAttackMontageEnded" }, // 3040942878
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Type02_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LV_Enemy/TP_Enemy_Type02.h" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type02.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_ABAnim_MetaData[] = {
		{ "Category", "TP_Enemy_Type02" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type02.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_ABAnim = { UE4CodeGen_Private::EPropertyClass::Object, "ABAnim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ATP_Enemy_Type02, ABAnim), Z_Construct_UClass_UTP_Enemy_Type02_AniInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_ABAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_ABAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "Category", "TP_Enemy_Type02" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type02.h" },
	};
#endif
	void Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((ATP_Enemy_Type02*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_IsAttacking = { UE4CodeGen_Private::EPropertyClass::Bool, "IsAttacking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_Enemy_Type02), &Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_IsAttacking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "TP_Enemy_Type02" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type02.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Int, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATP_Enemy_Type02, Damage), METADATA_PARAMS(Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "TP_Enemy_Type02" },
		{ "ModuleRelativePath", "Public/LV_Enemy/TP_Enemy_Type02.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_HP = { UE4CodeGen_Private::EPropertyClass::Int, "HP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATP_Enemy_Type02, HP), METADATA_PARAMS(Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_HP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_HP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_Enemy_Type02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_ABAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_IsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Type02_Statics::NewProp_HP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_Enemy_Type02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_Enemy_Type02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_Enemy_Type02_Statics::ClassParams = {
		&ATP_Enemy_Type02::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATP_Enemy_Type02_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type02_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATP_Enemy_Type02_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Type02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_Enemy_Type02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_Enemy_Type02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_Enemy_Type02, 3473197015);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_Enemy_Type02(Z_Construct_UClass_ATP_Enemy_Type02, &ATP_Enemy_Type02::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATP_Enemy_Type02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_Enemy_Type02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
