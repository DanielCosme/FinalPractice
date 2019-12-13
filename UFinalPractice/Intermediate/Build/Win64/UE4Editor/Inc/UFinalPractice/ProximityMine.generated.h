// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UFINALPRACTICE_ProximityMine_generated_h
#error "ProximityMine.generated.h already included, missing '#pragma once' in ProximityMine.h"
#endif
#define UFINALPRACTICE_ProximityMine_generated_h

#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_RPC_WRAPPERS
#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProximityMine(); \
	friend struct Z_Construct_UClass_AProximityMine_Statics; \
public: \
	DECLARE_CLASS(AProximityMine, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UFinalPractice"), NO_API) \
	DECLARE_SERIALIZER(AProximityMine)


#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProximityMine(); \
	friend struct Z_Construct_UClass_AProximityMine_Statics; \
public: \
	DECLARE_CLASS(AProximityMine, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UFinalPractice"), NO_API) \
	DECLARE_SERIALIZER(AProximityMine)


#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProximityMine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProximityMine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProximityMine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProximityMine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProximityMine(AProximityMine&&); \
	NO_API AProximityMine(const AProximityMine&); \
public:


#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProximityMine(AProximityMine&&); \
	NO_API AProximityMine(const AProximityMine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProximityMine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProximityMine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProximityMine)


#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__player() { return STRUCT_OFFSET(AProximityMine, player); } \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(AProximityMine, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__Distance() { return STRUCT_OFFSET(AProximityMine, Distance); } \
	FORCEINLINE static uint32 __PPO__Delay() { return STRUCT_OFFSET(AProximityMine, Delay); } \
	FORCEINLINE static uint32 __PPO__particleSystem() { return STRUCT_OFFSET(AProximityMine, particleSystem); }


#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_9_PROLOG
#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_PRIVATE_PROPERTY_OFFSET \
	UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_RPC_WRAPPERS \
	UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_INCLASS \
	UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_PRIVATE_PROPERTY_OFFSET \
	UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_INCLASS_NO_PURE_DECLS \
	UFinalPractice_Source_UFinalPractice_ProximityMine_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UFINALPRACTICE_API UClass* StaticClass<class AProximityMine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UFinalPractice_Source_UFinalPractice_ProximityMine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
