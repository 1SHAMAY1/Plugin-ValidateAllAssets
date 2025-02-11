// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ValidateAllAssetsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VALIDATEALLASSETS_ValidateAllAssetsSettings_generated_h
#error "ValidateAllAssetsSettings.generated.h already included, missing '#pragma once' in ValidateAllAssetsSettings.h"
#endif
#define VALIDATEALLASSETS_ValidateAllAssetsSettings_generated_h

#define FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_SPARSE_DATA
#define FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_ACCESSORS
#define FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUValidateAllAssetsSettings(); \
	friend struct Z_Construct_UClass_UValidateAllAssetsSettings_Statics; \
public: \
	DECLARE_CLASS(UValidateAllAssetsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ValidateAllAssets"), NO_API) \
	DECLARE_SERIALIZER(UValidateAllAssetsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UValidateAllAssetsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UValidateAllAssetsSettings(UValidateAllAssetsSettings&&); \
	NO_API UValidateAllAssetsSettings(const UValidateAllAssetsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UValidateAllAssetsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UValidateAllAssetsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UValidateAllAssetsSettings) \
	NO_API virtual ~UValidateAllAssetsSettings();


#define FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_25_PROLOG
#define FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_SPARSE_DATA \
	FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_ACCESSORS \
	FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VALIDATEALLASSETS_API UClass* StaticClass<class UValidateAllAssetsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h


#define FOREACH_ENUM_EASSETTYPE(op) \
	op(EAssetType::BP) \
	op(EAssetType::Material) \
	op(EAssetType::Animation) \
	op(EAssetType::StaticMesh) \
	op(EAssetType::SkeletalMesh) \
	op(EAssetType::Texture) \
	op(EAssetType::Sound) \
	op(EAssetType::Particle) \
	op(EAssetType::Niagara) \
	op(EAssetType::Structure) \
	op(EAssetType::Enum) \
	op(EAssetType::Other) 

enum class EAssetType : uint8;
template<> struct TIsUEnumClass<EAssetType> { enum { Value = true }; };
template<> VALIDATEALLASSETS_API UEnum* StaticEnum<EAssetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
