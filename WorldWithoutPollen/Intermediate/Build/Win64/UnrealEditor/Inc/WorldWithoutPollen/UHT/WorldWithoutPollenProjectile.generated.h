// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldWithoutPollenProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef WORLDWITHOUTPOLLEN_WorldWithoutPollenProjectile_generated_h
#error "WorldWithoutPollenProjectile.generated.h already included, missing '#pragma once' in WorldWithoutPollenProjectile.h"
#endif
#define WORLDWITHOUTPOLLEN_WorldWithoutPollenProjectile_generated_h

#define FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldWithoutPollenProjectile(); \
	friend struct Z_Construct_UClass_AWorldWithoutPollenProjectile_Statics; \
public: \
	DECLARE_CLASS(AWorldWithoutPollenProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldWithoutPollen"), NO_API) \
	DECLARE_SERIALIZER(AWorldWithoutPollenProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldWithoutPollenProjectile(AWorldWithoutPollenProjectile&&); \
	AWorldWithoutPollenProjectile(const AWorldWithoutPollenProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldWithoutPollenProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldWithoutPollenProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldWithoutPollenProjectile) \
	NO_API virtual ~AWorldWithoutPollenProjectile();


#define FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenProjectile_h_12_PROLOG
#define FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDWITHOUTPOLLEN_API UClass* StaticClass<class AWorldWithoutPollenProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WorldWithoutPollen_Source_WorldWithoutPollen_WorldWithoutPollenProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
