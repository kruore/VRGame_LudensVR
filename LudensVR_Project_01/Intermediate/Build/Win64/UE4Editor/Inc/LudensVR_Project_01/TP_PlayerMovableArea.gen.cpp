// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/VR_Template/TP_PlayerMovableArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_PlayerMovableArea() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_PlayerMovableArea_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_PlayerMovableArea();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ATP_PlayerMovableArea::StaticRegisterNativesATP_PlayerMovableArea()
	{
		UClass* Class = ATP_PlayerMovableArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreaBeginsOverlap", &ATP_PlayerMovableArea::execAreaBeginsOverlap },
			{ "AreaEndsOverlap", &ATP_PlayerMovableArea::execAreaEndsOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics
	{
		struct TP_PlayerMovableArea_eventAreaBeginsOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(TP_PlayerMovableArea_eventAreaBeginsOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TP_PlayerMovableArea_eventAreaBeginsOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_PlayerMovableArea_eventAreaBeginsOverlap_Parms), &Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_PlayerMovableArea_eventAreaBeginsOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_PlayerMovableArea_eventAreaBeginsOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_PlayerMovableArea_eventAreaBeginsOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_PlayerMovableArea_eventAreaBeginsOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VR_Template/TP_PlayerMovableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerMovableArea, "AreaBeginsOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(TP_PlayerMovableArea_eventAreaBeginsOverlap_Parms), Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics
	{
		struct TP_PlayerMovableArea_eventAreaEndsOverlap_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_PlayerMovableArea_eventAreaEndsOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_PlayerMovableArea_eventAreaEndsOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_PlayerMovableArea_eventAreaEndsOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_PlayerMovableArea_eventAreaEndsOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VR_Template/TP_PlayerMovableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerMovableArea, "AreaEndsOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(TP_PlayerMovableArea_eventAreaEndsOverlap_Parms), Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATP_PlayerMovableArea_NoRegister()
	{
		return ATP_PlayerMovableArea::StaticClass();
	}
	struct Z_Construct_UClass_ATP_PlayerMovableArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_PlayerMovableArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_PlayerMovableArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_PlayerMovableArea_AreaBeginsOverlap, "AreaBeginsOverlap" }, // 884703900
		{ &Z_Construct_UFunction_ATP_PlayerMovableArea_AreaEndsOverlap, "AreaEndsOverlap" }, // 3985988331
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerMovableArea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VR_Template/TP_PlayerMovableArea.h" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_PlayerMovableArea.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerMovableArea_Statics::NewProp_OverlapVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerMovableArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_PlayerMovableArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerMovableArea_Statics::NewProp_OverlapVolume = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_PlayerMovableArea, OverlapVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_PlayerMovableArea_Statics::NewProp_OverlapVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerMovableArea_Statics::NewProp_OverlapVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_PlayerMovableArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerMovableArea_Statics::NewProp_OverlapVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_PlayerMovableArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_PlayerMovableArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_PlayerMovableArea_Statics::ClassParams = {
		&ATP_PlayerMovableArea::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATP_PlayerMovableArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerMovableArea_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATP_PlayerMovableArea_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerMovableArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_PlayerMovableArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_PlayerMovableArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_PlayerMovableArea, 3670267664);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_PlayerMovableArea(Z_Construct_UClass_ATP_PlayerMovableArea, &ATP_PlayerMovableArea::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATP_PlayerMovableArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_PlayerMovableArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
