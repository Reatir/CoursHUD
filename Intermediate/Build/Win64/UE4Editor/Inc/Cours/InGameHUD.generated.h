// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURS_InGameHUD_generated_h
#error "InGameHUD.generated.h already included, missing '#pragma once' in InGameHUD.h"
#endif
#define COURS_InGameHUD_generated_h

#define Cours_Source_Cours_UI_InGameHUD_h_18_SPARSE_DATA
#define Cours_Source_Cours_UI_InGameHUD_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateChargeBar) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateChargeBar(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCharge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCombo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateComboCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateComboCount(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Cours_Source_Cours_UI_InGameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateChargeBar) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateChargeBar(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCharge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCombo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateComboCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateComboCount(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Cours_Source_Cours_UI_InGameHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInGameHUD(); \
	friend struct Z_Construct_UClass_AInGameHUD_Statics; \
public: \
	DECLARE_CLASS(AInGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cours"), NO_API) \
	DECLARE_SERIALIZER(AInGameHUD)


#define Cours_Source_Cours_UI_InGameHUD_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAInGameHUD(); \
	friend struct Z_Construct_UClass_AInGameHUD_Statics; \
public: \
	DECLARE_CLASS(AInGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cours"), NO_API) \
	DECLARE_SERIALIZER(AInGameHUD)


#define Cours_Source_Cours_UI_InGameHUD_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInGameHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInGameHUD(AInGameHUD&&); \
	NO_API AInGameHUD(const AInGameHUD&); \
public:


#define Cours_Source_Cours_UI_InGameHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInGameHUD(AInGameHUD&&); \
	NO_API AInGameHUD(const AInGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGameHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInGameHUD)


#define Cours_Source_Cours_UI_InGameHUD_h_18_PRIVATE_PROPERTY_OFFSET
#define Cours_Source_Cours_UI_InGameHUD_h_15_PROLOG
#define Cours_Source_Cours_UI_InGameHUD_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cours_Source_Cours_UI_InGameHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	Cours_Source_Cours_UI_InGameHUD_h_18_SPARSE_DATA \
	Cours_Source_Cours_UI_InGameHUD_h_18_RPC_WRAPPERS \
	Cours_Source_Cours_UI_InGameHUD_h_18_INCLASS \
	Cours_Source_Cours_UI_InGameHUD_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cours_Source_Cours_UI_InGameHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cours_Source_Cours_UI_InGameHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	Cours_Source_Cours_UI_InGameHUD_h_18_SPARSE_DATA \
	Cours_Source_Cours_UI_InGameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Cours_Source_Cours_UI_InGameHUD_h_18_INCLASS_NO_PURE_DECLS \
	Cours_Source_Cours_UI_InGameHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURS_API UClass* StaticClass<class AInGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cours_Source_Cours_UI_InGameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
