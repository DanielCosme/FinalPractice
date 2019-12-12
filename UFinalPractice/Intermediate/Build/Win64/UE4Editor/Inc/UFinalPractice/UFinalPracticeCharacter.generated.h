// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UFINALPRACTICE_UFinalPracticeCharacter_generated_h
#error "UFinalPracticeCharacter.generated.h already included, missing '#pragma once' in UFinalPracticeCharacter.h"
#endif
#define UFINALPRACTICE_UFinalPracticeCharacter_generated_h

#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_RPC_WRAPPERS
#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUFinalPracticeCharacter(); \
	friend struct Z_Construct_UClass_AUFinalPracticeCharacter_Statics; \
public: \
	DECLARE_CLASS(AUFinalPracticeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UFinalPractice"), NO_API) \
	DECLARE_SERIALIZER(AUFinalPracticeCharacter)


#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUFinalPracticeCharacter(); \
	friend struct Z_Construct_UClass_AUFinalPracticeCharacter_Statics; \
public: \
	DECLARE_CLASS(AUFinalPracticeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UFinalPractice"), NO_API) \
	DECLARE_SERIALIZER(AUFinalPracticeCharacter)


#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUFinalPracticeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUFinalPracticeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUFinalPracticeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUFinalPracticeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUFinalPracticeCharacter(AUFinalPracticeCharacter&&); \
	NO_API AUFinalPracticeCharacter(const AUFinalPracticeCharacter&); \
public:


#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUFinalPracticeCharacter(AUFinalPracticeCharacter&&); \
	NO_API AUFinalPracticeCharacter(const AUFinalPracticeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUFinalPracticeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUFinalPracticeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUFinalPracticeCharacter)


#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AUFinalPracticeCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AUFinalPracticeCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AUFinalPracticeCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AUFinalPracticeCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AUFinalPracticeCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AUFinalPracticeCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AUFinalPracticeCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AUFinalPracticeCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(AUFinalPracticeCharacter, HP); }


#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_12_PROLOG
#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_RPC_WRAPPERS \
	UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_INCLASS \
	UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_INCLASS_NO_PURE_DECLS \
	UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UFINALPRACTICE_API UClass* StaticClass<class AUFinalPracticeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UFinalPractice_Source_UFinalPractice_UFinalPracticeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
