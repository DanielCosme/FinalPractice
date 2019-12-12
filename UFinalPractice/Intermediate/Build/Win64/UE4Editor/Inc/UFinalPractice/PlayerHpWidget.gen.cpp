// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UFinalPractice/PlayerHpWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHpWidget() {}
// Cross Module References
	UFINALPRACTICE_API UClass* Z_Construct_UClass_UPlayerHpWidget_NoRegister();
	UFINALPRACTICE_API UClass* Z_Construct_UClass_UPlayerHpWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UFinalPractice();
	UFINALPRACTICE_API UClass* Z_Construct_UClass_AUFinalPracticeCharacter_NoRegister();
// End Cross Module References
	void UPlayerHpWidget::StaticRegisterNativesUPlayerHpWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerHpWidget_NoRegister()
	{
		return UPlayerHpWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHpWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHpWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UFinalPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHpWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerHpWidget.h" },
		{ "ModuleRelativePath", "PlayerHpWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHpWidget_Statics::NewProp_player_MetaData[] = {
		{ "Category", "PlayerHpWidget" },
		{ "ModuleRelativePath", "PlayerHpWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHpWidget_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHpWidget, player), Z_Construct_UClass_AUFinalPracticeCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHpWidget_Statics::NewProp_player_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerHpWidget_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHpWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHpWidget_Statics::NewProp_player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHpWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHpWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHpWidget_Statics::ClassParams = {
		&UPlayerHpWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerHpWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlayerHpWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHpWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerHpWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHpWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerHpWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerHpWidget, 798497618);
	template<> UFINALPRACTICE_API UClass* StaticClass<UPlayerHpWidget>()
	{
		return UPlayerHpWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerHpWidget(Z_Construct_UClass_UPlayerHpWidget, &UPlayerHpWidget::StaticClass, TEXT("/Script/UFinalPractice"), TEXT("UPlayerHpWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHpWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
