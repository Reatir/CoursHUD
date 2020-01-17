// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURS_CoursCharacter_generated_h
#error "CoursCharacter.generated.h already included, missing '#pragma once' in CoursCharacter.h"
#endif
#define COURS_CoursCharacter_generated_h

#define Cours_Source_Cours_CoursCharacter_h_12_SPARSE_DATA
#define Cours_Source_Cours_CoursCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateChargeBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateChargeBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetChargeBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetChargeBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCombo(); \
		P_NATIVE_END; \
	}


#define Cours_Source_Cours_CoursCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateChargeBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateChargeBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetChargeBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetChargeBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCombo(); \
		P_NATIVE_END; \
	}


#define Cours_Source_Cours_CoursCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoursCharacter(); \
	friend struct Z_Construct_UClass_ACoursCharacter_Statics; \
public: \
	DECLARE_CLASS(ACoursCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cours"), NO_API) \
	DECLARE_SERIALIZER(ACoursCharacter)


#define Cours_Source_Cours_CoursCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACoursCharacter(); \
	friend struct Z_Construct_UClass_ACoursCharacter_Statics; \
public: \
	DECLARE_CLASS(ACoursCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cours"), NO_API) \
	DECLARE_SERIALIZER(ACoursCharacter)


#define Cours_Source_Cours_CoursCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoursCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoursCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoursCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoursCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoursCharacter(ACoursCharacter&&); \
	NO_API ACoursCharacter(const ACoursCharacter&); \
public:


#define Cours_Source_Cours_CoursCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoursCharacter(ACoursCharacter&&); \
	NO_API ACoursCharacter(const ACoursCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoursCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoursCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoursCharacter)


#define Cours_Source_Cours_CoursCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACoursCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACoursCharacter, FollowCamera); }


#define Cours_Source_Cours_CoursCharacter_h_9_PROLOG
#define Cours_Source_Cours_CoursCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cours_Source_Cours_CoursCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Cours_Source_Cours_CoursCharacter_h_12_SPARSE_DATA \
	Cours_Source_Cours_CoursCharacter_h_12_RPC_WRAPPERS \
	Cours_Source_Cours_CoursCharacter_h_12_INCLASS \
	Cours_Source_Cours_CoursCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cours_Source_Cours_CoursCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cours_Source_Cours_CoursCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Cours_Source_Cours_CoursCharacter_h_12_SPARSE_DATA \
	Cours_Source_Cours_CoursCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Cours_Source_Cours_CoursCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Cours_Source_Cours_CoursCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURS_API UClass* StaticClass<class ACoursCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cours_Source_Cours_CoursCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
