// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UFINALPRACTICE_HealthKit_generated_h
#error "HealthKit.generated.h already included, missing '#pragma once' in HealthKit.h"
#endif
#define UFINALPRACTICE_HealthKit_generated_h

#define UFinalPractice_Source_UFinalPractice_HealthKit_h_12_RPC_WRAPPERS
#define UFinalPractice_Source_UFinalPractice_HealthKit_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UFinalPractice_Source_UFinalPractice_HealthKit_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthKit(); \
	friend struct Z_Construct_UClass_AHealthKit_Statics; \
public: \
	DECLARE_CLASS(AHealthKit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UFinalPractice"), NO_API) \
	DECLARE_SERIALIZER(AHealthKit)


#define UFinalPractice_Source_UFinalPractice_HealthKit_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHealthKit(); \
	friend struct Z_Construct_UClass_AHealthKit_Statics; \
public: \
	DECLARE_CLASS(AHealthKit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UFinalPractice"), NO_API) \
	DECLARE_SERIALIZER(AHealthKit)


#define UFinalPractice_Source_UFinalPractice_HealthKit_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthKit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthKit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthKit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthKit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthKit(AHealthKit&&); \
	NO_API AHealthKit(const AHealthKit&); \
public:


#define UFinalPractice_Source_UFinalPractice_HealthKit_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthKit(AHealthKit&&); \
	NO_API AHealthKit(const AHealthKit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthKit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthKit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthKit)


#define UFinalPractice_Source_UFinalPractice_HealthKit_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AHealthKit, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__HealSound() { return STRUCT_OFFSET(AHealthKit, HealSound); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(AHealthKit, Duration); }


#define UFinalPractice_Source_UFinalPractice_HealthKit_h_9_PROLOG
#define UFinalPractice_Source_UFinalPractice_HealthKit_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UFinalPractice_Source_UFinalPractice_HealthKit_h_12_PRIVATE_PROPERTY_OFFSET \
	UFinalPractice_Source_UFinalPractice_HealthKit_h_12_RPC_WRAPPERS \
	UFinalPractice_Source_UFinalPractice_HealthKit_h_12_INCLASS \
	UFinalPractice_Source_UFinalPractice_HealthKit_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UFinalPractice_Source_UFinalPractice_HealthKit_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UFinalPractice_Source_UFinalPractice_HealthKit_h_12_PRIVATE_PROPERTY_OFFSET \
	UFinalPractice_Source_UFinalPractice_HealthKit_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UFinalPractice_Source_UFinalPractice_HealthKit_h_12_INCLASS_NO_PURE_DECLS \
	UFinalPractice_Source_UFinalPractice_HealthKit_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UFINALPRACTICE_API UClass* StaticClass<class AHealthKit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UFinalPractice_Source_UFinalPractice_HealthKit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
