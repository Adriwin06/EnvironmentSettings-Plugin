// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentTimelineData.h"

#ifdef ENVIRONMENTSETTINGS_EnvironmentTimelineData_generated_h
#error "EnvironmentTimelineData.generated.h already included, missing '#pragma once' in EnvironmentTimelineData.h"
#endif
#define ENVIRONMENTSETTINGS_EnvironmentTimelineData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTimelineEntry ****************************************************
#define FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineEntry_Statics; \
	ENVIRONMENTSETTINGS_API static class UScriptStruct* StaticStruct();


struct FTimelineEntry;
// ********** End ScriptStruct FTimelineEntry ******************************************************

// ********** Begin Class UEnvironmentTimelineData *************************************************
ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentTimelineData_NoRegister();

#define FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvironmentTimelineData(); \
	friend struct Z_Construct_UClass_UEnvironmentTimelineData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENVIRONMENTSETTINGS_API UClass* Z_Construct_UClass_UEnvironmentTimelineData_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvironmentTimelineData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnvironmentSettings"), Z_Construct_UClass_UEnvironmentTimelineData_NoRegister) \
	DECLARE_SERIALIZER(UEnvironmentTimelineData)


#define FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvironmentTimelineData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvironmentTimelineData(UEnvironmentTimelineData&&) = delete; \
	UEnvironmentTimelineData(const UEnvironmentTimelineData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvironmentTimelineData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvironmentTimelineData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvironmentTimelineData) \
	NO_API virtual ~UEnvironmentTimelineData();


#define FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h_22_PROLOG
#define FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h_25_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvironmentTimelineData;

// ********** End Class UEnvironmentTimelineData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects__Perforce_Burnout5_Plugins_EnvironmentSettings_Source_EnvironmentSettings_Public_EnvironmentTimelineData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
