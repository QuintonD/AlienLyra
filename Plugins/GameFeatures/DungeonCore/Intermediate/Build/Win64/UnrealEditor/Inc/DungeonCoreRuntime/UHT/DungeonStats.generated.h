// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Attributes/DungeonStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef DUNGEONCORERUNTIME_DungeonStats_generated_h
#error "DungeonStats.generated.h already included, missing '#pragma once' in DungeonStats.h"
#endif
#define DUNGEONCORERUNTIME_DungeonStats_generated_h

#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_SPARSE_DATA
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxAgility); \
	DECLARE_FUNCTION(execOnRep_Agility); \
	DECLARE_FUNCTION(execOnRep_MaxStrength); \
	DECLARE_FUNCTION(execOnRep_Strength); \
	DECLARE_FUNCTION(execOnRep_BaseShieldRegen); \
	DECLARE_FUNCTION(execOnRep_MaxShield); \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execOnRep_BaseEnergyRegen); \
	DECLARE_FUNCTION(execOnRep_MaxEnergy); \
	DECLARE_FUNCTION(execOnRep_Energy);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonStats(); \
	friend struct Z_Construct_UClass_UDungeonStats_Statics; \
public: \
	DECLARE_CLASS(UDungeonStats, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStats) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Energy=NETFIELD_REP_START, \
		MaxEnergy, \
		BaseEnergyRegen, \
		Shield, \
		MaxShield, \
		BaseShieldRegen, \
		Strength, \
		MaxStrength, \
		Agility, \
		MaxAgility, \
		NETFIELD_REP_END=MaxAgility	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDungeonStats) \
public:


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonStats(UDungeonStats&&); \
	NO_API UDungeonStats(const UDungeonStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonStats) \
	NO_API virtual ~UDungeonStats();


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_25_PROLOG
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_SPARSE_DATA \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_INCLASS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONCORERUNTIME_API UClass* StaticClass<class UDungeonStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
