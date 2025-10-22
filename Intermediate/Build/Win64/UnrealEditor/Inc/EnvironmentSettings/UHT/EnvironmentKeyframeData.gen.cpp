// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentKeyframeData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnvironmentKeyframeData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentKeyframeData();
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentKeyframeData_NoRegister();
UPackage* Z_Construct_UPackage__Script_EnvironmentSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvironmentKeyframeData *************************************************
void UEnvironmentKeyframeData::StaticRegisterNativesUEnvironmentKeyframeData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvironmentKeyframeData;
UClass* UEnvironmentKeyframeData::GetPrivateStaticClass()
{
	using TClass = UEnvironmentKeyframeData;
	if (!Z_Registration_Info_UClass_UEnvironmentKeyframeData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnvironmentKeyframeData"),
			Z_Registration_Info_UClass_UEnvironmentKeyframeData.InnerSingleton,
			StaticRegisterNativesUEnvironmentKeyframeData,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEnvironmentKeyframeData.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvironmentKeyframeData_NoRegister()
{
	return UEnvironmentKeyframeData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvironmentKeyframeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvironmentKeyframeData.h" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloomLuminance_MetaData[] = {
		{ "Category", "Bloom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ---------- Bloom ---------- */" },
#endif
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- Bloom ----------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "Bloom" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloomScale_MetaData[] = {
		{ "Category", "Bloom" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteAngle_MetaData[] = {
		{ "Category", "Vignette" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ---------- Vignette ---------- */" },
#endif
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- Vignette ----------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteSharpness_MetaData[] = {
		{ "Category", "Vignette" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteAmount_MetaData[] = {
		{ "Category", "Vignette" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteCenter_MetaData[] = {
		{ "Category", "Vignette" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteInnerColor_MetaData[] = {
		{ "Category", "Vignette" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteOuterColor_MetaData[] = {
		{ "Category", "Vignette" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorCubeReference_MetaData[] = {
		{ "Category", "Tint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ---------- Tint ---------- */" },
#endif
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- Tint ----------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyLightColor_MetaData[] = {
		{ "Category", "Lighting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ---------- Lighting ---------- */" },
#endif
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- Lighting ----------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularColor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyFillColor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowFillColor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFillColor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFillColor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpFillColor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownFillColor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientIrradianceScale_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/EnvironmentKeyframeData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomLuminance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BloomScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VignetteAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VignetteSharpness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VignetteAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VignetteCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VignetteInnerColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VignetteOuterColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorCubeReference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyLightColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecularColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyFillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowFillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightFillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftFillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpFillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DownFillColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientIrradianceScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentKeyframeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_BloomLuminance = { "BloomLuminance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, BloomLuminance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloomLuminance_MetaData), NewProp_BloomLuminance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, BloomThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloomThreshold_MetaData), NewProp_BloomThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_BloomScale = { "BloomScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, BloomScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloomScale_MetaData), NewProp_BloomScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteAngle = { "VignetteAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, VignetteAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteAngle_MetaData), NewProp_VignetteAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteSharpness = { "VignetteSharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, VignetteSharpness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteSharpness_MetaData), NewProp_VignetteSharpness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteAmount = { "VignetteAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, VignetteAmount), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteAmount_MetaData), NewProp_VignetteAmount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteCenter = { "VignetteCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, VignetteCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteCenter_MetaData), NewProp_VignetteCenter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteInnerColor = { "VignetteInnerColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, VignetteInnerColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteInnerColor_MetaData), NewProp_VignetteInnerColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteOuterColor = { "VignetteOuterColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, VignetteOuterColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteOuterColor_MetaData), NewProp_VignetteOuterColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_ColorCubeReference = { "ColorCubeReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, ColorCubeReference), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorCubeReference_MetaData), NewProp_ColorCubeReference_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_KeyLightColor = { "KeyLightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, KeyLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyLightColor_MetaData), NewProp_KeyLightColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_SpecularColor = { "SpecularColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, SpecularColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularColor_MetaData), NewProp_SpecularColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_KeyFillColor = { "KeyFillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, KeyFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyFillColor_MetaData), NewProp_KeyFillColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_ShadowFillColor = { "ShadowFillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, ShadowFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowFillColor_MetaData), NewProp_ShadowFillColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_RightFillColor = { "RightFillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, RightFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFillColor_MetaData), NewProp_RightFillColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_LeftFillColor = { "LeftFillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, LeftFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFillColor_MetaData), NewProp_LeftFillColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_UpFillColor = { "UpFillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, UpFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpFillColor_MetaData), NewProp_UpFillColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_DownFillColor = { "DownFillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, DownFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownFillColor_MetaData), NewProp_DownFillColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_AmbientIrradianceScale = { "AmbientIrradianceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentKeyframeData, AmbientIrradianceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientIrradianceScale_MetaData), NewProp_AmbientIrradianceScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvironmentKeyframeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_BloomLuminance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_BloomThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_BloomScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteSharpness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteInnerColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_VignetteOuterColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_ColorCubeReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_KeyLightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_SpecularColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_KeyFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_ShadowFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_RightFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_LeftFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_UpFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_DownFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentKeyframeData_Statics::NewProp_AmbientIrradianceScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentKeyframeData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvironmentKeyframeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentKeyframeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentKeyframeData_Statics::ClassParams = {
	&UEnvironmentKeyframeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvironmentKeyframeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentKeyframeData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentKeyframeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvironmentKeyframeData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvironmentKeyframeData()
{
	if (!Z_Registration_Info_UClass_UEnvironmentKeyframeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvironmentKeyframeData.OuterSingleton, Z_Construct_UClass_UEnvironmentKeyframeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvironmentKeyframeData.OuterSingleton;
}
UEnvironmentKeyframeData::UEnvironmentKeyframeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentKeyframeData);
UEnvironmentKeyframeData::~UEnvironmentKeyframeData() {}
// ********** End Class UEnvironmentKeyframeData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentKeyframeData_h__Script_EnvironmentSettings_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvironmentKeyframeData, UEnvironmentKeyframeData::StaticClass, TEXT("UEnvironmentKeyframeData"), &Z_Registration_Info_UClass_UEnvironmentKeyframeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvironmentKeyframeData), 3932493144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentKeyframeData_h__Script_EnvironmentSettings_2400479371(TEXT("/Script/EnvironmentSettings"),
	Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentKeyframeData_h__Script_EnvironmentSettings_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentKeyframeData_h__Script_EnvironmentSettings_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
