// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/VR_Template/TP_VRDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_VRDataTable() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UEnum* Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	static UEnum* EGrip_Code_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code, Z_Construct_UPackage__Script_LudensVR_Project_01(), TEXT("EGrip_Code"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrip_Code(EGrip_Code_StaticEnum, TEXT("/Script/LudensVR_Project_01"), TEXT("EGrip_Code"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code_CRC() { return 3917265854U; }
	UEnum* Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LudensVR_Project_01();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrip_Code"), 0, Get_Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrip_Code::Open", (int64)EGrip_Code::Open },
				{ "EGrip_Code::CanGrab", (int64)EGrip_Code::CanGrab },
				{ "EGrip_Code::Grab", (int64)EGrip_Code::Grab },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VR_Template/TP_VRDataTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGrip_Code",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGrip_Code",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
