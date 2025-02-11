#include "ValidateAllAssetsSettings.h"
#include "UObject/UnrealType.h"

void UValidateAllAssetsSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	const int32 MaxEnumCount = StaticEnum<EAssetType>()->NumEnums() - 1; 
	if (AssetTypeToPrefix.Num() > MaxEnumCount)
	{
		UE_LOG(LogTemp, Warning, TEXT("AssetTypeToPrefix map exceeds the number of valid EAssetType values. Trimming."));
		while (AssetTypeToPrefix.Num() > MaxEnumCount)
		{
			AssetTypeToPrefix.Remove(AssetTypeToPrefix.CreateConstIterator()->Key);
		}
	}
	if (AssetTypeToSuffix.Num() > MaxEnumCount)
	{
		UE_LOG(LogTemp, Warning, TEXT("AssetTypeToSuffix map exceeds the number of valid EAssetType values. Trimming."));
		while (AssetTypeToSuffix.Num() > MaxEnumCount)
		{
			AssetTypeToSuffix.Remove(AssetTypeToSuffix.CreateConstIterator()->Key);
		}
	}
}
