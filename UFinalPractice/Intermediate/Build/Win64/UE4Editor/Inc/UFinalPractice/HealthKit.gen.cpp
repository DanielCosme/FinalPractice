// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UFinalPractice/HealthKit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthKit() {}
// Cross Module References
	UFINALPRACTICE_API UClass* Z_Construct_UClass_AHealthKit_NoRegister();
	UFINALPRACTICE_API UClass* Z_Construct_UClass_AHealthKit();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UFinalPractice();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AHealthKit::StaticRegisterNativesAHealthKit()
	{
	}
	UClass* Z_Construct_UClass_AHealthKit_NoRegister()
	{
		return AHealthKit::StaticClass();
	}
	struct Z_Construct_UClass_AHealthKit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthKit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UFinalPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthKit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealthKit.h" },
		{ "ModuleRelativePath", "HealthKit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthKit_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "HealthKit" },
		{ "ModuleRelativePath", "HealthKit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthKit_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealthKit, Duration), METADATA_PARAMS(Z_Construct_UClass_AHealthKit_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealthKit_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthKit_Statics::NewProp_HealSound_MetaData[] = {
		{ "Category", "HealthKit" },
		{ "ModuleRelativePath", "HealthKit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthKit_Statics::NewProp_HealSound = { "HealSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealthKit, HealSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealthKit_Statics::NewProp_HealSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealthKit_Statics::NewProp_HealSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthKit_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "HealthKit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealthKit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthKit_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealthKit, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealthKit_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealthKit_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthKit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthKit_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthKit_Statics::NewProp_HealSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthKit_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthKit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthKit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealthKit_Statics::ClassParams = {
		&AHealthKit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealthKit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHealthKit_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHealthKit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHealthKit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthKit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealthKit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealthKit, 1542143017);
	template<> UFINALPRACTICE_API UClass* StaticClass<AHealthKit>()
	{
		return AHealthKit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealthKit(Z_Construct_UClass_AHealthKit, &AHealthKit::StaticClass, TEXT("/Script/UFinalPractice"), TEXT("AHealthKit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthKit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
