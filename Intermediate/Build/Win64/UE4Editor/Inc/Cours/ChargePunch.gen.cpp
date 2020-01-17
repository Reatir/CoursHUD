// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cours/UI/ChargePunch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChargePunch() {}
// Cross Module References
	COURS_API UClass* Z_Construct_UClass_UChargePunch_NoRegister();
	COURS_API UClass* Z_Construct_UClass_UChargePunch();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Cours();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UChargePunch::StaticRegisterNativesUChargePunch()
	{
	}
	UClass* Z_Construct_UClass_UChargePunch_NoRegister()
	{
		return UChargePunch::StaticClass();
	}
	struct Z_Construct_UClass_UChargePunch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeBarPunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChargeBarPunch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChargePunch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Cours,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargePunch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ChargePunch.h" },
		{ "ModuleRelativePath", "UI/ChargePunch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargePunch_Statics::NewProp_ChargeBarPunch_MetaData[] = {
		{ "Bindwidget", "" },
		{ "Category", "ChargePunch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ChargePunch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChargePunch_Statics::NewProp_ChargeBarPunch = { "ChargeBarPunch", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargePunch, ChargeBarPunch), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChargePunch_Statics::NewProp_ChargeBarPunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargePunch_Statics::NewProp_ChargeBarPunch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChargePunch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargePunch_Statics::NewProp_ChargeBarPunch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChargePunch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChargePunch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChargePunch_Statics::ClassParams = {
		&UChargePunch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChargePunch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChargePunch_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChargePunch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChargePunch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChargePunch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChargePunch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChargePunch, 2004017169);
	template<> COURS_API UClass* StaticClass<UChargePunch>()
	{
		return UChargePunch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChargePunch(Z_Construct_UClass_UChargePunch, &UChargePunch::StaticClass, TEXT("/Script/Cours"), TEXT("UChargePunch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChargePunch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
