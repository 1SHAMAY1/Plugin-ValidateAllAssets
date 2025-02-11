// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ValidateAllAssets/Public/ValidateAllAssetsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeValidateAllAssetsSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ValidateAllAssets();
	VALIDATEALLASSETS_API UClass* Z_Construct_UClass_UValidateAllAssetsSettings();
	VALIDATEALLASSETS_API UClass* Z_Construct_UClass_UValidateAllAssetsSettings_NoRegister();
	VALIDATEALLASSETS_API UEnum* Z_Construct_UEnum_ValidateAllAssets_EAssetType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetType;
	static UEnum* EAssetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ValidateAllAssets_EAssetType, (UObject*)Z_Construct_UPackage__Script_ValidateAllAssets(), TEXT("EAssetType"));
		}
		return Z_Registration_Info_UEnum_EAssetType.OuterSingleton;
	}
	template<> VALIDATEALLASSETS_API UEnum* StaticEnum<EAssetType>()
	{
		return EAssetType_StaticEnum();
	}
	struct Z_Construct_UEnum_ValidateAllAssets_EAssetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ValidateAllAssets_EAssetType_Statics::Enumerators[] = {
		{ "EAssetType::BP", (int64)EAssetType::BP },
		{ "EAssetType::Material", (int64)EAssetType::Material },
		{ "EAssetType::Animation", (int64)EAssetType::Animation },
		{ "EAssetType::StaticMesh", (int64)EAssetType::StaticMesh },
		{ "EAssetType::SkeletalMesh", (int64)EAssetType::SkeletalMesh },
		{ "EAssetType::Texture", (int64)EAssetType::Texture },
		{ "EAssetType::Sound", (int64)EAssetType::Sound },
		{ "EAssetType::Particle", (int64)EAssetType::Particle },
		{ "EAssetType::Niagara", (int64)EAssetType::Niagara },
		{ "EAssetType::Structure", (int64)EAssetType::Structure },
		{ "EAssetType::Enum", (int64)EAssetType::Enum },
		{ "EAssetType::Other", (int64)EAssetType::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ValidateAllAssets_EAssetType_Statics::Enum_MetaDataParams[] = {
		{ "Animation.DisplayName", "Animation" },
		{ "Animation.Name", "EAssetType::Animation" },
		{ "BlueprintType", "true" },
		{ "BP.DisplayName", "Blueprint" },
		{ "BP.Name", "EAssetType::BP" },
		{ "Enum.DisplayName", "Enum" },
		{ "Enum.Name", "EAssetType::Enum" },
		{ "Material.DisplayName", "Material" },
		{ "Material.Name", "EAssetType::Material" },
		{ "ModuleRelativePath", "Public/ValidateAllAssetsSettings.h" },
		{ "Niagara.DisplayName", "Niagara System" },
		{ "Niagara.Name", "EAssetType::Niagara" },
		{ "Other.DisplayName", "Other" },
		{ "Other.Name", "EAssetType::Other" },
		{ "Particle.DisplayName", "Particle System" },
		{ "Particle.Name", "EAssetType::Particle" },
		{ "SkeletalMesh.DisplayName", "Skeletal Mesh" },
		{ "SkeletalMesh.Name", "EAssetType::SkeletalMesh" },
		{ "Sound.DisplayName", "Sound" },
		{ "Sound.Name", "EAssetType::Sound" },
		{ "StaticMesh.DisplayName", "Static Mesh" },
		{ "StaticMesh.Name", "EAssetType::StaticMesh" },
		{ "Structure.DisplayName", "Structure" },
		{ "Structure.Name", "EAssetType::Structure" },
		{ "Texture.DisplayName", "Texture" },
		{ "Texture.Name", "EAssetType::Texture" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ValidateAllAssets_EAssetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ValidateAllAssets,
		nullptr,
		"EAssetType",
		"EAssetType",
		Z_Construct_UEnum_ValidateAllAssets_EAssetType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ValidateAllAssets_EAssetType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ValidateAllAssets_EAssetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ValidateAllAssets_EAssetType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ValidateAllAssets_EAssetType()
	{
		if (!Z_Registration_Info_UEnum_EAssetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetType.InnerSingleton, Z_Construct_UEnum_ValidateAllAssets_EAssetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetType.InnerSingleton;
	}
	void UValidateAllAssetsSettings::StaticRegisterNativesUValidateAllAssetsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UValidateAllAssetsSettings);
	UClass* Z_Construct_UClass_UValidateAllAssetsSettings_NoRegister()
	{
		return UValidateAllAssetsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UValidateAllAssetsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetTypeToPrefix_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetTypeToPrefix_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetTypeToPrefix_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetTypeToPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AssetTypeToPrefix;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetTypeToSuffix_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetTypeToSuffix_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetTypeToSuffix_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetTypeToSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AssetTypeToSuffix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UValidateAllAssetsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ValidateAllAssets,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UValidateAllAssetsSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UValidateAllAssetsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ValidateAllAssetsSettings.h" },
		{ "ModuleRelativePath", "Public/ValidateAllAssetsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix_ValueProp = { "AssetTypeToPrefix", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix_Key_KeyProp = { "AssetTypeToPrefix_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ValidateAllAssets_EAssetType, METADATA_PARAMS(0, nullptr) }; // 3289680512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix_MetaData[] = {
		{ "Category", "Validation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Map of Asset Type to Expected Prefix */" },
		{ "ModuleRelativePath", "Public/ValidateAllAssetsSettings.h" },
		{ "ToolTip", "Map of Asset Type to Expected Prefix" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix = { "AssetTypeToPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UValidateAllAssetsSettings, AssetTypeToPrefix), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix_MetaData), Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix_MetaData) }; // 3289680512
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix_ValueProp = { "AssetTypeToSuffix", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix_Key_KeyProp = { "AssetTypeToSuffix_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ValidateAllAssets_EAssetType, METADATA_PARAMS(0, nullptr) }; // 3289680512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix_MetaData[] = {
		{ "Category", "Validation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Map of Asset Type to Expected Suffix */" },
		{ "ModuleRelativePath", "Public/ValidateAllAssetsSettings.h" },
		{ "ToolTip", "Map of Asset Type to Expected Suffix" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix = { "AssetTypeToSuffix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UValidateAllAssetsSettings, AssetTypeToSuffix), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix_MetaData), Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix_MetaData) }; // 3289680512
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UValidateAllAssetsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UValidateAllAssetsSettings_Statics::NewProp_AssetTypeToSuffix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UValidateAllAssetsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UValidateAllAssetsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UValidateAllAssetsSettings_Statics::ClassParams = {
		&UValidateAllAssetsSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UValidateAllAssetsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UValidateAllAssetsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UValidateAllAssetsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UValidateAllAssetsSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UValidateAllAssetsSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UValidateAllAssetsSettings()
	{
		if (!Z_Registration_Info_UClass_UValidateAllAssetsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UValidateAllAssetsSettings.OuterSingleton, Z_Construct_UClass_UValidateAllAssetsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UValidateAllAssetsSettings.OuterSingleton;
	}
	template<> VALIDATEALLASSETS_API UClass* StaticClass<UValidateAllAssetsSettings>()
	{
		return UValidateAllAssetsSettings::StaticClass();
	}
	UValidateAllAssetsSettings::UValidateAllAssetsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UValidateAllAssetsSettings);
	UValidateAllAssetsSettings::~UValidateAllAssetsSettings() {}
	struct Z_CompiledInDeferFile_FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_Statics::EnumInfo[] = {
		{ EAssetType_StaticEnum, TEXT("EAssetType"), &Z_Registration_Info_UEnum_EAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3289680512U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UValidateAllAssetsSettings, UValidateAllAssetsSettings::StaticClass, TEXT("UValidateAllAssetsSettings"), &Z_Registration_Info_UClass_UValidateAllAssetsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UValidateAllAssetsSettings), 3568721521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_2761625882(TEXT("/Script/ValidateAllAssets"),
		Z_CompiledInDeferFile_FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewPlugin___5_3_ValidateAllAssets_HostProject_Plugins_ValidateAllAssets_Source_ValidateAllAssets_Public_ValidateAllAssetsSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
