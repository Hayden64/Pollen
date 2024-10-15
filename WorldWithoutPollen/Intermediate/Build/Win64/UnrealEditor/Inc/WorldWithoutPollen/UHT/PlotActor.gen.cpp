// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldWithoutPollen/PlotActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_WorldWithoutPollen();
WORLDWITHOUTPOLLEN_API UClass* Z_Construct_UClass_APlotActor();
WORLDWITHOUTPOLLEN_API UClass* Z_Construct_UClass_APlotActor_NoRegister();
// End Cross Module References

// Begin Class APlotActor
void APlotActor::StaticRegisterNativesAPlotActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlotActor);
UClass* Z_Construct_UClass_APlotActor_NoRegister()
{
	return APlotActor::StaticClass();
}
struct Z_Construct_UClass_APlotActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlotActor.h" },
		{ "ModuleRelativePath", "PlotActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlotActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlotActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldWithoutPollen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlotActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlotActor_Statics::ClassParams = {
	&APlotActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlotActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlotActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlotActor()
{
	if (!Z_Registration_Info_UClass_APlotActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlotActor.OuterSingleton, Z_Construct_UClass_APlotActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlotActor.OuterSingleton;
}
template<> WORLDWITHOUTPOLLEN_API UClass* StaticClass<APlotActor>()
{
	return APlotActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlotActor);
APlotActor::~APlotActor() {}
// End Class APlotActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorldWithoutPollen_Source_WorldWithoutPollen_PlotActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlotActor, APlotActor::StaticClass, TEXT("APlotActor"), &Z_Registration_Info_UClass_APlotActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlotActor), 984391448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorldWithoutPollen_Source_WorldWithoutPollen_PlotActor_h_2761861512(TEXT("/Script/WorldWithoutPollen"),
	Z_CompiledInDeferFile_FID_WorldWithoutPollen_Source_WorldWithoutPollen_PlotActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorldWithoutPollen_Source_WorldWithoutPollen_PlotActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
