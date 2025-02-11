#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ValidateAllAssetsStyle.h"

class FValidateAllAssetsCommands : public TCommands<FValidateAllAssetsCommands>
{
public:

	FValidateAllAssetsCommands()
		: TCommands<FValidateAllAssetsCommands>(TEXT("ValidateAllAssets"), NSLOCTEXT("Contexts", "ValidateAllAssets", "ValidateAllAssets Plugin"), NAME_None, FValidateAllAssetsStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
