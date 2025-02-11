#include "ValidateAllAssets.h"
#include "ValidateAllAssetsStyle.h"
#include "ValidateAllAssetsCommands.h"
#include "ValidateAllAssetsSettings.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/World.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/Package.h"
#include "Logging/LogMacros.h"

static const FName ValidateAllAssetsTabName("ValidateAllAssets");

#define LOCTEXT_NAMESPACE "FValidateAllAssetsModule"

void FValidateAllAssetsModule::StartupModule()
{
	FValidateAllAssetsStyle::Initialize();
	FValidateAllAssetsStyle::ReloadTextures();

	FValidateAllAssetsCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FValidateAllAssetsCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FValidateAllAssetsModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FValidateAllAssetsModule::RegisterMenus));
}

void FValidateAllAssetsModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);

	FValidateAllAssetsStyle::Shutdown();
	FValidateAllAssetsCommands::Unregister();
}

void FValidateAllAssetsModule::PluginButtonClicked()
{
	ValidateAllAssets();
}

void FValidateAllAssetsModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
		Section.AddMenuEntryWithCommandList(FValidateAllAssetsCommands::Get().PluginAction, PluginCommands);
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
		FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FValidateAllAssetsCommands::Get().PluginAction));
		Entry.SetCommandList(PluginCommands);
	}
}

void FValidateAllAssetsModule::ValidateAllAssets()
{
	IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
	TArray<FAssetData> AssetList;

	FARFilter Filter;
	Filter.PackagePaths.Add("/Game");
	Filter.bRecursivePaths = true;

	AssetRegistry.GetAssets(Filter, AssetList);

	int32 MissingReferences = 0;
	int32 ValidAssets = 0;
	int32 MissingPrefixes = 0;
	int32 MissingSuffixes = 0;
	int32 FixedPrefixes = 0;
	int32 FixedSuffixes = 0;

	for (const FAssetData& Asset : AssetList)
	{
		UObject* LoadedAsset = Asset.GetAsset();
		if (!LoadedAsset)
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to load asset: %s"), *Asset.GetFullName());
			MissingReferences++;
			continue;
		}

		FString AssetName = Asset.AssetName.ToString();
		FString AssetClass = Asset.AssetClass.ToString();
		EAssetType AssetType = GetAssetTypeFromClass(AssetClass);

		FString ExpectedPrefix = AssetTypeToPrefix.Contains(AssetType) ? AssetTypeToPrefix[AssetType] : TEXT("");
		FString ExpectedSuffix = AssetTypeToSuffix.Contains(AssetType) ? AssetTypeToSuffix[AssetType] : TEXT("");

		bool bHasCorrectPrefix = ExpectedPrefix.IsEmpty() || AssetName.StartsWith(ExpectedPrefix);
		bool bHasCorrectSuffix = ExpectedSuffix.IsEmpty() || AssetName.EndsWith(ExpectedSuffix);

		FString NewAssetName = AssetName;

		if (!bHasCorrectPrefix && !ExpectedPrefix.IsEmpty())
		{
			NewAssetName = ExpectedPrefix + NewAssetName;
			MissingPrefixes++;
			FixedPrefixes++;
		}

		if (!bHasCorrectSuffix && !ExpectedSuffix.IsEmpty())
		{
			NewAssetName += ExpectedSuffix;
			MissingSuffixes++;
			FixedSuffixes++;
		}

		if (NewAssetName != AssetName)
		{
			FString AssetPath = Asset.ObjectPath.ToString();
			FString NewPath = AssetPath.Replace(*AssetName, *NewAssetName);

			LoadedAsset->Rename(*NewAssetName, nullptr);
			UE_LOG(LogTemp, Log, TEXT("Renamed asset: %s -> %s"), *AssetName, *NewAssetName);
		}

		ValidAssets++;
	}

	FString ResultMessage = FString::Printf(
		TEXT("Asset validation complete.\nValid Assets: %d\nMissing References: %d\n")
		TEXT("Missing Prefixes: %d (Fixed: %d)\nMissing Suffixes: %d (Fixed: %d)"),
		ValidAssets, MissingReferences, MissingPrefixes, FixedPrefixes, MissingSuffixes, FixedSuffixes
	);

	UE_LOG(LogTemp, Log, TEXT("%s"), *ResultMessage);
	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(ResultMessage));
}

EAssetType FValidateAllAssetsModule::GetAssetTypeFromClass(const FString& AssetClass)
{
	if (AssetClass.Contains("Blueprint")) return EAssetType::BP;
	if (AssetClass.Contains("Material")) return EAssetType::Material;
	if (AssetClass.Contains("Anim")) return EAssetType::Animation;
	if (AssetClass.Contains("StaticMesh")) return EAssetType::StaticMesh;
	if (AssetClass.Contains("SkeletalMesh")) return EAssetType::SkeletalMesh;
	if (AssetClass.Contains("Texture")) return EAssetType::Texture;
	if (AssetClass.Contains("Sound")) return EAssetType::Sound;
	if (AssetClass.Contains("Particle")) return EAssetType::Particle;
	if (AssetClass.Contains("Niagara")) return EAssetType::Niagara;
	if (AssetClass.Contains("Struct")) return EAssetType::Structure;
	if (AssetClass.Contains("Enum")) return EAssetType::Enum;

	return EAssetType::Other;
}

void FValidateAllAssetsModule::LoadSettings()
{
	const UValidateAllAssetsSettings* LocSettings = GetDefault<UValidateAllAssetsSettings>();

	AssetTypeToPrefix = LocSettings->AssetTypeToPrefix;
	AssetTypeToSuffix = LocSettings->AssetTypeToSuffix;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FValidateAllAssetsModule, ValidateAllAssets)
