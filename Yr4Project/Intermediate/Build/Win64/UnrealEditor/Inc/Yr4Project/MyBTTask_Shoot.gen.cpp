// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Yr4Project/MyBTTask_Shoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_Shoot() {}
// Cross Module References
	YR4PROJECT_API UClass* Z_Construct_UClass_UMyBTTask_Shoot_NoRegister();
	YR4PROJECT_API UClass* Z_Construct_UClass_UMyBTTask_Shoot();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Yr4Project();
// End Cross Module References
	void UMyBTTask_Shoot::StaticRegisterNativesUMyBTTask_Shoot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_Shoot);
	UClass* Z_Construct_UClass_UMyBTTask_Shoot_NoRegister()
	{
		return UMyBTTask_Shoot::StaticClass();
	}
	struct Z_Construct_UClass_UMyBTTask_Shoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBTTask_Shoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Yr4Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTask_Shoot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBTTask_Shoot.h" },
		{ "ModuleRelativePath", "MyBTTask_Shoot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBTTask_Shoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_Shoot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_Shoot_Statics::ClassParams = {
		&UMyBTTask_Shoot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyBTTask_Shoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_Shoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBTTask_Shoot()
	{
		if (!Z_Registration_Info_UClass_UMyBTTask_Shoot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_Shoot.OuterSingleton, Z_Construct_UClass_UMyBTTask_Shoot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyBTTask_Shoot.OuterSingleton;
	}
	template<> YR4PROJECT_API UClass* StaticClass<UMyBTTask_Shoot>()
	{
		return UMyBTTask_Shoot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_Shoot);
	struct Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_Shoot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_Shoot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_Shoot, UMyBTTask_Shoot::StaticClass, TEXT("UMyBTTask_Shoot"), &Z_Registration_Info_UClass_UMyBTTask_Shoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_Shoot), 2862839527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_Shoot_h_2632636442(TEXT("/Script/Yr4Project"),
		Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_Shoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Yr4Project_Source_Yr4Project_MyBTTask_Shoot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
