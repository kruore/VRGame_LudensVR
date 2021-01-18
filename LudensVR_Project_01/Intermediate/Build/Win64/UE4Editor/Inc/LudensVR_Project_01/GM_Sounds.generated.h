// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUDENSVR_PROJECT_01_GM_Sounds_generated_h
#error "GM_Sounds.generated.h already included, missing '#pragma once' in GM_Sounds.h"
#endif
#define LUDENSVR_PROJECT_01_GM_Sounds_generated_h

#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopSoundByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSoundByIndex(Z_Param__index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySoundByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySoundByIndex(Z_Param__index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFireSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFireSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayBackgroundMusic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayBackgroundMusic(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopSoundByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSoundByIndex(Z_Param__index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySoundByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySoundByIndex(Z_Param__index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFireSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFireSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayBackgroundMusic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayBackgroundMusic(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_Sounds(); \
	friend struct Z_Construct_UClass_AGM_Sounds_Statics; \
public: \
	DECLARE_CLASS(AGM_Sounds, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(AGM_Sounds)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGM_Sounds(); \
	friend struct Z_Construct_UClass_AGM_Sounds_Statics; \
public: \
	DECLARE_CLASS(AGM_Sounds, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(AGM_Sounds)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_Sounds(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_Sounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_Sounds); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_Sounds); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_Sounds(AGM_Sounds&&); \
	NO_API AGM_Sounds(const AGM_Sounds&); \
public:


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_Sounds(AGM_Sounds&&); \
	NO_API AGM_Sounds(const AGM_Sounds&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_Sounds); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_Sounds); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGM_Sounds)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_PRIVATE_PROPERTY_OFFSET
#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_12_PROLOG
#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_RPC_WRAPPERS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_INCLASS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_Sounds_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
