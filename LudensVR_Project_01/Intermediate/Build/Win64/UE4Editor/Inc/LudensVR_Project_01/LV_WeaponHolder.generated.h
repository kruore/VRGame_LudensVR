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
#ifdef LUDENSVR_PROJECT_01_LV_WeaponHolder_generated_h
#error "LV_WeaponHolder.generated.h already included, missing '#pragma once' in LV_WeaponHolder.h"
#endif
#define LUDENSVR_PROJECT_01_LV_WeaponHolder_generated_h

#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWeaponHolderEndsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WeaponHolderEndsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWeaponHolderBeginsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WeaponHolderBeginsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWeaponHolderEndsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WeaponHolderEndsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWeaponHolderBeginsOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WeaponHolderBeginsOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALV_WeaponHolder(); \
	friend struct Z_Construct_UClass_ALV_WeaponHolder_Statics; \
public: \
	DECLARE_CLASS(ALV_WeaponHolder, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_WeaponHolder)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALV_WeaponHolder(); \
	friend struct Z_Construct_UClass_ALV_WeaponHolder_Statics; \
public: \
	DECLARE_CLASS(ALV_WeaponHolder, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_WeaponHolder)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALV_WeaponHolder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALV_WeaponHolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_WeaponHolder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_WeaponHolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_WeaponHolder(ALV_WeaponHolder&&); \
	NO_API ALV_WeaponHolder(const ALV_WeaponHolder&); \
public:


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_WeaponHolder(ALV_WeaponHolder&&); \
	NO_API ALV_WeaponHolder(const ALV_WeaponHolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_WeaponHolder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_WeaponHolder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALV_WeaponHolder)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LeftController() { return STRUCT_OFFSET(ALV_WeaponHolder, LeftController); } \
	FORCEINLINE static uint32 __PPO__RightController() { return STRUCT_OFFSET(ALV_WeaponHolder, RightController); }


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_9_PROLOG
#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_RPC_WRAPPERS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_INCLASS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Weapon_LV_WeaponHolder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
