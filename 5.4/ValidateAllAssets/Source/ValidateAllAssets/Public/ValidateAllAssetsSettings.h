#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ValidateAllAssetsSettings.generated.h"


UENUM(BlueprintType)
enum class EAssetType : uint8
{
	BP             UMETA(DisplayName = "Blueprint"),
	Material       UMETA(DisplayName = "Material"),
	Animation      UMETA(DisplayName = "Animation"),
	StaticMesh     UMETA(DisplayName = "Static Mesh"),
	SkeletalMesh   UMETA(DisplayName = "Skeletal Mesh"),
	Texture        UMETA(DisplayName = "Texture"),
	Sound          UMETA(DisplayName = "Sound"),
	Particle       UMETA(DisplayName = "Particle System"),
	Niagara        UMETA(DisplayName = "Niagara System"),
	Structure      UMETA(DisplayName = "Structure"),
	Enum           UMETA(DisplayName = "Enum"),
	Other          UMETA(DisplayName = "Other")
};

UCLASS(Config = Editor, DefaultConfig)
class VALIDATEALLASSETS_API UValidateAllAssetsSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	/** Map of Asset Type to Expected Prefix */
	UPROPERTY(EditAnywhere, Config, Category = "Validation", meta = (ClampMin = "0"))
	TMap<EAssetType, FString> AssetTypeToPrefix;

	/** Map of Asset Type to Expected Suffix */
	UPROPERTY(EditAnywhere, Config, Category = "Validation", meta = (ClampMin = "0"))
	TMap<EAssetType, FString> AssetTypeToSuffix;

	/** Ensures map sizes do not exceed the number of valid `EAssetType` values */
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	
};
