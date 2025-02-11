#include "ValidateAllAssetsCommands.h"

#define LOCTEXT_NAMESPACE "FValidateAllAssetsModule"

void FValidateAllAssetsCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "ValidateAllAssets", "Run Validation Check.", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
