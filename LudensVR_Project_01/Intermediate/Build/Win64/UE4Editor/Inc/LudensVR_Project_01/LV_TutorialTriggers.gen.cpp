// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/GameManager/LV_TutorialTriggers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_TutorialTriggers() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_TutorialTriggers_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_TutorialTriggers();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ALV_TutorialTriggers::StaticRegisterNativesALV_TutorialTriggers()
	{
		UClass* Class = ALV_TutorialTriggers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerBoxBeginsOverlap", &ALV_TutorialTriggers::execTriggerBoxBeginsOverlap },
			{ "TriggerBoxEndsOverlap", &ALV_TutorialTriggers::execTriggerBoxEndsOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics
	{
		struct LV_TutorialTriggers_eventTriggerBoxBeginsOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(LV_TutorialTriggers_eventTriggerBoxBeginsOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LV_TutorialTriggers_eventTriggerBoxBeginsOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LV_TutorialTriggers_eventTriggerBoxBeginsOverlap_Parms), &Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_TutorialTriggers_eventTriggerBoxBeginsOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_TutorialTriggers_eventTriggerBoxBeginsOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_TutorialTriggers_eventTriggerBoxBeginsOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_TutorialTriggers_eventTriggerBoxBeginsOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/LV_TutorialTriggers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_TutorialTriggers, "TriggerBoxBeginsOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(LV_TutorialTriggers_eventTriggerBoxBeginsOverlap_Parms), Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics
	{
		struct LV_TutorialTriggers_eventTriggerBoxEndsOverlap_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_TutorialTriggers_eventTriggerBoxEndsOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_TutorialTriggers_eventTriggerBoxEndsOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_TutorialTriggers_eventTriggerBoxEndsOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_TutorialTriggers_eventTriggerBoxEndsOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/LV_TutorialTriggers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_TutorialTriggers, "TriggerBoxEndsOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(LV_TutorialTriggers_eventTriggerBoxEndsOverlap_Parms), Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALV_TutorialTriggers_NoRegister()
	{
		return ALV_TutorialTriggers::StaticClass();
	}
	struct Z_Construct_UClass_ALV_TutorialTriggers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerTagNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_triggerTagNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_TutorialTriggers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALV_TutorialTriggers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxBeginsOverlap, "TriggerBoxBeginsOverlap" }, // 3233108655
		{ &Z_Construct_UFunction_ALV_TutorialTriggers_TriggerBoxEndsOverlap, "TriggerBoxEndsOverlap" }, // 1931851768
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_TutorialTriggers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager/LV_TutorialTriggers.h" },
		{ "ModuleRelativePath", "Public/GameManager/LV_TutorialTriggers.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_triggerTagNum_MetaData[] = {
		{ "Category", "LV_TutorialTriggers" },
		{ "ModuleRelativePath", "Public/GameManager/LV_TutorialTriggers.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_triggerTagNum = { UE4CodeGen_Private::EPropertyClass::Int, "triggerTagNum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALV_TutorialTriggers, triggerTagNum), METADATA_PARAMS(Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_triggerTagNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_triggerTagNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_OverlapVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LV_TutorialTriggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameManager/LV_TutorialTriggers.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_OverlapVolume = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_TutorialTriggers, OverlapVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_OverlapVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_OverlapVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALV_TutorialTriggers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_triggerTagNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_TutorialTriggers_Statics::NewProp_OverlapVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_TutorialTriggers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_TutorialTriggers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_TutorialTriggers_Statics::ClassParams = {
		&ALV_TutorialTriggers::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALV_TutorialTriggers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALV_TutorialTriggers_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALV_TutorialTriggers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_TutorialTriggers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_TutorialTriggers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_TutorialTriggers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_TutorialTriggers, 307350535);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_TutorialTriggers(Z_Construct_UClass_ALV_TutorialTriggers, &ALV_TutorialTriggers::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_TutorialTriggers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_TutorialTriggers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
