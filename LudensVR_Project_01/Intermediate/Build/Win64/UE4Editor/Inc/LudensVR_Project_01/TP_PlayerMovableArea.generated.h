// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef LUDENSVR_PROJECT_01_TP_PlayerMovableArea_generated_h
#error "TP_PlayerMovableArea.generated.h already included, missing '#pragma once' in TP_PlayerMovableArea.h"
#endif
#define LUDENSVR_PROJECT_01_TP_PlayerMovableArea_generated_h

#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAreaEndsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AreaEndsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreaBeginsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AreaBeginsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAreaEndsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AreaEndsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreaBeginsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AreaBeginsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_PlayerMovableArea(); \
	friend struct Z_Construct_UClass_ATP_PlayerMovableArea_Statics; \
public: \
	DECLARE_CLASS(ATP_PlayerMovableArea, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_PlayerMovableArea)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATP_PlayerMovableArea(); \
	friend struct Z_Construct_UClass_ATP_PlayerMovableArea_Statics; \
public: \
	DECLARE_CLASS(ATP_PlayerMovableArea, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_PlayerMovableArea)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_PlayerMovableArea(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_PlayerMovableArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_PlayerMovableArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_PlayerMovableArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_PlayerMovableArea(ATP_PlayerMovableArea&&); \
	NO_API ATP_PlayerMovableArea(const ATP_PlayerMovableArea&); \
public:


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_PlayerMovableArea(ATP_PlayerMovableArea&&); \
	NO_API ATP_PlayerMovableArea(const ATP_PlayerMovableArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_PlayerMovableArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_PlayerMovableArea); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_PlayerMovableArea)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlapVolume() { return STRUCT_OFFSET(ATP_PlayerMovableArea, OverlapVolume); }


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_9_PROLOG
#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_RPC_WRAPPERS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_INCLASS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_01_Source_LudensVR_Project_01_Public_VR_Template_TP_PlayerMovableArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
