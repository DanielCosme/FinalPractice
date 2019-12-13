// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UFinalPractice/CubemonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubemonWidget() {}
// Cross Module References
	UFINALPRACTICE_API UClass* Z_Construct_UClass_UCubemonWidget_NoRegister();
	UFINALPRACTICE_API UClass* Z_Construct_UClass_UCubemonWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UFinalPractice();
	UFINALPRACTICE_API UClass* Z_Construct_UClass_ACubemon_NoRegister();
// End Cross Module References
	void UCubemonWidget::StaticRegisterNativesUCubemonWidget()
	{
	}
	UClass* Z_Construct_UClass_UCubemonWidget_NoRegister()
	{
		return UCubemonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCubemonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cubemon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cubemon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubemonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UFinalPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubemonWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CubemonWidget.h" },
		{ "ModuleRelativePath", "CubemonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubemonWidget_Statics::NewProp_cubemon_MetaData[] = {
		{ "Category", "CubemonWidget" },
		{ "ModuleRelativePath", "CubemonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubemonWidget_Statics::NewProp_cubemon = { "cubemon", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCubemonWidget, cubemon), Z_Construct_UClass_ACubemon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubemonWidget_Statics::NewProp_cubemon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCubemonWidget_Statics::NewProp_cubemon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubemonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubemonWidget_Statics::NewProp_cubemon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubemonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubemonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCubemonWidget_Statics::ClassParams = {
		&UCubemonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCubemonWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCubemonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCubemonWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCubemonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubemonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCubemonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCubemonWidget, 1989000301);
	template<> UFINALPRACTICE_API UClass* StaticClass<UCubemonWidget>()
	{
		return UCubemonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCubemonWidget(Z_Construct_UClass_UCubemonWidget, &UCubemonWidget::StaticClass, TEXT("/Script/UFinalPractice"), TEXT("UCubemonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubemonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
