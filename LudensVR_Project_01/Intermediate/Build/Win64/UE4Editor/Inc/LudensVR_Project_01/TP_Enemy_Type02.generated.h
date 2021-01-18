// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef LUDENSVR_PROJECT_01_TP_Enemy_Type02_generated_h
#error "TP_Enemy_Type02.generated.h already included, missing '#pragma once' in TP_Enemy_Type02.h"
#endif
#define LUDENSVR_PROJECT_01_TP_Enemy_Type02_generated_h

#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackCheck(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackCheck(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_Enemy_Type02(); \
	friend struct Z_Construct_UClass_ATP_Enemy_Type02_Statics; \
public: \
	DECLARE_CLASS(ATP_Enemy_Type02, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_Enemy_Type02)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_INCLASS \
private: \
	static void StaticRegisterNativesATP_Enemy_Type02(); \
	friend struct Z_Construct_UClass_ATP_Enemy_Type02_Statics; \
public: \
	DECLARE_CLASS(ATP_Enemy_Type02, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_Enemy_Type02)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_Enemy_Type02(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_Enemy_Type02) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_Enemy_Type02); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_Enemy_Type02); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_Enemy_Type02(ATP_Enemy_Type02&&); \
	NO_API ATP_Enemy_Type02(const ATP_Enemy_Type02&); \
public:


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_Enemy_Type02(ATP_Enemy_Type02&&); \
	NO_API ATP_Enemy_Type02(const ATP_Enemy_Type02&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_Enemy_Type02); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_Enemy_Type02); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_Enemy_Type02)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(ATP_Enemy_Type02, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__ABAnim() { return STRUCT_OFFSET(ATP_Enemy_Type02, ABAnim); }


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_19_PROLOG
#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_RPC_WRAPPERS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_INCLASS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_01_Source_LudensVR_Project_01_Public_LV_Enemy_TP_Enemy_Type02_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
