// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentStatics.h"
#include "EnvironmentKeyframeData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnvironmentStatics() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentKeyframeData_NoRegister();
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentStatics();
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentStatics_NoRegister();
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentTimelineData_NoRegister();
UPackage* Z_Construct_UPackage__Script_EnvironmentSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvironmentStatics Function GetEnvironmentKeyframesForTime **************
struct Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics
{
	struct EnvironmentStatics_eventGetEnvironmentKeyframesForTime_Parms
	{
		const UEnvironmentTimelineData* TimelineData;
		float TimeOfDay;
		UEnvironmentKeyframeData* KeyframeBefore;
		UEnvironmentKeyframeData* KeyframeAfter;
		float BlendFactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Burnout5 Tools | PostFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds the two keyframes before and after a given time of day and calculates the blend factor between them.\n\x09 * @param TimelineData The timeline asset to search through.\n\x09 * @param TimeOfDay The current time to evaluate (in seconds since 00:00).\n\x09 * @param KeyframeBefore The keyframe asset immediately before the given time.\n\x09 * @param KeyframeAfter The keyframe asset immediately after the given time.\n\x09 * @param BlendFactor The calculated blend factor (alpha) between 0.0 and 1.0.\n\x09 */" },
#endif
		{ "DisplayName", "Get Environment Keyframes for Time" },
		{ "ModuleRelativePath", "Public/EnvironmentStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the two keyframes before and after a given time of day and calculates the blend factor between them.\n@param TimelineData The timeline asset to search through.\n@param TimeOfDay The current time to evaluate (in seconds since 00:00).\n@param KeyframeBefore The keyframe asset immediately before the given time.\n@param KeyframeAfter The keyframe asset immediately after the given time.\n@param BlendFactor The calculated blend factor (alpha) between 0.0 and 1.0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfDay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimelineData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyframeBefore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyframeAfter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_TimelineData = { "TimelineData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentStatics_eventGetEnvironmentKeyframesForTime_Parms, TimelineData), Z_Construct_UClass_UEnvironmentTimelineData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineData_MetaData), NewProp_TimelineData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentStatics_eventGetEnvironmentKeyframesForTime_Parms, TimeOfDay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfDay_MetaData), NewProp_TimeOfDay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_KeyframeBefore = { "KeyframeBefore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentStatics_eventGetEnvironmentKeyframesForTime_Parms, KeyframeBefore), Z_Construct_UClass_UEnvironmentKeyframeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_KeyframeAfter = { "KeyframeAfter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentStatics_eventGetEnvironmentKeyframesForTime_Parms, KeyframeAfter), Z_Construct_UClass_UEnvironmentKeyframeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_BlendFactor = { "BlendFactor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentStatics_eventGetEnvironmentKeyframesForTime_Parms, BlendFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_TimelineData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_TimeOfDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_KeyframeBefore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_KeyframeAfter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::NewProp_BlendFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnvironmentStatics, nullptr, "GetEnvironmentKeyframesForTime", Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::EnvironmentStatics_eventGetEnvironmentKeyframesForTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::EnvironmentStatics_eventGetEnvironmentKeyframesForTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnvironmentStatics::execGetEnvironmentKeyframesForTime)
{
	P_GET_OBJECT(UEnvironmentTimelineData,Z_Param_TimelineData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfDay);
	P_GET_OBJECT_REF(UEnvironmentKeyframeData,Z_Param_Out_KeyframeBefore);
	P_GET_OBJECT_REF(UEnvironmentKeyframeData,Z_Param_Out_KeyframeAfter);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BlendFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEnvironmentStatics::GetEnvironmentKeyframesForTime(Z_Param_TimelineData,Z_Param_TimeOfDay,P_ARG_GC_BARRIER(Z_Param_Out_KeyframeBefore),P_ARG_GC_BARRIER(Z_Param_Out_KeyframeAfter),Z_Param_Out_BlendFactor);
	P_NATIVE_END;
}
// ********** End Class UEnvironmentStatics Function GetEnvironmentKeyframesForTime ****************

// ********** Begin Class UEnvironmentStatics ******************************************************
void UEnvironmentStatics::StaticRegisterNativesUEnvironmentStatics()
{
	UClass* Class = UEnvironmentStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEnvironmentKeyframesForTime", &UEnvironmentStatics::execGetEnvironmentKeyframesForTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvironmentStatics;
UClass* UEnvironmentStatics::GetPrivateStaticClass()
{
	using TClass = UEnvironmentStatics;
	if (!Z_Registration_Info_UClass_UEnvironmentStatics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnvironmentStatics"),
			Z_Registration_Info_UClass_UEnvironmentStatics.InnerSingleton,
			StaticRegisterNativesUEnvironmentStatics,
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
	return Z_Registration_Info_UClass_UEnvironmentStatics.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvironmentStatics_NoRegister()
{
	return UEnvironmentStatics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvironmentStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentStatics.h" },
		{ "ModuleRelativePath", "Public/EnvironmentStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnvironmentStatics_GetEnvironmentKeyframesForTime, "GetEnvironmentKeyframesForTime" }, // 4092558430
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvironmentStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentStatics_Statics::ClassParams = {
	&UEnvironmentStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvironmentStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvironmentStatics()
{
	if (!Z_Registration_Info_UClass_UEnvironmentStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvironmentStatics.OuterSingleton, Z_Construct_UClass_UEnvironmentStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvironmentStatics.OuterSingleton;
}
UEnvironmentStatics::UEnvironmentStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentStatics);
UEnvironmentStatics::~UEnvironmentStatics() {}
// ********** End Class UEnvironmentStatics ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentStatics_h__Script_EnvironmentSettings_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvironmentStatics, UEnvironmentStatics::StaticClass, TEXT("UEnvironmentStatics"), &Z_Registration_Info_UClass_UEnvironmentStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvironmentStatics), 2616930844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentStatics_h__Script_EnvironmentSettings_1113886872(TEXT("/Script/EnvironmentSettings"),
	Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentStatics_h__Script_EnvironmentSettings_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentStatics_h__Script_EnvironmentSettings_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
