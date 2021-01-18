// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Weapon/LV_WP_THSword_Type01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_WP_THSword_Type01() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_WP_THSword_Type01_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_WP_THSword_Type01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_InteractionInterface_NoRegister();
// End Cross Module References
	void ALV_WP_THSword_Type01::StaticRegisterNativesALV_WP_THSword_Type01()
	{
		UClass* Class = ALV_WP_THSword_Type01::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwordBeginsOverlap", &ALV_WP_THSword_Type01::execSwordBeginsOverlap },
			{ "SwordEndsOverlap", &ALV_WP_THSword_Type01::execSwordEndsOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics
	{
		struct LV_WP_THSword_Type01_eventSwordBeginsOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(LV_WP_THSword_Type01_eventSwordBeginsOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LV_WP_THSword_Type01_eventSwordBeginsOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LV_WP_THSword_Type01_eventSwordBeginsOverlap_Parms), &Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_WP_THSword_Type01_eventSwordBeginsOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_WP_THSword_Type01_eventSwordBeginsOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_WP_THSword_Type01_eventSwordBeginsOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_WP_THSword_Type01_eventSwordBeginsOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Weapon/LV_WP_THSword_Type01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_WP_THSword_Type01, "SwordBeginsOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(LV_WP_THSword_Type01_eventSwordBeginsOverlap_Parms), Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics
	{
		struct LV_WP_THSword_Type01_eventSwordEndsOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_WP_THSword_Type01_eventSwordEndsOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_WP_THSword_Type01_eventSwordEndsOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_WP_THSword_Type01_eventSwordEndsOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_WP_THSword_Type01_eventSwordEndsOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Weapon/LV_WP_THSword_Type01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_WP_THSword_Type01, "SwordEndsOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(LV_WP_THSword_Type01_eventSwordEndsOverlap_Parms), Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALV_WP_THSword_Type01_NoRegister()
	{
		return ALV_WP_THSword_Type01::StaticClass();
	}
	struct Z_Construct_UClass_ALV_WP_THSword_Type01_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_WP_THSword_Type01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALV_WP_THSword_Type01_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordBeginsOverlap, "SwordBeginsOverlap" }, // 1276381609
		{ &Z_Construct_UFunction_ALV_WP_THSword_Type01_SwordEndsOverlap, "SwordEndsOverlap" }, // 4046781891
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_WP_THSword_Type01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Weapon/LV_WP_THSword_Type01.h" },
		{ "ModuleRelativePath", "Public/LV_Weapon/LV_WP_THSword_Type01.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALV_WP_THSword_Type01_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTP_InteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ALV_WP_THSword_Type01, ITP_InteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_WP_THSword_Type01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_WP_THSword_Type01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_WP_THSword_Type01_Statics::ClassParams = {
		&ALV_WP_THSword_Type01::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ALV_WP_THSword_Type01_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_WP_THSword_Type01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_WP_THSword_Type01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_WP_THSword_Type01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_WP_THSword_Type01, 1688699094);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_WP_THSword_Type01(Z_Construct_UClass_ALV_WP_THSword_Type01, &ALV_WP_THSword_Type01::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_WP_THSword_Type01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_WP_THSword_Type01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
