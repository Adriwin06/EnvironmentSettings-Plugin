#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnvironmentKeyframeData.h"
#include "EnvironmentTimelineData.generated.h"

USTRUCT(BlueprintType)
struct FTimelineEntry
{
	GENERATED_BODY()

	/** Time of day (seconds since 00:00) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timeline Entry")
	float KeyframeTime = 0.f;

	/** Asset played at this time */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timeline Entry")
	UEnvironmentKeyframeData* KeyframeAsset = nullptr;
};

UCLASS(BlueprintType)
class ENVIRONMENTSETTINGS_API UEnvironmentTimelineData : public UDataAsset
{
	GENERATED_BODY()

public:

	/* ---------- Timeline ---------- */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Timeline")
	TArray<FTimelineEntry> Timeline;
};
