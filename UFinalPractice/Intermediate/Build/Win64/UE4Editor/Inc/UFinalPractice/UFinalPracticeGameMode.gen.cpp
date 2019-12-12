// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UFinalPractice/UFinalPracticeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFinalPracticeGameMode() {}
// Cross Module References
	UFINALPRACTICE_API UClass* Z_Construct_UClass_AUFinalPracticeGameMode_NoRegister();
	UFINALPRACTICE_API UClass* Z_Construct_UClass_AUFinalPracticeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UFinalPractice();
// End Cross Module References
	void AUFinalPracticeGameMode::StaticRegisterNativesAUFinalPracticeGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUFinalPracticeGameMode_NoRegister()
	{
		return AUFinalPracticeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUFinalPracticeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUFinalPracticeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UFinalPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUFinalPracticeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UFinalPracticeGameMode.h" },
		{ "ModuleRelativePath", "UFinalPracticeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUFinalPracticeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUFinalPracticeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUFinalPracticeGameMode_Statics::ClassParams = {
		&AUFinalPracticeGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUFinalPracticeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUFinalPracticeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUFinalPracticeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUFinalPracticeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUFinalPracticeGameMode, 2406183090);
	template<> UFINALPRACTICE_API UClass* StaticClass<AUFinalPracticeGameMode>()
	{
		return AUFinalPracticeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUFinalPracticeGameMode(Z_Construct_UClass_AUFinalPracticeGameMode, &AUFinalPracticeGameMode::StaticClass, TEXT("/Script/UFinalPractice"), TEXT("AUFinalPracticeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUFinalPracticeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
