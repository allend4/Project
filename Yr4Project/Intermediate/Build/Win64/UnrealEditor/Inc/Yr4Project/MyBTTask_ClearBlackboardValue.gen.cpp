// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Yr4Project/MyBTTask_ClearBlackboardValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_ClearBlackboardValue() {}
// Cross Module References
	YR4PROJECT_API UClass* Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_NoRegister();
	YR4PROJECT_API UClass* Z_Construct_UClass_UMyBTTask_ClearBlackboardValue();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Yr4Project();
// End Cross Module References
	void UMyBTTask_ClearBlackboardValue::StaticRegisterNativesUMyBTTask_ClearBlackboardValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_ClearBlackboardValue);
	UClass* Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_NoRegister()
	{
		return UMyBTTask_ClearBlackboardValue::StaticClass();
	}
	struct Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Yr4Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBTTask_ClearBlackboardValue.h" },
		{ "ModuleRelativePath", "MyBTTask_ClearBlackboardValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_ClearBlackboardValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_Statics::ClassParams = {
		&UMyBTTask_ClearBlackboardValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBTTask_ClearBlackboardValue()
	{
		if (!Z_Registration_Info_UClass_UMyBTTask_ClearBlackboardValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_ClearBlackboardValue.OuterSingleton, Z_Construct_UClass_UMyBTTask_ClearBlackboardValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyBTTask_ClearBlackboardValue.OuterSingleton;
	}
	template<> YR4PROJECT_API UClass* StaticClass<UMyBTTask_ClearBlackboardValue>()
	{
		return UMyBTTask_ClearBlackboardValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_ClearBlackboardValue);
	struct Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_ClearBlackboardValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_ClearBlackboardValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_ClearBlackboardValue, UMyBTTask_ClearBlackboardValue::StaticClass, TEXT("UMyBTTask_ClearBlackboardValue"), &Z_Registration_Info_UClass_UMyBTTask_ClearBlackboardValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_ClearBlackboardValue), 3841534353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_ClearBlackboardValue_h_2410185610(TEXT("/Script/Yr4Project"),
		Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_ClearBlackboardValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_ClearBlackboardValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
