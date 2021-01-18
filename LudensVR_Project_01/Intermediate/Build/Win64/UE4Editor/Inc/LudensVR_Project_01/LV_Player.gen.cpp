// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_Player() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ULV_Player_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ULV_Player();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void ULV_Player::StaticRegisterNativesULV_Player()
	{
	}
	UClass* Z_Construct_UClass_ULV_Player_NoRegister()
	{
		return ULV_Player::StaticClass();
	}
	struct Z_Construct_UClass_ULV_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULV_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_Player_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LV_Player.h" },
		{ "ModuleRelativePath", "Public/LV_Player.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULV_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULV_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULV_Player_Statics::ClassParams = {
		&ULV_Player::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULV_Player_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULV_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULV_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULV_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULV_Player, 1349431856);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULV_Player(Z_Construct_UClass_ULV_Player, &ULV_Player::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ULV_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULV_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
