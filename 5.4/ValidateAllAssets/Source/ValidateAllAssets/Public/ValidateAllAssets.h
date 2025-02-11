#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "ValidateAllAssetsSettings.h"
#include "UObject/StrongObjectPtr.h"



class FToolBarBuilder;
class FMenuBuilder;
class UValidateAllAssetsSettings;
class FValidateAllAssetsModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/** This function will be bound to Command. */
	void PluginButtonClicked();

private:
	/** Registers menus and toolbar buttons */
	void RegisterMenus();

	/** Runs the asset validation check */
	void ValidateAllAssets();

	EAssetType GetAssetTypeFromClass(const FString& AssetClass);

	/** Loads settings from plugin config */
	void LoadSettings();

private:
	TSharedPtr<class FUICommandList> PluginCommands;

	/** Editable maps for Asset Type to Prefix & Suffix */
	TMap<EAssetType, FString> AssetTypeToPrefix;
	TMap<EAssetType, FString> AssetTypeToSuffix;

	/** Plugin settings instance */
	TStrongObjectPtr<UValidateAllAssetsSettings> Settings;
};
