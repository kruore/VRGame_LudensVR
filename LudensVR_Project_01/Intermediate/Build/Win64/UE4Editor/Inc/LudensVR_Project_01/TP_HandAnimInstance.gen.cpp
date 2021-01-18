// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/VR_Template/TP_HandAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_HandAnimInstance() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_HandAnimInstance_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_HandAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState();
	LUDENSVR_PROJECT_01_API UEnum* Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code();
// End Cross Module References
	void UTP_HandAnimInstance::StaticRegisterNativesUTP_HandAnimInstance()
	{
		UClass* Class = UTP_HandAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGripState", &UTP_HandAnimInstance::execSetGripState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics
	{
		struct TP_HandAnimInstance_eventSetGripState_Parms
		{
			EGrip_Code GripState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::NewProp_GripState = { UE4CodeGen_Private::EPropertyClass::Enum, "GripState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_HandAnimInstance_eventSetGripState_Parms, GripState), Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::NewProp_GripState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::NewProp_GripState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::NewProp_GripState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_HandAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_HandAnimInstance, "SetGripState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TP_HandAnimInstance_eventSetGripState_Parms), Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTP_HandAnimInstance_NoRegister()
	{
		return UTP_HandAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTP_HandAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGripState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentGripState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentGripState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_HandAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTP_HandAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTP_HandAnimInstance_SetGripState, "SetGripState" }, // 1471326457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_HandAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VR_Template/TP_HandAnimInstance.h" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_HandAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_HandAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentGripState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(UTP_HandAnimInstance, CurrentGripState), Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code, METADATA_PARAMS(Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTP_HandAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_HandAnimInstance_Statics::NewProp_CurrentGripState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_HandAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_HandAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTP_HandAnimInstance_Statics::ClassParams = {
		&UTP_HandAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UTP_HandAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTP_HandAnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTP_HandAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTP_HandAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTP_HandAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTP_HandAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTP_HandAnimInstance, 1512672122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTP_HandAnimInstance(Z_Construct_UClass_UTP_HandAnimInstance, &UTP_HandAnimInstance::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("UTP_HandAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_HandAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
