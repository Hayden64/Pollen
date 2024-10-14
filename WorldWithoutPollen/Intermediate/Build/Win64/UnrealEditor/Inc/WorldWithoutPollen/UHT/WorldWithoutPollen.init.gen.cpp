// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldWithoutPollen_init() {}
	WORLDWITHOUTPOLLEN_API UFunction* Z_Construct_UDelegateFunction_WorldWithoutPollen_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WorldWithoutPollen;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WorldWithoutPollen()
	{
		if (!Z_Registration_Info_UPackage__Script_WorldWithoutPollen.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WorldWithoutPollen_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WorldWithoutPollen",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0B92B51C,
				0xBCDDBF57,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WorldWithoutPollen.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WorldWithoutPollen.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WorldWithoutPollen(Z_Construct_UPackage__Script_WorldWithoutPollen, TEXT("/Script/WorldWithoutPollen"), Z_Registration_Info_UPackage__Script_WorldWithoutPollen, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0B92B51C, 0xBCDDBF57));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
