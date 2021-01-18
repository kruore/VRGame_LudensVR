// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/VR_Template/TP_VirtualRealityPawn_Motion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_VirtualRealityPawn_Motion() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_MotionController_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ATP_VirtualRealityPawn_Motion::StaticRegisterNativesATP_VirtualRealityPawn_Motion()
	{
		UClass* Class = ATP_VirtualRealityPawn_Motion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteTeleportation", &ATP_VirtualRealityPawn_Motion::execExecuteTeleportation },
			{ "GetRotationFromInput", &ATP_VirtualRealityPawn_Motion::execGetRotationFromInput },
			{ "TeleportActor", &ATP_VirtualRealityPawn_Motion::execTeleportActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventExecuteTeleportation_Parms
		{
			ATP_MotionController* MotionController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::NewProp_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventExecuteTeleportation_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::NewProp_MotionController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "ExecuteTeleportation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TP_VirtualRealityPawn_Motion_eventExecuteTeleportation_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms
		{
			float UpAxis;
			float RightAxis;
			ATP_MotionController* MotionController;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_RightAxis = { UE4CodeGen_Private::EPropertyClass::Float, "RightAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, RightAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_UpAxis = { UE4CodeGen_Private::EPropertyClass::Float, "UpAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, UpAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_RightAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_UpAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "GetRotationFromInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventTeleportActor_Parms
		{
			ATP_MotionController* MotionController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::NewProp_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventTeleportActor_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::NewProp_MotionController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "TeleportActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TP_VirtualRealityPawn_Motion_eventTeleportActor_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_NoRegister()
	{
		return ATP_VirtualRealityPawn_Motion::StaticClass();
	}
	struct Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Highlight_TR_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Highlight_TR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRollToRotate_MetaData[];
#endif
		static void NewProp_bUseControllerRollToRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRollToRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultPlayerHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftStickDown_MetaData[];
#endif
		static void NewProp_bLeftStickDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftStickDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRightStickDown_MetaData[];
#endif
		static void NewProp_bRightStickDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRightStickDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbDeadzone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbDeadzone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportFadeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportFadeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTeleporting_MetaData[];
#endif
		static void NewProp_bIsTeleporting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTeleporting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation, "ExecuteTeleportation" }, // 2601693919
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput, "GetRotationFromInput" }, // 3533178774
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor, "TeleportActor" }, // 3755123412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VR_Template/TP_VirtualRealityPawn_Motion.h" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Highlight_TR_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Highlight_TR = { UE4CodeGen_Private::EPropertyClass::Object, "Highlight_TR", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Highlight_TR), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Highlight_TR_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Highlight_TR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bUseControllerRollToRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRollToRotate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultPlayerHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, DefaultPlayerHeight), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bLeftStickDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown = { UE4CodeGen_Private::EPropertyClass::Bool, "bLeftStickDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bRightStickDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown = { UE4CodeGen_Private::EPropertyClass::Bool, "bRightStickDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone = { UE4CodeGen_Private::EPropertyClass::Float, "ThumbDeadzone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, ThumbDeadzone), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportFadeColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, TeleportFadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bIsTeleporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTeleporting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeInDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, FadeInDuration), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, FadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController = { UE4CodeGen_Private::EPropertyClass::Object, "RightController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, RightController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController = { UE4CodeGen_Private::EPropertyClass::Object, "LeftController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, LeftController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CapsuleComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CapsuleComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera = { UE4CodeGen_Private::EPropertyClass::Object, "VRCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, VRCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, CameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Template/TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene = { UE4CodeGen_Private::EPropertyClass::Object, "RootScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Highlight_TR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_VirtualRealityPawn_Motion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::ClassParams = {
		&ATP_VirtualRealityPawn_Motion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_VirtualRealityPawn_Motion, 3881341421);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_VirtualRealityPawn_Motion(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, &ATP_VirtualRealityPawn_Motion::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATP_VirtualRealityPawn_Motion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_VirtualRealityPawn_Motion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
