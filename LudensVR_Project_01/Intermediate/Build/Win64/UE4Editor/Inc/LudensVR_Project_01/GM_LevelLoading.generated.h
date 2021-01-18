// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUDENSVR_PROJECT_01_GM_LevelLoading_generated_h
#error "GM_LevelLoading.generated.h already included, missing '#pragma once' in GM_LevelLoading.h"
#endif
#define LUDENSVR_PROJECT_01_GM_LevelLoading_generated_h

#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->QuitGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadNextLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param__NextLevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadNextLevel(Z_Param__NextLevelName); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->QuitGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadNextLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param__NextLevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadNextLevel(Z_Param__NextLevelName); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_LevelLoading(); \
	friend struct Z_Construct_UClass_AGM_LevelLoading_Statics; \
public: \
	DECLARE_CLASS(AGM_LevelLoading, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(AGM_LevelLoading)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGM_LevelLoading(); \
	friend struct Z_Construct_UClass_AGM_LevelLoading_Statics; \
public: \
	DECLARE_CLASS(AGM_LevelLoading, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(AGM_LevelLoading)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_LevelLoading(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_LevelLoading) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_LevelLoading); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_LevelLoading); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_LevelLoading(AGM_LevelLoading&&); \
	NO_API AGM_LevelLoading(const AGM_LevelLoading&); \
public:


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_LevelLoading(AGM_LevelLoading&&); \
	NO_API AGM_LevelLoading(const AGM_LevelLoading&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_LevelLoading); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_LevelLoading); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGM_LevelLoading)


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_PRIVATE_PROPERTY_OFFSET
#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_13_PROLOG
#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_RPC_WRAPPERS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_INCLASS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_01_Source_LudensVR_Project_01_Public_GameManager_GM_LevelLoading_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
