#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnvironmentKeyframeData.generated.h"

class UTexture;

UCLASS(BlueprintType)
class ENVIRONMENTSETTINGS_API UEnvironmentKeyframeData : public UDataAsset
{
	GENERATED_BODY()

public:

    /* ---------- Bloom ---------- */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloom")
    float BloomLuminance = 1.13f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloom")
    float BloomThreshold = 0.56f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloom")
    FVector4 BloomScale = FVector4(0.f);

    /* ---------- Vignette ---------- */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vignette")
    float VignetteAngle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vignette")
    float VignetteSharpness = 0.27f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vignette")
    FVector2D VignetteAmount = FVector2D(0.3f, 0.94f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vignette")
    FVector2D VignetteCenter = FVector2D(0.5f, 0.55f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vignette")
    FLinearColor VignetteInnerColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vignette")
    FLinearColor VignetteOuterColor;

    /* ---------- Tint ---------- */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tint")
    UTexture* ColorCubeReference = nullptr;

    /* ---------- Lighting ---------- */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
    FLinearColor KeyLightColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
    FLinearColor SpecularColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
    FLinearColor KeyFillColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
    FLinearColor ShadowFillColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
    FLinearColor RightFillColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
    FLinearColor LeftFillColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
    FLinearColor UpFillColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
    FLinearColor DownFillColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
    float AmbientIrradianceScale = 0.4f;

};
