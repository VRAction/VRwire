// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef VRACTIONPROJECT_MyEnemyAIController_generated_h
#error "MyEnemyAIController.generated.h already included, missing '#pragma once' in MyEnemyAIController.h"
#endif
#define VRACTIONPROJECT_MyEnemyAIController_generated_h

#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_SPARSE_DATA
#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_RPC_WRAPPERS
#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_EVENT_PARMS \
	struct MyEnemyAIController_eventGetHeadLocRot_Parms \
	{ \
		FVector OutLocation; \
		FRotator OutRotation; \
	};


#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_CALLBACK_WRAPPERS
#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyEnemyAIController(); \
	friend struct Z_Construct_UClass_AMyEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AMyEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRActionProject"), NO_API) \
	DECLARE_SERIALIZER(AMyEnemyAIController)


#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyEnemyAIController(); \
	friend struct Z_Construct_UClass_AMyEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AMyEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRActionProject"), NO_API) \
	DECLARE_SERIALIZER(AMyEnemyAIController)


#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyEnemyAIController(AMyEnemyAIController&&); \
	NO_API AMyEnemyAIController(const AMyEnemyAIController&); \
public:


#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyEnemyAIController(AMyEnemyAIController&&); \
	NO_API AMyEnemyAIController(const AMyEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyEnemyAIController)


#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET
#define VRwire_Source_VRActionProject_MyEnemyAIController_h_12_PROLOG \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_EVENT_PARMS


#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_SPARSE_DATA \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_RPC_WRAPPERS \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_CALLBACK_WRAPPERS \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_INCLASS \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRwire_Source_VRActionProject_MyEnemyAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_SPARSE_DATA \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_CALLBACK_WRAPPERS \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
	VRwire_Source_VRActionProject_MyEnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRACTIONPROJECT_API UClass* StaticClass<class AMyEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRwire_Source_VRActionProject_MyEnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
