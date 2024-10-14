// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldWithoutPollen/WorldWithoutPollenGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldWithoutPollenGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_WorldWithoutPollen();
WORLDWITHOUTPOLLEN_API UClass* Z_Construct_UClass_AWorldWithoutPollenGameMode();
WORLDWITHOUTPOLLEN_API UClass* Z_Construct_UClass_AWorldWithoutPollenGameMode_NoRegister();
// End Cross Module References

// Begin Class AWorldWithoutPollenGameMode
void AWorldWithoutPollenGameMode::StaticRegisterNativesAWorldWithoutPollenGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldWithoutPollenGameMode);
UClass* Z_Construct_UClass_AWorldWithoutPollenGameMode_NoRegister()
{
	return AWorldWithoutPollenGameMode::StaticClass();
}
struct Z_Construct_UClass_AWorldWithoutPollenGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WorldWithoutPollenGameMode.h" },
		{ "ModuleRelativePath", "WorldWithoutPollenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldWithoutPollenGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWorldWithoutPollenGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldWithoutPollen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldWithoutPollenGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldWithoutPollenGameMode_Statics::ClassParams = {
	&AWorldWithoutPollenGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldWithoutPollenGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldWithoutPollenGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldWithoutPollenGameMode()
{
	if (!Z_Registration_Info_UClass_AWorldWithoutPollenGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldWithoutPollenGameMode.OuterSingleton, Z_Construct_UClass_AWorldWithoutPollenGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldWithoutPollenGameMode.OuterSingleton;
}
template<> WORLDWITHOUTPOLLEN_API UClass* StaticClass<AWorldWithoutPollenGameMode>()
{
	return AWorldWithoutPollenGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldWithoutPollenGameMode);
AWorldWithoutPollenGameMode::~AWorldWithoutPollenGameMode() {}
// End Class AWorldWithoutPollenGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Projects_Pollen_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldWithoutPollenGameMode, AWorldWithoutPollenGameMode::StaticClass, TEXT("AWorldWithoutPollenGameMode"), &Z_Registration_Info_UClass_AWorldWithoutPollenGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldWithoutPollenGameMode), 2986229209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Projects_Pollen_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenGameMode_h_28224369(TEXT("/Script/WorldWithoutPollen"),
	Z_CompiledInDeferFile_FID_Game_Projects_Pollen_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Projects_Pollen_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
