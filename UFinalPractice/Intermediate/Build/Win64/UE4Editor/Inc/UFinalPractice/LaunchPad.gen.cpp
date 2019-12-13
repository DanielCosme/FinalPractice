// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UFinalPractice/LaunchPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchPad() {}
// Cross Module References
	UFINALPRACTICE_API UClass* Z_Construct_UClass_ALaunchPad_NoRegister();
	UFINALPRACTICE_API UClass* Z_Construct_UClass_ALaunchPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UFinalPractice();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALaunchPad::StaticRegisterNativesALaunchPad()
	{
	}
	UClass* Z_Construct_UClass_ALaunchPad_NoRegister()
	{
		return ALaunchPad::StaticClass();
	}
	struct Z_Construct_UClass_ALaunchPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_upForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forwardForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_forwardForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaunchPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UFinalPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LaunchPad.h" },
		{ "ModuleRelativePath", "LaunchPad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_upForce_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "LaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_upForce = { "upForce", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaunchPad, upForce), METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_upForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_upForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_forwardForce_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "LaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_forwardForce = { "forwardForce", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaunchPad, forwardForce), METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_forwardForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_forwardForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaunchPad, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_upForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_forwardForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaunchPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaunchPad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaunchPad_Statics::ClassParams = {
		&ALaunchPad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALaunchPad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaunchPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaunchPad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaunchPad, 311792229);
	template<> UFINALPRACTICE_API UClass* StaticClass<ALaunchPad>()
	{
		return ALaunchPad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaunchPad(Z_Construct_UClass_ALaunchPad, &ALaunchPad::StaticClass, TEXT("/Script/UFinalPractice"), TEXT("ALaunchPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaunchPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
