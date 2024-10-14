// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldWithoutPollen/WorldWithoutPollenPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldWithoutPollenPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_WorldWithoutPollen();
WORLDWITHOUTPOLLEN_API UClass* Z_Construct_UClass_AWorldWithoutPollenPlayerController();
WORLDWITHOUTPOLLEN_API UClass* Z_Construct_UClass_AWorldWithoutPollenPlayerController_NoRegister();
// End Cross Module References

// Begin Class AWorldWithoutPollenPlayerController
void AWorldWithoutPollenPlayerController::StaticRegisterNativesAWorldWithoutPollenPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldWithoutPollenPlayerController);
UClass* Z_Construct_UClass_AWorldWithoutPollenPlayerController_NoRegister()
{
	return AWorldWithoutPollenPlayerController::StaticClass();
}
struct Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WorldWithoutPollenPlayerController.h" },
		{ "ModuleRelativePath", "WorldWithoutPollenPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "WorldWithoutPollenPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldWithoutPollenPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldWithoutPollenPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldWithoutPollen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::ClassParams = {
	&AWorldWithoutPollenPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldWithoutPollenPlayerController()
{
	if (!Z_Registration_Info_UClass_AWorldWithoutPollenPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldWithoutPollenPlayerController.OuterSingleton, Z_Construct_UClass_AWorldWithoutPollenPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldWithoutPollenPlayerController.OuterSingleton;
}
template<> WORLDWITHOUTPOLLEN_API UClass* StaticClass<AWorldWithoutPollenPlayerController>()
{
	return AWorldWithoutPollenPlayerController::StaticClass();
}
AWorldWithoutPollenPlayerController::AWorldWithoutPollenPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldWithoutPollenPlayerController);
AWorldWithoutPollenPlayerController::~AWorldWithoutPollenPlayerController() {}
// End Class AWorldWithoutPollenPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldWithoutPollenPlayerController, AWorldWithoutPollenPlayerController::StaticClass, TEXT("AWorldWithoutPollenPlayerController"), &Z_Registration_Info_UClass_AWorldWithoutPollenPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldWithoutPollenPlayerController), 2062156089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenPlayerController_h_4179990516(TEXT("/Script/WorldWithoutPollen"),
	Z_CompiledInDeferFile_FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
