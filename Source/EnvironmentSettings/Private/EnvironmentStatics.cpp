#include "EnvironmentStatics.h"

void UEnvironmentStatics::GetEnvironmentKeyframesForTime(
	const UEnvironmentTimelineData* TimelineData,
	float TimeOfDay,
	UEnvironmentKeyframeData*& KeyframeBefore,
	UEnvironmentKeyframeData*& KeyframeAfter,
	float& BlendFactor)
{
	// Set default output values
	KeyframeBefore = nullptr;
	KeyframeAfter = nullptr;
	BlendFactor = 0.f;

	// Ensure the timeline data is valid and not empty
	if (!TimelineData || TimelineData->Timeline.Num() == 0)
	{
		return;
	}

	const TArray<FTimelineEntry>& Timeline = TimelineData->Timeline;
	const int32 NumKeys = Timeline.Num();

	// Only one key - nothing to blend
	if (NumKeys == 1)
	{
		KeyframeBefore = KeyframeAfter = Timeline[0].KeyframeAsset;
		return;
	}

	// Clamp/normalise time into [0 , DayLength) so we can wrap cleanly
	constexpr float DayLength = 86400.f;
	TimeOfDay = FMath::Fmod(TimeOfDay, DayLength);
	if (TimeOfDay < 0.f)     // Fmod can return negative
	{
		TimeOfDay += DayLength;
	}

	// Case 1: time is before the very first key -> wrap (last -> first)
	if (TimeOfDay < Timeline[0].KeyframeTime)
	{
		KeyframeBefore = Timeline.Last().KeyframeAsset;
		KeyframeAfter = Timeline[0].KeyframeAsset;

		const float TimeRange = (Timeline[0].KeyframeTime + DayLength) - Timeline.Last().KeyframeTime;
		const float TimeIntoRange = (TimeOfDay + DayLength) - Timeline.Last().KeyframeTime;
		BlendFactor = TimeIntoRange / TimeRange;
		return;
	}

	// Case 2: somewhere between two consecutive keys (inclusive on lower bound, exclusive on upper bound)
	for (int32 i = 0; i < NumKeys - 1; ++i)
	{
		const FTimelineEntry& Current = Timeline[i];
		const FTimelineEntry& Next = Timeline[i + 1];

		if (TimeOfDay >= Current.KeyframeTime && TimeOfDay < Next.KeyframeTime)
		{
			KeyframeBefore = Current.KeyframeAsset;      // equality falls in here
			KeyframeAfter = Next.KeyframeAsset;

			const float TimeRange = Next.KeyframeTime - Current.KeyframeTime;
			const float TimeIntoRange = TimeOfDay - Current.KeyframeTime;
			BlendFactor = (TimeRange > 0.f) ? TimeIntoRange / TimeRange : 0.f;
			return;
		}
	}

	// Case 3: time is at/after the last key -> wrap (last -> first)
	{
		KeyframeBefore = Timeline.Last().KeyframeAsset;
		KeyframeAfter = Timeline[0].KeyframeAsset;

		const float TimeRange = (Timeline[0].KeyframeTime + DayLength) - Timeline.Last().KeyframeTime;
		const float TimeIntoRange = TimeOfDay - Timeline.Last().KeyframeTime;   // 0 if exactly on last key
		BlendFactor = TimeIntoRange / TimeRange;
	}
}
