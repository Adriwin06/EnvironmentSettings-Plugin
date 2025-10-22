#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnvironmentTimelineData.h"
#include "EnvironmentStatics.generated.h"

UCLASS()
class ENVIRONMENTSETTINGS_API UEnvironmentStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Finds the two keyframes before and after a given time of day and calculates the blend factor between them.
	 * @param TimelineData The timeline asset to search through.
	 * @param TimeOfDay The current time to evaluate (in seconds since 00:00).
	 * @param KeyframeBefore The keyframe asset immediately before the given time.
	 * @param KeyframeAfter The keyframe asset immediately after the given time.
	 * @param BlendFactor The calculated blend factor (alpha) between 0.0 and 1.0.
	 */
	UFUNCTION(BlueprintPure, Category = "Burnout5 Tools | PostFX", meta = (DisplayName = "Get Environment Keyframes for Time"))
	static void GetEnvironmentKeyframesForTime(
		const UEnvironmentTimelineData* TimelineData,
		const float TimeOfDay,
		UEnvironmentKeyframeData*& KeyframeBefore,
		UEnvironmentKeyframeData*& KeyframeAfter,
		float& BlendFactor
	);
};
