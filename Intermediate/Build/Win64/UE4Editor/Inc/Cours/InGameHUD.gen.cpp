// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cours/UI/InGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameHUD() {}
// Cross Module References
	COURS_API UClass* Z_Construct_UClass_AInGameHUD_NoRegister();
	COURS_API UClass* Z_Construct_UClass_AInGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Cours();
	COURS_API UFunction* Z_Construct_UFunction_AInGameHUD_ResetCharge();
	COURS_API UFunction* Z_Construct_UFunction_AInGameHUD_ResetCombo();
	COURS_API UFunction* Z_Construct_UFunction_AInGameHUD_UpdateChargeBar();
	COURS_API UFunction* Z_Construct_UFunction_AInGameHUD_UpdateComboCount();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AInGameHUD::StaticRegisterNativesAInGameHUD()
	{
		UClass* Class = AInGameHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetCharge", &AInGameHUD::execResetCharge },
			{ "ResetCombo", &AInGameHUD::execResetCombo },
			{ "UpdateChargeBar", &AInGameHUD::execUpdateChargeBar },
			{ "UpdateComboCount", &AInGameHUD::execUpdateComboCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInGameHUD_ResetCharge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameHUD_ResetCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameHUD_ResetCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameHUD, nullptr, "ResetCharge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameHUD_ResetCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameHUD_ResetCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameHUD_ResetCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameHUD_ResetCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameHUD_ResetCombo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameHUD_ResetCombo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameHUD_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameHUD, nullptr, "ResetCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameHUD_ResetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameHUD_ResetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameHUD_ResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameHUD_ResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics
	{
		struct InGameHUD_eventUpdateChargeBar_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameHUD_eventUpdateChargeBar_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameHUD, nullptr, "UpdateChargeBar", nullptr, nullptr, sizeof(InGameHUD_eventUpdateChargeBar_Parms), Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameHUD_UpdateChargeBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameHUD_UpdateChargeBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics
	{
		struct InGameHUD_eventUpdateComboCount_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameHUD_eventUpdateComboCount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameHUD, nullptr, "UpdateComboCount", nullptr, nullptr, sizeof(InGameHUD_eventUpdateComboCount_Parms), Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInGameHUD_UpdateComboCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInGameHUD_UpdateComboCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInGameHUD_NoRegister()
	{
		return AInGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargePunchClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChargePunchClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComboClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Cours,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInGameHUD_ResetCharge, "ResetCharge" }, // 2977027659
		{ &Z_Construct_UFunction_AInGameHUD_ResetCombo, "ResetCombo" }, // 1722786725
		{ &Z_Construct_UFunction_AInGameHUD_UpdateChargeBar, "UpdateChargeBar" }, // 2337083895
		{ &Z_Construct_UFunction_AInGameHUD_UpdateComboCount, "UpdateComboCount" }, // 1699183653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/InGameHUD.h" },
		{ "ModuleRelativePath", "UI/InGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_ChargePunchClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "UI/InGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_ChargePunchClass = { "ChargePunchClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInGameHUD, ChargePunchClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInGameHUD_Statics::NewProp_ChargePunchClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_ChargePunchClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::NewProp_ComboClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "UI/InGameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInGameHUD_Statics::NewProp_ComboClass = { "ComboClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInGameHUD, ComboClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInGameHUD_Statics::NewProp_ComboClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::NewProp_ComboClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInGameHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_ChargePunchClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameHUD_Statics::NewProp_ComboClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInGameHUD_Statics::ClassParams = {
		&AInGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInGameHUD, 3923849187);
	template<> COURS_API UClass* StaticClass<AInGameHUD>()
	{
		return AInGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInGameHUD(Z_Construct_UClass_AInGameHUD, &AInGameHUD::StaticClass, TEXT("/Script/Cours"), TEXT("AInGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
