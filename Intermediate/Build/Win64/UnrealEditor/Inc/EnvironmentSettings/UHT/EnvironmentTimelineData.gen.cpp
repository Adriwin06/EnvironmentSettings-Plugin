// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentTimelineData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnvironmentTimelineData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentKeyframeData_NoRegister();
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentTimelineData();
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentTimelineData_NoRegister();
ENVIRONMENTSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineEntry();
UPackage* Z_Construct_UPackage__Script_EnvironmentSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTimelineEntry ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTimelineEntry;
class UScriptStruct* FTimelineEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTimelineEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTimelineEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineEntry, (UObject*)Z_Construct_UPackage__Script_EnvironmentSettings(), TEXT("TimelineEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FTimelineEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTimelineEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EnvironmentTimelineData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyframeTime_MetaData[] = {
		{ "Category", "Timeline Entry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time of day (seconds since 00:00) */" },
#endif
		{ "ModuleRelativePath", "Public/EnvironmentTimelineData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time of day (seconds since 00:00)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyframeAsset_MetaData[] = {
		{ "Category", "Timeline Entry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Asset played at this time */" },
#endif
		{ "ModuleRelativePath", "Public/EnvironmentTimelineData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset played at this time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyframeTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyframeAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimelineEntry_Statics::NewProp_KeyframeTime = { "KeyframeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineEntry, KeyframeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyframeTime_MetaData), NewProp_KeyframeTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineEntry_Statics::NewProp_KeyframeAsset = { "KeyframeAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineEntry, KeyframeAsset), Z_Construct_UClass_UEnvironmentKeyframeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyframeAsset_MetaData), NewProp_KeyframeAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineEntry_Statics::NewProp_KeyframeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineEntry_Statics::NewProp_KeyframeAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentSettings,
	nullptr,
	&NewStructOps,
	"TimelineEntry",
	Z_Construct_UScriptStruct_FTimelineEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEntry_Statics::PropPointers),
	sizeof(FTimelineEntry),
	alignof(FTimelineEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimelineEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimelineEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FTimelineEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTimelineEntry.InnerSingleton, Z_Construct_UScriptStruct_FTimelineEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTimelineEntry.InnerSingleton;
}
// ********** End ScriptStruct FTimelineEntry ******************************************************

// ********** Begin Class UEnvironmentTimelineData *************************************************
void UEnvironmentTimelineData::StaticRegisterNativesUEnvironmentTimelineData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvironmentTimelineData;
UClass* UEnvironmentTimelineData::GetPrivateStaticClass()
{
	using TClass = UEnvironmentTimelineData;
	if (!Z_Registration_Info_UClass_UEnvironmentTimelineData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnvironmentTimelineData"),
			Z_Registration_Info_UClass_UEnvironmentTimelineData.InnerSingleton,
			StaticRegisterNativesUEnvironmentTimelineData,
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
	return Z_Registration_Info_UClass_UEnvironmentTimelineData.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvironmentTimelineData_NoRegister()
{
	return UEnvironmentTimelineData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvironmentTimelineData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvironmentTimelineData.h" },
		{ "ModuleRelativePath", "Public/EnvironmentTimelineData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeline_MetaData[] = {
		{ "Category", "Timeline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ---------- Timeline ---------- */" },
#endif
		{ "ModuleRelativePath", "Public/EnvironmentTimelineData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- Timeline ----------" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timeline_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Timeline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentTimelineData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvironmentTimelineData_Statics::NewProp_Timeline_Inner = { "Timeline", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimelineEntry, METADATA_PARAMS(0, nullptr) }; // 1112032177
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvironmentTimelineData_Statics::NewProp_Timeline = { "Timeline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvironmentTimelineData, Timeline), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeline_MetaData), NewProp_Timeline_MetaData) }; // 1112032177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvironmentTimelineData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentTimelineData_Statics::NewProp_Timeline_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentTimelineData_Statics::NewProp_Timeline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentTimelineData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvironmentTimelineData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentTimelineData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentTimelineData_Statics::ClassParams = {
	&UEnvironmentTimelineData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvironmentTimelineData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentTimelineData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentTimelineData_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvironmentTimelineData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvironmentTimelineData()
{
	if (!Z_Registration_Info_UClass_UEnvironmentTimelineData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvironmentTimelineData.OuterSingleton, Z_Construct_UClass_UEnvironmentTimelineData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvironmentTimelineData.OuterSingleton;
}
UEnvironmentTimelineData::UEnvironmentTimelineData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentTimelineData);
UEnvironmentTimelineData::~UEnvironmentTimelineData() {}
// ********** End Class UEnvironmentTimelineData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h__Script_EnvironmentSettings_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTimelineEntry::StaticStruct, Z_Construct_UScriptStruct_FTimelineEntry_Statics::NewStructOps, TEXT("TimelineEntry"), &Z_Registration_Info_UScriptStruct_FTimelineEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineEntry), 1112032177U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvironmentTimelineData, UEnvironmentTimelineData::StaticClass, TEXT("UEnvironmentTimelineData"), &Z_Registration_Info_UClass_UEnvironmentTimelineData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvironmentTimelineData), 261717960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h__Script_EnvironmentSettings_574399694(TEXT("/Script/EnvironmentSettings"),
	Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h__Script_EnvironmentSettings_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h__Script_EnvironmentSettings_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h__Script_EnvironmentSettings_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h__Script_EnvironmentSettings_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
