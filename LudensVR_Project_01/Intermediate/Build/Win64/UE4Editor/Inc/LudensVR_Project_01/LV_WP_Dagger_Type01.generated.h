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
#ifdef LUDENSVR_PROJECT_01_LV_WP_Dagger_Type01_generated_h
#error "LV_WP_Dagger_Type01.generated.h already included, missing '#pragma once' in LV_WP_Dagger_Type01.h"
#endif
#define LUDENSVR_PROJECT_01_LV_WP_Dagger_Type01_generated_h

#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwordEndsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwordEndsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwordBeginsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwordBeginsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwordEndsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwordEndsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwordBeginsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwordBeginsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALV_WP_Dagger_Type01(); \
	friend struct Z_Construct_UClass_ALV_WP_Dagger_Type01_Statics; \
public: \
	DECLARE_CLASS(ALV_WP_Dagger_Type01, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_WP_Dagger_Type01) \
	virtual UObject* _getUObject() const override { return const_cast<ALV_WP_Dagger_Type01*>(this); }


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALV_WP_Dagger_Type01(); \
	friend struct Z_Construct_UClass_ALV_WP_Dagger_Type01_Statics; \
public: \
	DECLARE_CLASS(ALV_WP_Dagger_Type01, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_WP_Dagger_Type01) \
	virtual UObject* _getUObject() const override { return const_cast<ALV_WP_Dagger_Type01*>(this); }


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALV_WP_Dagger_Type01(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALV_WP_Dagger_Type01) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_WP_Dagger_Type01); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_WP_Dagger_Type01); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_WP_Dagger_Type01(ALV_WP_Dagger_Type01&&); \
	NO_API ALV_WP_Dagger_Type01(const ALV_WP_Dagger_Type01&); \
public:


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_WP_Dagger_Type01(ALV_WP_Dagger_Type01&&); \
	NO_API ALV_WP_Dagger_Type01(const ALV_WP_Dagger_Type01&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_WP_Dagger_Type01); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_WP_Dagger_Type01); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALV_WP_Dagger_Type01)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_PRIVATE_PROPERTY_OFFSET
#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_11_PROLOG
#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_RPC_WRAPPERS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_INCLASS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WP_Dagger_Type01_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
