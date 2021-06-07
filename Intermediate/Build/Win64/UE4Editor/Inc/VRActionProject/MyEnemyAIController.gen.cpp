// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRActionProject/MyEnemyAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnemyAIController() {}
// Cross Module References
	VRACTIONPROJECT_API UClass* Z_Construct_UClass_AMyEnemyAIController_NoRegister();
	VRACTIONPROJECT_API UClass* Z_Construct_UClass_AMyEnemyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_VRActionProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FName NAME_AMyEnemyAIController_GetHeadLocRot = FName(TEXT("GetHeadLocRot"));
	void AMyEnemyAIController::GetHeadLocRot(FVector& OutLocation, FRotator& OutRotation) const
	{
		MyEnemyAIController_eventGetHeadLocRot_Parms Parms;
		Parms.OutLocation=OutLocation;
		Parms.OutRotation=OutRotation;
		const_cast<AMyEnemyAIController*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMyEnemyAIController_GetHeadLocRot),&Parms);
		OutLocation=Parms.OutLocation;
		OutRotation=Parms.OutRotation;
	}
	void AMyEnemyAIController::StaticRegisterNativesAMyEnemyAIController()
	{
	}
	struct Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEnemyAIController_eventGetHeadLocRot_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEnemyAIController_eventGetHeadLocRot_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::NewProp_OutLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::NewProp_OutRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::Function_MetaDataParams[] = {
		{ "Category", "PerceptionExtended" },
		{ "ModuleRelativePath", "MyEnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEnemyAIController, nullptr, "GetHeadLocRot", nullptr, nullptr, sizeof(MyEnemyAIController_eventGetHeadLocRot_Parms), Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyEnemyAIController_NoRegister()
	{
		return AMyEnemyAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMyEnemyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyEnemyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRActionProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyEnemyAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyEnemyAIController_GetHeadLocRot, "GetHeadLocRot" }, // 805037578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyEnemyAIController.h" },
		{ "ModuleRelativePath", "MyEnemyAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyEnemyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEnemyAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyEnemyAIController_Statics::ClassParams = {
		&AMyEnemyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyEnemyAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyEnemyAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyEnemyAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyEnemyAIController, 2221430632);
	template<> VRACTIONPROJECT_API UClass* StaticClass<AMyEnemyAIController>()
	{
		return AMyEnemyAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyEnemyAIController(Z_Construct_UClass_AMyEnemyAIController, &AMyEnemyAIController::StaticClass, TEXT("/Script/VRActionProject"), TEXT("AMyEnemyAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEnemyAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
